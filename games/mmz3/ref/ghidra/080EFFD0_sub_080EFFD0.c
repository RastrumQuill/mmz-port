// sub_080EFFD0 at 0x080EFFD0 (thumb)

undefined4 sub_080EFFD0(undefined4 param_1)

{
  undefined4 in_lr;
  
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
  DAT_020023c0 = DAT_020023c0 & 0xf0f8;
  sub_080EDB10(param_1,0x300);
  return in_lr;
}

