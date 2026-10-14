// sub_0801B08C at 0x0801B08C (thumb)

undefined4 sub_0801B08C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    sub_080E8F60();
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    sub_080E8F60();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    sub_080E8F60();
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    sub_080E8F60();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    sub_080E8F60();
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    sub_080E8F60();
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return in_lr;
}

