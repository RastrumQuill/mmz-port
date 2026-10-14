// sub_08015F88 at 0x08015F88 (thumb)

undefined4 sub_08015F88(void)

{
  undefined4 in_lr;
  
  if ((DAT_02001284 >> 8 == 10) && ((DAT_02001284 & 0xff) == 0)) {
    sub_08001EA4(&UNK_08fa4824 + (uint)(DAT_0202dae4 >> 2) * 0x14,0x4000);
    sub_08002208(&UNK_08fa4830 + (uint)(DAT_0202dae4 >> 2) * 0x14,0);
  }
  if (((DAT_02001284 >> 8 == 10) && ((DAT_02001284 & 0xff) == 2)) && ((DAT_0202cac0 & 0xf) == 2)) {
    sub_08001EA4(&DAT_08fa4874,0x4000);
    sub_08002208(&DAT_08fa4880,0);
  }
  return in_lr;
}

