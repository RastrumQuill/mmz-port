// sub_080363D4 at 0x080363D4 (thumb)

undefined4 sub_080363D4(int param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  pbVar4 = (byte *)(param_1 + 0x156);
  puVar2 = (undefined *)(param_1 + 0x14f);
  *puVar2 = (&DAT_0884fd00)[*pbVar4];
  sub_0803A3BC(param_1,*(undefined2 *)(&DAT_0884fcf8 + (uint)*pbVar4 * 2));
  sub_0803A3FC(param_1,*(undefined2 *)(&DAT_0884fcf8 + (uint)*pbVar4 * 2));
  cVar1 = *(char *)(param_1 + 0xfa);
  if (cVar1 == '\x02') {
    cVar1 = sub_0802CA4C(param_1,0);
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0x151) + -1;
      *(char *)(param_1 + 0x151) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *puVar2 = 0xff;
      *(undefined *)(param_1 + 0x101) = 4;
      iVar3 = 0x102;
    }
    else {
      *puVar2 = 0xff;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      iVar3 = 0x100;
    }
    *(undefined *)(param_1 + iVar3) = 0;
  }
  else {
    if (cVar1 != '\b') {
      if (*(char *)(param_1 + 0xc0) == '\x02') {
        *(char *)(param_1 + 0xc0) = cVar1;
      }
      else {
        *(char *)(param_1 + 0xc1) = cVar1;
      }
    }
    *(undefined *)(param_1 + 0x101) = 2;
    *(undefined *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}

