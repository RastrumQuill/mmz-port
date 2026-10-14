// sub_0810D83C at 0x0810D83C (thumb)

undefined4 sub_0810D83C(void)

{
  undefined4 in_lr;
  
  DAT_02000a5e = DAT_02000a5e | 1;
  if (DAT_0202f364 == 0) {
    if ((DAT_0202e8b4 & 0x40) == 0) {
      sub_08001D30(&DAT_08b6c0c8,(DAT_02000a04 & 0xc) << 0xc);
      sub_08002208(&DAT_08b6c0d4,0);
    }
    else {
      sub_08001D30(&DAT_08b6c168,(DAT_02000a04 & 0xc) << 0xc);
      sub_08002208(&DAT_08b6c174,0);
    }
    DAT_0202f364 = 1;
  }
  if ((DAT_0202e8b4 & 0x40) == 0) {
    sub_0810D950(&DAT_0202f360);
    sub_0810DC00(&DAT_0202f360);
  }
  else {
    DAT_02000a00 = DAT_02000a00 | 0x100;
    if (DAT_0202f364 < 0x20) {
      DAT_0202f364 = DAT_0202f364 + 1;
    }
    DAT_02000a0e = 0x20 - DAT_0202f364;
    sub_080027B8(DAT_0202f360,&DAT_08b2c000,0x12,0,0);
  }
  return in_lr;
}

