// sub_080808F0 at 0x080808F0 (thumb)

undefined4 sub_080808F0(int param_1)

{
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined *)(param_1 + 0xb9) = 0;
  }
  return in_lr;
}

