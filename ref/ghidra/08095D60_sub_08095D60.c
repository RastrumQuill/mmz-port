// sub_08095D60 at 0x08095D60 (thumb)

undefined4 sub_08095D60(int param_1)

{
  undefined4 in_lr;
  
  sub_08088120();
  sub_080033F0(param_1 + 0x6c,0xf);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08095DA8(param_1);
  return in_lr;
}

