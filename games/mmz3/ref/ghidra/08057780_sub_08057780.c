// sub_08057780 at 0x08057780 (thumb)

undefined4 sub_08057780(int param_1)

{
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4) + 0x1000) ||
     (*(int *)(param_1 + 0xb4) + 0x14000 < *(int *)(param_1 + 0x54))) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xbc);
  }
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb8) + 0x3000) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xc0);
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
  return in_lr;
}

