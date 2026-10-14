// sub_080DAFF4 at 0x080DAFF4 (thumb)

undefined4 sub_080DAFF4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080DB004();
  return in_lr;
}

