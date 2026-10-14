// sub_080EBCEC at 0x080EBCEC (thumb)

undefined4 sub_080EBCEC(int param_1)

{
  undefined4 in_lr;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = param_1;
  sub_08003BE0(&DAT_02030eb0,(DAT_020023c4 & 0x1f00) << 3,0x580,0x3c0);
  DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x4f00;
  sub_080E933C();
  DAT_020023c4 = 6;
  DAT_020023cc = 0;
  DAT_020023c6 = 0x206;
  DAT_020023d0 = 0;
  local_2c = 0;
  sub_080FE110(&local_2c,&DAT_06001000,0x1000200);
  sub_08004340(0x12,&DAT_085222a0,5,0,0xe);
  DAT_020023c8 = 0x486;
  DAT_020023d4 = 0;
  sub_0800393C(&DAT_085472a8,0x4000);
  sub_08003E14(&DAT_085472b4,0);
  sub_08004340(0x24,&DAT_085222a0,2,0,0);
  DAT_020023ca = 0x646;
  local_28 = 0;
  sub_080FE110(&local_28,&DAT_06003000,0x1000200);
  sub_080ECAE4(local_24);
  sub_080040A8(0xf0,0x1a0);
  DAT_02002410 = DAT_02002410 | 0x4000;
  DAT_0200241d = 0xff;
  DAT_0200241e = DAT_0200241e & 0xf7 | 6;
  DAT_02002416 = 0x50;
  DAT_0200241a = 0xa0;
  DAT_02002400 = 0x3e43;
  DAT_02002402 = 0x808;
  *(undefined *)(local_24 + 0x234) = 0;
  *(undefined *)(local_24 + 0x235) = 0;
  *(undefined *)(local_24 + 0x236) = 0;
  *(undefined *)(local_24 + 0x250) = 0;
  *(undefined *)(local_24 + 6) = 0;
  *(undefined *)(local_24 + 5) = 3;
  return in_lr;
}

