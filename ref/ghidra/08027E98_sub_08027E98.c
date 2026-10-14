// sub_08027E98 at 0x08027E98 (thumb)

undefined4 sub_08027E98(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_08027EB4(param_1);
  }
  else {
    sub_08027F0C(param_1);
  }
  return in_lr;
}

