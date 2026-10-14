// sub_080B6CF8 at 0x080B6CF8 (thumb)

undefined4 sub_080B6CF8(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080B6D8C();
  return in_lr;
}

