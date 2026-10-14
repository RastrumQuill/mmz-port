// sub_0800DAD0 at 0x0800DAD0 (thumb)

undefined4 sub_0800DAD0(void)

{
  undefined4 in_lr;
  
  if ((DAT_02001286 >> 8 == 3) && ((DAT_02001286 & 0xff) == 3)) {
    sub_08001EA4(&UNK_08fa3dd4 + (uint)(DAT_0202dad9 >> 1) * 0x14,0x4000);
    sub_08002208(&UNK_08fa3de0 + (uint)(DAT_0202dad9 >> 1) * 0x14,0);
  }
  return in_lr;
}

