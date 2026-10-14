// sub_080A1B2C at 0x080A1B2C (thumb)

undefined4 sub_080A1B2C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0809C980();
  iVar1 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar1 < *(int *)(param_1 + 0xc0) + -0x8c00) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}

