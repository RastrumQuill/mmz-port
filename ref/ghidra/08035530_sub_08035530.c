// sub_08035530 at 0x08035530 (thumb)

undefined4 sub_08035530(int param_1)

{
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0xb8) + 0x2000) ||
     (*(int *)(param_1 + 0xb8) + 0xd000 < *(int *)(param_1 + 0x4c))) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc4);
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
  return in_lr;
}

