// sub_080CB8EC at 0x080CB8EC (thumb)

undefined4 sub_080CB8EC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    if (*(int *)(param_1 + 0xb4) < iVar1) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x58);
    if (iVar1 - *(int *)(param_1 + 0x58) < 0x1001) {
      *(int *)(param_1 + 0x58) = iVar1 + -0x1000;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar1;
      if (0x700 < iVar1) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    }
  }
  return in_lr;
}

