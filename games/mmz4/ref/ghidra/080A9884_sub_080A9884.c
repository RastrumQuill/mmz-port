// sub_080A9884 at 0x080A9884 (thumb)

undefined8 sub_080A9884(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
  if (iVar2 < 0) {
    iVar2 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
  }
  if (iVar2 < 0x7801) {
    iVar2 = *(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58);
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x58) - *(int *)(DAT_0202dbf0 + 0x58);
    }
    if (iVar2 < 0x5001) {
      uVar1 = 1;
      goto LAB_080a98d8;
    }
  }
  uVar1 = 0;
LAB_080a98d8:
  return CONCAT44(in_lr,uVar1);
}

