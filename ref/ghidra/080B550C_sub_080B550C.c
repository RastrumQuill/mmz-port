// sub_080B550C at 0x080B550C (thumb)

undefined4 sub_080B550C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 4);
  sub_080B3D28(param_1);
  sub_080B3DE4(param_1,0);
  sub_080B5540(param_1);
  return in_lr;
}

