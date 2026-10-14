// sub_080ACC1C at 0x080ACC1C (thumb)

undefined4 sub_080ACC1C(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar1 = DAT_0202286c;
  if (((*(char *)(param_1 + 0xd) != '\x03') && ((*(ushort *)(param_1 + 0x90) & 0x2000) != 0)) &&
     (DAT_02022874 != '\0')) {
    uVar2 = sub_080AD060(param_1);
    *(undefined2 *)(param_1 + 0xc4) = uVar2;
    sub_080BC808(*(undefined2 *)(param_1 + 0xc4));
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b6750 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (((*(byte *)(iVar1 + 0x128) & 1) != 0) && ((DAT_02022ae9 & 0x40) == 0)) {
    iVar3 = *(int *)(iVar1 + 0x4c);
    iVar4 = *(int *)(param_1 + 0x4c);
    iVar5 = iVar3 - iVar4;
    if (iVar5 < 0) {
      iVar5 = iVar4 - iVar3;
    }
    if ((iVar5 < 0x2401) && (*(int *)(iVar1 + 0x50) <= *(int *)(param_1 + 0x50) + 0x3000)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar4 = iVar4 + -0x2400;
        if (iVar3 <= iVar4) {
          return in_lr;
        }
      }
      else {
        iVar4 = iVar4 + 0x2400;
        if (iVar4 <= iVar3) {
          return in_lr;
        }
      }
      *(int *)(iVar1 + 0x4c) = iVar4;
    }
  }
  return in_lr;
}

