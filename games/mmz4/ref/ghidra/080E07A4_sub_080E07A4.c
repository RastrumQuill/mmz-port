// sub_080E07A4 at 0x080E07A4 (thumb)

undefined4 sub_080E07A4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = *(byte *)(param_1 + 0x11) - 2 & 0xff;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_0886544c + uVar2 * 2));
  iVar1 = uVar2 * 8;
  iVar3 = *(int *)(&DAT_08865434 + iVar1);
  *(int *)(param_1 + 0x5c) = iVar3 << 8;
  *(int *)(param_1 + 0x60) = *(int *)(&DAT_08865438 + iVar1) << 8;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(&DAT_0886541c + iVar1) * 0x100;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(&DAT_0886541c + iVar1) * -0x100;
    iVar3 = iVar3 * -0x10000;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(&DAT_08865420 + uVar2 * 8) * 0x100;
  *(undefined *)(param_1 + 0x74) = 0;
  return in_lr;
}

