// sub_080F7928 at 0x080F7928 (thumb)

undefined4 sub_080F7928(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xdf5) = 1;
  sub_08004230(0x3e);
  sub_08004230(0x3f);
  *(undefined *)(*(int *)(param_1 + 0xdf0) + 0x78) = 1;
  return in_lr;
}

