// sub_080DDEC8 at 0x080DDEC8 (thumb)

undefined4 sub_080DDEC8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 2;
  sub_080DDED8();
  return in_lr;
}

