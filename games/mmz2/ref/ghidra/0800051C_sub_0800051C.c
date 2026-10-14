// sub_0800051C at 0x0800051C (thumb)

undefined4 sub_0800051C(void)

{
  undefined4 in_lr;
  
  DAT_030016f5 = 1;
  sub_08002F2C();
  sub_080028DC(&DAT_0202f8f8,(DAT_02000f94 & 0x1f00) << 3,0x580,0x3c0);
  sub_0800120C();
  DAT_02000d24 = 0x18;
  DAT_02000d25 = 4;
  DAT_02000d3c = 0x18;
  DAT_02000d3d = 4;
  DAT_03002ec2 = 0x20;
  DAT_03002ec1 = 0x20;
  DAT_03002ec0 = 0x20;
  sub_08002C18();
  DAT_02000fd0 = 0;
  DAT_02000fe0 = 0;
  DAT_02000fec._2_1_ = 0xff;
  DAT_02000ff0 = 0;
  DAT_03002ac0 = 0;
  sub_0800319C();
  sub_080DE1BC();
  sub_080DE248();
  DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x100;
  DAT_02000f9c = 0;
  sub_08001098(1);
  sub_0800115C(0x80dfb91);
  return in_lr;
}

