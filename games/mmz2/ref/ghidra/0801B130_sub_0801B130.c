// sub_0801B130 at 0x0801B130 (thumb)

undefined4 sub_0801B130(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_02000028;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x54) - 0x59001U < 0x19fff) {
    if ((*(ushort *)(param_1 + 10) & 1) != 0) {
      return in_lr;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x58);
    if (iVar2 < 0x28000) {
      uVar3 = 0;
    }
    else if (iVar2 < 0x32000) {
      uVar3 = 1;
    }
    else if (iVar2 < 0x3c000) {
      uVar3 = 2;
    }
    else if (iVar2 < 0x46000) {
      uVar3 = 3;
    }
    else {
      uVar3 = 5;
      if (iVar2 < 0x50000) {
        uVar3 = 4;
      }
    }
    DAT_02000028 = sub_080CA834(uVar3);
    if (DAT_02000028 == 0) {
      return in_lr;
    }
    uVar1 = *(ushort *)(param_1 + 10) | 1;
  }
  else {
    if ((*(ushort *)(param_1 + 10) & 1) == 0) {
      return in_lr;
    }
    *(byte *)(DAT_02000028 + 10) = *(byte *)(DAT_02000028 + 10) & 0xfc;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
    uVar1 = *(ushort *)(param_1 + 10) ^ 1;
  }
  *(ushort *)(param_1 + 10) = uVar1;
  return in_lr;
}

