// sub_080261EC at 0x080261EC (thumb)

undefined4 sub_080261EC(int param_1)

{
  undefined4 in_lr;
  
  if (param_1 == *(int *)(*(int *)(param_1 + 0x20) + 0xd4)) {
    sub_0802620C(param_1);
  }
  else {
    sub_0802622C(param_1);
  }
  return in_lr;
}

