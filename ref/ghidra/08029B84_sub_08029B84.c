// sub_08029B84 at 0x08029B84 (thumb)

undefined4 sub_08029B84(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xbb) = 0;
  *(undefined *)(param_1 + 0xbd) = 0;
  sub_08001EE8((int)*(short *)(param_1 + 0xbe));
  sub_08029634(param_1);
  return in_lr;
}

