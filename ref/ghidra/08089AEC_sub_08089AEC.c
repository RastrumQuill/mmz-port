// sub_08089AEC at 0x08089AEC (thumb)

undefined4 sub_08089AEC(int param_1)

{
  undefined4 in_lr;
  
  sub_08088120();
  sub_080033F0(param_1 + 0x6c,0);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_080898E4(param_1);
  return in_lr;
}

