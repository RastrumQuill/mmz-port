// sub_08033AFC at 0x08033AFC (thumb)

undefined4 sub_08033AFC(int param_1)

{
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0xb8) + 0x2800) ||
     (*(int *)(param_1 + 0xb8) + 0x1b800 < *(int *)(param_1 + 0x4c))) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc0);
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x4c);
  return in_lr;
}

