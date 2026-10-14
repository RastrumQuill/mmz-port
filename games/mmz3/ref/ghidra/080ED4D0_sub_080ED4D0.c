// sub_080ED4D0 at 0x080ED4D0 (thumb)

undefined4 sub_080ED4D0(int param_1)

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
  sub_080E9250();
  DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x100;
  *(undefined *)(param_1 + 0x240) = 0;
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)(param_1 + 5) = 1;
  return in_lr;
}

