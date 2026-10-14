// sub_080AB410 at 0x080AB410 (thumb)

undefined4 sub_080AB410(int param_1)

{
  undefined4 in_lr;
  
  DAT_020023c0 = DAT_020023c0 & 0xdbff;
  DAT_02002410 = DAT_02002410 & 0xbfff;
  DAT_0200241e = DAT_0200241e | 0xfe;
  sub_08004768((int)*(short *)(param_1 + 0xc0));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

