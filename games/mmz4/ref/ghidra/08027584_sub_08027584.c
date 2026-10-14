// sub_08027584 at 0x08027584 (thumb)

undefined4 sub_08027584(void)

{
  undefined4 in_lr;
  
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
  DAT_02000a00 = DAT_02000a00 & 0xc1ff;
  sub_080029C0();
  return in_lr;
}

