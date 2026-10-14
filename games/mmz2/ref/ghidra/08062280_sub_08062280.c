// sub_08062280 at 0x08062280 (thumb)

undefined4 sub_08062280(int param_1)

{
  undefined4 in_lr;
  
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffd | 1;
  *(undefined4 *)(param_1 + 0x68) = 0xfffffffa;
  if (*(int *)(param_1 + 0x60) + 0x200U < 0x400) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -6;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(undefined *)(param_1 + 0xc1) = 0;
  if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc);
    *(undefined *)(param_1 + 0xc1) = 1;
  }
  return in_lr;
}

