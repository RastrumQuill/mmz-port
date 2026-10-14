// sub_08042208 at 0x08042208 (thumb)

undefined4 sub_08042208(int param_1)

{
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0xb8) + 0x2000) ||
     (*(int *)(param_1 + 0xb8) + 0x1c000 < *(int *)(param_1 + 0x4c))) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc0);
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0xbc) + 0x3000) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xc4);
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x50);
  return in_lr;
}

