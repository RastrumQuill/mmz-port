// sub_08073C38 at 0x08073C38 (thumb)

undefined8 sub_08073C38(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x54) = iVar1;
    if (param_2 < 0) {
      iVar1 = sub_0800A04C(iVar1,*(undefined4 *)(param_1 + 0x58));
      if (0 < iVar1) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
        uVar2 = 2;
        goto LAB_08073c78;
      }
    }
    else {
      iVar1 = sub_08009ED0(iVar1,*(undefined4 *)(param_1 + 0x58));
      if (iVar1 < 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
        uVar2 = 1;
        goto LAB_08073c78;
      }
    }
  }
  uVar2 = 0;
LAB_08073c78:
  return CONCAT44(in_lr,uVar2);
}

