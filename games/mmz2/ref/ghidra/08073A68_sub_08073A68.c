// sub_08073A68 at 0x08073A68 (thumb)

undefined4 sub_08073A68(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08073BF4(param_1);
  }
  else {
    sub_08073CF4(param_1);
  }
  return in_lr;
}

