// sub_080BA0E0 at 0x080BA0E0 (thumb)

undefined4 sub_080BA0E0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080BA0F0();
  return in_lr;
}

