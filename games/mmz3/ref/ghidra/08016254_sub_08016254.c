// sub_08016254 at 0x08016254 (thumb)

undefined4 sub_08016254(void)

{
  undefined4 in_lr;
  
  DAT_0202f4a4 = 0;
  DAT_0202f4a5 = 0;
  DAT_0202f4a8 = 0;
  DAT_0202f4a9 = DAT_02002477;
  DAT_0202f4aa._0_1_ = 0;
  if (DAT_020301a0 == 0x10) {
    DAT_0202f4a9 = 3;
  }
  if ((DAT_0200243b & 0x10) != 0) {
    sub_080093E8(5,6,7);
  }
  if ((DAT_0200243c & 2) != 0) {
    sub_080093E8(6,2,0x56);
    sub_080093E8(6,3,0x57);
    sub_080093E8(7,3,0x58);
  }
  return in_lr;
}

