// sub_0801B5BC at 0x0801B5BC (thumb)

undefined4 sub_0801B5BC(void)

{
  undefined4 in_lr;
  
  if ((DAT_02001284 >> 8 == 0x10) && ((DAT_02001284 & 0xff) == 6)) {
    sub_08001EA4(&UNK_08fa49c8 + (uint)((byte)DAT_0202dada >> 1) * 0x14,0x4000);
    sub_08002208(&UNK_08fa49d4 + (uint)((byte)DAT_0202dada >> 1) * 0x14,0);
  }
  return in_lr;
}

