// sub_080A9D00 at 0x080A9D00 (thumb)

undefined4 sub_080A9D00(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x10) < 10) {
    sub_080A9D50();
  }
  else {
    sub_080A9E6C();
  }
  return in_lr;
}

