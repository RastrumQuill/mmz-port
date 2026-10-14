// sub_080141D0 at 0x080141D0 (thumb)

undefined4 sub_080141D0(void)

{
  undefined4 in_lr;
  
  if ((DAT_02002c56 >> 8 == 0xe) && ((DAT_02002c56 & 0xff) == 2)) {
    sub_08003AB0(&UNK_087d6620 + (uint)(DAT_0202f4ac._2_2_ >> 9) * 0x14,0x4000);
    sub_08003E14(&UNK_087d662c + (uint)(DAT_0202f4ac._2_2_ >> 9) * 0x14,0);
  }
  return in_lr;
}

