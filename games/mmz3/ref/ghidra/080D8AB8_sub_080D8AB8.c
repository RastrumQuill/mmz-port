// sub_080D8AB8 at 0x080D8AB8 (thumb)

undefined4 sub_080D8AB8(int param_1)

{
  undefined4 in_lr;
  
  if (param_1 != 0) {
    *(undefined *)(param_1 + 0x13) = 1;
  }
  return in_lr;
}

