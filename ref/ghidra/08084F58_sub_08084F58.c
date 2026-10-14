// sub_08084F58 at 0x08084F58 (thumb)

undefined4 sub_08084F58(int param_1)

{
  undefined4 in_lr;
  
  if (1 < *(byte *)(param_1 + 0x10)) {
    DAT_02004f80 = DAT_02004f80 & 0xbfff;
    DAT_02004f8e = DAT_02004f8e | 0xfe;
    DAT_030017a0 = 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

