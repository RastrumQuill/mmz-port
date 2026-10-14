// sub_08021B34 at 0x08021B34 (thumb)

undefined4 sub_08021B34(int param_1)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_020002b0;
  if (((*(int *)(*(int *)(param_1 + 0x20) + 0x54) - 0x59001U < 0x19fff) &&
      (iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x58), iVar4 < 0x5a000)) &&
     ((6 >> DAT_020300e1 & 1U) != 0)) {
    if ((*(ushort *)(param_1 + 10) & 1) != 0) {
      return in_lr;
    }
    if (iVar4 < 0x28000) {
      uVar3 = 0;
    }
    else if (iVar4 < 0x32000) {
      uVar3 = 1;
    }
    else if (iVar4 < 0x3c000) {
      uVar3 = 2;
    }
    else if (iVar4 < 0x46000) {
      uVar3 = 3;
    }
    else {
      uVar3 = 5;
      if (iVar4 < 0x50000) {
        uVar3 = 4;
      }
    }
    DAT_020002b0 = sub_080CF690(uVar3);
    if (DAT_020002b0 == 0) {
      return in_lr;
    }
    uVar2 = *(ushort *)(param_1 + 10) | 1;
  }
  else {
    if ((*(ushort *)(param_1 + 10) & 1) == 0) {
      return in_lr;
    }
    *(byte *)(DAT_020002b0 + 10) = *(byte *)(DAT_020002b0 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
    uVar2 = *(ushort *)(param_1 + 10) ^ 1;
  }
  *(ushort *)(param_1 + 10) = uVar2;
  return in_lr;
}

