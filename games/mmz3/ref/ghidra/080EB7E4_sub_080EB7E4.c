// sub_080EB7E4 at 0x080EB7E4 (thumb)

undefined4 sub_080EB7E4(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar3 = (uint)bVar1;
  if (uVar3 == 0) {
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    DAT_03002ec8 = uVar3;
    sub_08003F54();
    DAT_02002400 = (ushort)bVar1;
    DAT_0200241e = 0xff;
    uVar2 = (ushort)bVar1;
    DAT_02002410 = DAT_02002400;
    DAT_02002420 = uVar2;
    DAT_03002ac0 = uVar2;
    sub_080E9250();
    DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x100;
    sub_08002330(1);
    sub_080EDB10(&DAT_02030ea0,0xe00);
    DAT_02037100 = (ushort)(byte)(&DAT_0838b4c8)[*(ushort *)(param_1 + 0x12) >> 1 & 3];
    sub_080022FC(1,0x80edae9);
    *(undefined2 *)(param_1 + 0x248) = 1;
    *(undefined *)(param_1 + 0x24a) = 0;
    *(undefined *)(param_1 + 0x24b) = 0;
    *(ushort *)(param_1 + 0x24c) = uVar2;
    *(ushort *)(param_1 + 0x24e) = DAT_02002130;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (uVar3 != 1) {
    return in_lr;
  }
  if (((*(ushort *)(param_1 + 0x24e) ^ DAT_02002130) & DAT_02002130 & 0xb) == 0) {
    *(ushort *)(param_1 + 0x24e) = DAT_02002130;
    sub_080EB994(param_1);
  }
  else {
    sub_080023D4(1);
  }
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

