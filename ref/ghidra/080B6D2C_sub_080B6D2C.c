// sub_080B6D2C at 0x080B6D2C (thumb)

undefined4 sub_080B6D2C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xbe) = 0x2d;
  sub_080B6D44();
  return in_lr;
}

