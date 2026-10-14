// sub_080AEEEC at 0x080AEEEC (thumb)

undefined4 sub_080AEEEC(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08369bec + (uint)*(byte *)(param_1 + 0xe) * 4));
    if ((*(int *)(iVar3 + 0x2c) == param_1) && (*(byte *)(iVar3 + 0xe) < 5)) {
      if (*(byte *)(iVar3 + 0xe) != 4) {
        return in_lr;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar3 + 0x58) = uVar1;
      return in_lr;
    }
    uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar2 < 0x2001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar1 = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar1 = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return in_lr;
}

