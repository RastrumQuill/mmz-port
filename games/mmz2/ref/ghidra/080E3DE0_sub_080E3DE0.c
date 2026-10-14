// sub_080E3DE0 at 0x080E3DE0 (thumb)

undefined4 sub_080E3DE0(int param_1)

{
  undefined4 in_lr;
  
  sub_08008144();
  sub_080EEF68(&DAT_02000fd0,param_1 + 0x1ee8,0);
  sub_080EEF6C(&DAT_02000fd0,param_1 + 0x1ee8,&DAT_04000002);
  DAT_02000fd0 = 0;
  sub_080EEF68(&DAT_02000fe0,param_1 + 0x1ef0,0);
  sub_080EEF6C(&DAT_02000fe0,param_1 + 0x1ef0,&DAT_04000004);
  DAT_02000fe0 = 0;
  DAT_02000fec._2_1_ = 0xff;
  sub_080EEF68(&DAT_06014000,param_1 + 0x2050,0x1000);
  sub_080EEF68(&DAT_03002cc0,param_1 + 0x6050,0x80);
  sub_080EEF68((DAT_02000f96 & 0x1f00) * 8 + 0x6000000,param_1 + 0x6250,0x400);
  return in_lr;
}

