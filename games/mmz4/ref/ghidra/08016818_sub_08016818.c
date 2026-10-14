// sub_08016818 at 0x08016818 (thumb)

undefined4 sub_08016818(int param_1)

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
  sub_08002B5C(0x74);
  return in_lr;
}

