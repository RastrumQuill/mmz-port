// sub_0803D78C at 0x0803D78C (thumb)

undefined4 sub_0803D78C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0xb8) + 0x2000) ||
     (*(int *)(param_1 + 0xb8) + 0x1c000 < *(int *)(param_1 + 0x4c))) {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc4);
  }
  if ((*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0xbc) + 0x5000) ||
     (*(int *)(param_1 + 0xbc) + 0xe000 < *(int *)(param_1 + 0x50))) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 200);
  }
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x50);
  return in_lr;
}

