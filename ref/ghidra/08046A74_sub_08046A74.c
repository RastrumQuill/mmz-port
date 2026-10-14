// sub_08046A74 at 0x08046A74 (thumb)

undefined4 sub_08046A74(int param_1)

{
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0xb8) + 0x2000) ||
     (*(int *)(param_1 + 0xb8) + 0x1c000 < *(int *)(param_1 + 0x4c))) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x5c);
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
  return in_lr;
}

