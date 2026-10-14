// sub_080ED3EC at 0x080ED3EC (thumb)

undefined4 sub_080ED3EC(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar2 = (uint)bVar1;
  if (uVar2 == 0) {
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    DAT_03002ec8 = uVar2;
    sub_08003F54();
    DAT_02002400 = (ushort)bVar1;
    DAT_0200241e = 0xff;
    DAT_02002420 = (ushort)bVar1;
    DAT_02002410 = DAT_02002400;
    DAT_03002ac0 = DAT_02002420;
    sub_080E9250();
    DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x100;
    sub_08002330(1);
    sub_080022FC(1,0x80edae9);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (uVar2 != 1) {
    return in_lr;
  }
  if (DAT_03002a80 == '\x01') {
    sub_080EB400(&DAT_02030c40,1);
    sub_080023F4(0x80018c9);
  }
  return in_lr;
}

