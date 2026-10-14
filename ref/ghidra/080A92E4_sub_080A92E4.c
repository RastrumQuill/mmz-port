// sub_080A92E4 at 0x080A92E4 (thumb)

undefined4 sub_080A92E4(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x10) < 10) {
    sub_080A9334();
  }
  else {
    sub_080A945C();
  }
  return in_lr;
}

