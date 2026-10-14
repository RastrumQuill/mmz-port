// sub_080A92FC at 0x080A92FC (thumb)

undefined4 sub_080A92FC(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x10) < 10) {
    sub_080A9598();
  }
  else {
    sub_080A95DC();
  }
  return in_lr;
}

