// sub_080EB684 at 0x080EB684 (thumb)

undefined4 sub_080EB684(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar5 = (uint)bVar1;
  if (uVar5 == 0) {
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    DAT_03002ec8 = uVar5;
    sub_08003F54();
    DAT_02002400 = (ushort)bVar1;
    DAT_0200241e = 0xff;
    DAT_02002420 = (ushort)bVar1;
    DAT_02002410 = DAT_02002400;
    DAT_03002ac0 = DAT_02002420;
    sub_080E9250();
    DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x100;
    sub_08002330(1);
    sub_080EDB10(&DAT_02030ea0,0xe00);
    DAT_02037100 = 1;
    sub_080022FC(1,0x80edae9);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (uVar5 != 1) {
    return in_lr;
  }
  uVar4 = DAT_02002134 & 0xb;
  uVar2 = uVar4;
  uVar3 = uVar4;
  if ((DAT_02002134 & 0xb) != 0) {
    sub_080023D4(1);
    uVar4 = DAT_02002130;
    uVar2 = DAT_02002134;
    uVar3 = DAT_02002136;
  }
  DAT_02002136 = uVar3;
  DAT_02002134 = uVar2;
  DAT_02002130 = uVar4;
  if (DAT_03002a80 == '\x01') {
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
    sub_080045CC();
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
    sub_080EB400(&DAT_02030c40,1);
    sub_080023F4(0x80018c9);
  }
  return in_lr;
}

