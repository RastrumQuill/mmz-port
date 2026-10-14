// sub_0805AF00 at 0x0805AF00 (thumb)

undefined4 sub_0805AF00(int param_1)

{
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4) + 0x2000) ||
     (*(int *)(param_1 + 0xd8) + -0x2000 < *(int *)(param_1 + 0x54))) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xc0);
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
  return in_lr;
}

