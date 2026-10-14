// sub_080770EC at 0x080770EC (thumb)

undefined4 sub_080770EC(int param_1)

{
  undefined4 in_lr;
  
  sub_0800DEFC(param_1,*(undefined4 *)(param_1 + 0x20));
  sub_080033F0(param_1 + 0x6c,10);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined2 *)(param_1 + 0x1c) = 0x200;
  *(undefined2 *)(param_1 + 0x42) = 0x200;
  *(undefined *)(param_1 + 0x1e) = 5;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0x50;
  *(undefined4 *)(param_1 + 0xc0) = 5;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_08076FA4(param_1);
  return in_lr;
}

