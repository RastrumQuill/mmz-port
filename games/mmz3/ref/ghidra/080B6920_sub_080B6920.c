// sub_080B6920 at 0x080B6920 (thumb)

undefined4 sub_080B6920(int param_1)

{
  undefined4 in_lr;
  
  sub_080B2484(1,param_1 + 0x54);
  sub_0800471C(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

