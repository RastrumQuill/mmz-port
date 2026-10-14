// sub_080E08E0 at 0x080E08E0 (thumb)

undefined4 sub_080E08E0(int param_1)

{
  undefined4 in_lr;
  
  DAT_02000f94 = 0x1908;
  DAT_02000f96 = 0x9a81;
  DAT_02000fa0 = 0;
  sub_080DE274();
  sub_080028DC(&DAT_0202f8f8,(DAT_02000f94 & 0x1f00) << 3,0x580,0x3c0);
  DAT_02000f90 = DAT_02000f90 & 0xf0ff;
  *(undefined *)(param_1 + 0x235) = 0;
  *(undefined *)(param_1 + 0x237) = 1;
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)(param_1 + 7) = 0;
  DAT_02000fe4._0_2_ = 0xf0;
  DAT_02000fe8._0_2_ = 0x90a0;
  DAT_02000fe0 = DAT_02000fe0 | 0x2000;
  DAT_02000fec._0_1_ = 1;
  DAT_02000fec._2_1_ = 2;
  DAT_03002ec2 = 0;
  DAT_03002ec1 = 0;
  DAT_03002ec0 = 0;
  return in_lr;
}

