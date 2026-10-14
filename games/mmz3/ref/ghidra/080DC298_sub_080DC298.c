// sub_080DC298 at 0x080DC298 (thumb)

undefined4 sub_080DC298(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080DC2EC(param_1);
  }
  else {
    sub_080DC3D0(param_1);
  }
  return in_lr;
}

