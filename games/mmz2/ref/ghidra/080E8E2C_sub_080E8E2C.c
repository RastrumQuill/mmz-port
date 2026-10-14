// sub_080E8E2C at 0x080E8E2C (thumb)

undefined8 sub_080E8E2C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080DB904(param_1,*(undefined *)(param_1 + 5));
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 3) = 1;
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return CONCAT44(in_lr,2);
}

