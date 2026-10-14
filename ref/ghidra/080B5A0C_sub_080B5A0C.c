// sub_080B5A0C at 0x080B5A0C (thumb)

undefined4 sub_080B5A0C(int param_1)

{
  undefined4 in_lr;
  
  sub_080B3D28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
  sub_080B3DE4(param_1,2);
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  sub_080B5C04(param_1,param_1 + 0x4c);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x1000;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082b81e4)[*(byte *)(param_1 + 0x10)];
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080B5A8C(param_1);
  return in_lr;
}

