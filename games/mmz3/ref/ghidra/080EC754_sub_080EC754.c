// sub_080EC754 at 0x080EC754 (thumb)

undefined4 sub_080EC754(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  DAT_03002ec2 = 0x20;
  DAT_03002ec1 = 0x20;
  DAT_03002ec0 = 0x20;
  DAT_020023c0 = DAT_020023c0 & 0xb0ff;
  DAT_020023c4 = 0x4008;
  DAT_02002410 = DAT_02002410 & 0xbfff;
  DAT_0200241e = DAT_0200241e | 0xe;
  DAT_02002400 = 0;
  sub_08004230(0xf0);
  sub_0800100C();
  sub_080017C4();
  bVar1 = *(byte *)(param_1 + 0x238);
  if (bVar1 == 1) {
    uVar2 = 0x100;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_080EB400(param_1,6);
        return in_lr;
      }
      if (bVar1 != 3) {
        return in_lr;
      }
      if ((*(ushort *)(param_1 + 0x12) & 1) == 0) {
        sub_080EB400(param_1,2);
        return in_lr;
      }
      sub_080EB400(param_1,3);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar2 = 0;
  }
  sub_080EDB10(&DAT_02030ea0,uVar2);
  sub_080EB400(param_1,5);
  return in_lr;
}

