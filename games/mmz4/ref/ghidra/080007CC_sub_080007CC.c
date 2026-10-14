// sub_080007CC at 0x080007CC (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080007CC(void)

{
  undefined4 in_lr;
  
  DAT_030016f5 = 1;
  sub_08002664();
  sub_08001FD4(&DAT_0202f620,(DAT_02000a04 & 0x1f00) << 3,0x580,0x3c0);
  DAT_02000774 = 0x18;
  DAT_02000775 = 4;
  DAT_0200078c = 0x18;
  DAT_0200078d = 4;
  DAT_03002ec2 = 0x20;
  DAT_03002ec1 = 0x20;
  DAT_03002ec0 = 0x20;
  DAT_03002ec8 = 0;
  sub_08002348();
  DAT_02000a40 = 0;
  DAT_02000a50 = 0;
  DAT_02000a5e = 0xff;
  DAT_02000a60 = 0;
  DAT_03002ac0 = 0;
  sub_080029C0();
  sub_0810CE60();
  sub_0810CF20();
  DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x100;
  _DAT_02000a0c = 0;
  if (DAT_0202f3b4 == '\0') {
    DAT_03002ac0 = 0x7fff;
  }
  sub_080012EC(1);
  sub_080013B0(0x810f089);
  return in_lr;
}

