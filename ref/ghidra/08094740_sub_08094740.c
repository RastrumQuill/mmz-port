// sub_08094740 at 0x08094740 (thumb)

undefined4 sub_08094740(int param_1)

{
  undefined4 in_lr;
  
  DAT_02004f44 = 0x100;
  DAT_02004f46 = 0;
  sub_08005214((DAT_02004f38 & 0x1f00) * 8 + 0x6000000);
  sub_08005214(&DAT_06000800 + (DAT_02004f38 & 0x1f00) * 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

