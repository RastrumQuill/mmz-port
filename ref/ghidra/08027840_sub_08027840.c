// sub_08027840 at 0x08027840 (thumb)

undefined4 sub_08027840(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_0802785C(param_1);
  }
  else {
    sub_08027DBC(param_1);
  }
  return in_lr;
}

