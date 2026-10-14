// sub_080018C8 at 0x080018C8 (thumb)

undefined4 sub_080018C8(void)

{
  undefined4 in_lr;
  
  DAT_030016f5 = 1;
  sub_08004270();
  sub_08003BE0(&DAT_02030eb0,(DAT_020023c4 & 0x1f00) << 3,0x580,0x3c0);
  DAT_02002144 = 0x18;
  DAT_02002145 = 4;
  DAT_0200215c = 0x18;
  DAT_0200215d = 4;
  DAT_03002ec2 = 0x20;
  DAT_03002ec1 = 0x20;
  DAT_03002ec0 = 0x20;
  DAT_03002ec8 = 0;
  sub_08003F54();
  DAT_02002400 = 0;
  DAT_02002410 = 0;
  DAT_0200241e = 0xff;
  DAT_02002420 = 0;
  DAT_03002ac0 = 0;
  sub_080045CC();
  sub_080E9250();
  sub_080E9310();
  DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x100;
  DAT_020023cc = 0;
  if (DAT_02030c44 == '\0') {
    DAT_03002ac0 = 0x7fff;
  }
  sub_08002330(1);
  sub_080023F4(0x80eb3d9);
  return in_lr;
}

