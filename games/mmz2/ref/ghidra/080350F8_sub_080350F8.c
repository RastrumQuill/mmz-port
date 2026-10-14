// sub_080350F8 at 0x080350F8 (thumb)

undefined4 sub_080350F8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x2b6) == '\x01') {
    sub_0803518C(param_1);
  }
  else {
    sub_08035120(param_1);
  }
  return in_lr;
}

