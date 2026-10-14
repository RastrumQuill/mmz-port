// sub_08025F64 at 0x08025F64 (thumb)

undefined4 sub_08025F64(int param_1)

{
  undefined4 in_lr;
  
  if (param_1 == *(int *)(*(int *)(param_1 + 0x20) + 0xd4)) {
    sub_08025F84(param_1);
  }
  else {
    sub_08025FE4(param_1);
  }
  return in_lr;
}

