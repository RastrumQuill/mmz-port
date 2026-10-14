// sub_080B9594 at 0x080B9594 (thumb)

undefined4 sub_080B9594(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_080B95A8();
  return in_lr;
}

