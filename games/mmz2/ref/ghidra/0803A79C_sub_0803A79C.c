// sub_0803A79C at 0x0803A79C (thumb)

undefined4 sub_0803A79C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 0x10);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  if (param_1 == *(int *)(*(int *)(param_1 + 0x28) + 0x2c)) {
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2c) = 0;
  }
  return in_lr;
}

