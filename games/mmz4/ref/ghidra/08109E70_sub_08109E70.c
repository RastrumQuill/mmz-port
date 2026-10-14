// sub_08109E70 at 0x08109E70 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08109E70(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  cVar1 = *(char *)(iVar3 + 0xdcc);
  if (*(char *)(param_1 + 0x11) != cVar1) {
    if (cVar1 == *(char *)(param_1 + 0x10)) {
      if (cVar1 == '\x04') {
        sub_0801CFC8(param_1,*(short *)(&DAT_0886962a + (uint)*(byte *)(param_1 + 0x10) * 2) + 1,1,4
                    );
      }
      else {
        sub_0801CFC8(param_1,*(short *)(&DAT_0886962a + (uint)*(byte *)(param_1 + 0x10) * 2) + 1,2,
                     0x10);
      }
    }
    else {
      sub_0801CF00(param_1,*(undefined2 *)(&DAT_0886962a + (uint)*(byte *)(param_1 + 0x10) * 2));
    }
    *(undefined *)(param_1 + 0x11) = *(undefined *)(iVar3 + 0xdcc);
  }
  if ((*(char *)(iVar3 + 3) != '\0') && (*(char *)(iVar3 + 0xdcc) == *(char *)(param_1 + 0x10))) {
    sub_0801CFC8(param_1,*(short *)(&DAT_0886962a + (uint)*(byte *)(param_1 + 0x10) * 2) + 1,2,0x10)
    ;
  }
  sub_0801CFF0(param_1);
  bVar2 = (&DAT_08869620)[*(byte *)(param_1 + 0x10)];
  *(uint *)(param_1 + 0x54) = (uint)bVar2 * 0x100;
  *(uint *)(param_1 + 0x58) = (uint)(byte)(&DAT_08869625)[*(byte *)(param_1 + 0x10)] << 8;
  if (*(char *)(iVar3 + 0xdce) == '\0') {
    if (0x100 < _DAT_02000a10) {
      *(uint *)(param_1 + 0x54) = (uint)bVar2 * 0x100 + 0x20000;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

