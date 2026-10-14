// sub_080A9D18 at 0x080A9D18 (thumb)

undefined4 sub_080A9D18(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x10) < 10) {
    sub_080A9FB0();
  }
  else {
    sub_080A9FF4();
  }
  return in_lr;
}

