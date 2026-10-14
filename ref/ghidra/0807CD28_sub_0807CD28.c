// sub_0807CD28 at 0x0807CD28 (thumb)

undefined4 sub_0807CD28(int param_1)

{
  undefined4 in_lr;
  
  DAT_02004f30 = DAT_02004f30 & 0xdbff;
  sub_08005214((DAT_02004f38 & 0x1f00) * 8 + 0x6000000);
  DAT_02004f80 = DAT_02004f80 & 0xbfff;
  DAT_02004f8e = DAT_02004f8e | 0xfe;
  sub_08001EE8((int)*(short *)(param_1 + 0xc4));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

