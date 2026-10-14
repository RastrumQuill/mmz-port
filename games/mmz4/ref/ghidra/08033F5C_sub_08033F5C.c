// sub_08033F5C at 0x08033F5C (thumb)

undefined4 sub_08033F5C(int param_1)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 6;
  pbVar3 = (byte *)(param_1 + 0x156);
  puVar4 = (undefined *)(param_1 + 0x14f);
  *puVar4 = (&DAT_0884fb80)[*pbVar3];
  sub_0803A3BC(param_1,*(undefined2 *)(&DAT_0884fb78 + (uint)*pbVar3 * 2));
  sub_0803A3FC(param_1,*(undefined2 *)(&DAT_0884fb78 + (uint)*pbVar3 * 2));
  cVar1 = *(char *)(param_1 + 0xfa);
  if (cVar1 == '\x02') {
    cVar1 = sub_0802CA4C(param_1,0);
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0x151) + -1;
      *(char *)(param_1 + 0x151) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *puVar4 = 0xff;
      *(undefined *)(param_1 + 0x101) = 4;
      iVar2 = 0x102;
    }
    else {
      *puVar4 = 0xff;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      iVar2 = 0x100;
    }
    *(undefined *)(param_1 + iVar2) = 0;
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

