// sub_080B6058 at 0x080B6058 (thumb)

undefined4 sub_080B6058(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 0x10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_080B4434(*(undefined4 *)(param_1 + 0x20));
  DAT_02022878 = 0;
  return in_lr;
}

