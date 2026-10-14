// sub_080B1E28 at 0x080B1E28 (thumb)

undefined8 sub_080B1E28(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(DAT_0202dbf0 + 0x58) + -0x1400;
  if ((*(int *)(param_1 + 0x58) + -0x1c00 < iVar2) && (iVar2 < *(int *)(param_1 + 0x58) + 0x1c00)) {
    iVar2 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < *(int *)(&DAT_088600f0 + (uint)*(byte *)(param_1 + 0xb5) * 4)) {
      uVar1 = 1;
      goto LAB_080b1e82;
    }
  }
  uVar1 = 0;
LAB_080b1e82:
  return CONCAT44(in_lr,uVar1);
}

