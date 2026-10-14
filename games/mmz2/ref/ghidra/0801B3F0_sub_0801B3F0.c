// sub_0801B3F0 at 0x0801B3F0 (thumb)

undefined4 sub_0801B3F0(void)

{
  undefined4 in_lr;
  
  DAT_03002ec2 = 0x20;
  DAT_03002ec1 = 0x20;
  DAT_03002ec0 = 0x20;
  sub_08002C18();
  DAT_02000fd0 = 0;
  DAT_02000fe0 = 0;
  DAT_02000fec._2_1_ = 0xff;
  DAT_02000ff0 = 0;
  DAT_03002ac0 = 0;
  DAT_02000f90 = DAT_02000f90 & 0xc1ff;
  sub_0800319C();
  return in_lr;
}

