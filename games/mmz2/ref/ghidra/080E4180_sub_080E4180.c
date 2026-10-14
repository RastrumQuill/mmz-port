// sub_080E4180 at 0x080E4180 (thumb)

undefined4 sub_080E4180(int param_1)

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
  DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x100;
  *(undefined4 *)(param_1 + 0x1ee0) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1ee4) = 0;
  sub_08004A08(param_1 + 0x9a8);
  sub_08006C78();
  if (*(int *)(param_1 + 0x7254) == 0) {
    sub_08011F94();
    DAT_0202e140 = 1;
  }
  else {
    sub_08011F94();
  }
  DAT_0202e188 = *(undefined4 *)(param_1 + 0x7254);
  DAT_0202e124 = 0xffffffff;
  DAT_0202e184 = param_1 + 0x1ee0;
  DAT_0202e130 = *(undefined4 *)(param_1 + 0x75b8);
  sub_0801E4F4(param_1 + 0x818,&DAT_02037cf0,2);
  sub_08038F80(param_1 + 0x840,&DAT_02039250,0x18);
  sub_0803F914(param_1 + 0x868,&DAT_0203b7c0,5);
  sub_08065994(param_1 + 0x890,&DAT_03004b80,0x12);
  sub_080982D4(param_1 + 0x8b8,&DAT_03003920,0x18);
  sub_080AC534(param_1 + 0x8e0,&DAT_03005950,0x40);
  sub_080BF7C4(param_1 + 0x908,&DAT_0203a870,0x14);
  sub_080D48A8(param_1 + 0x930,&DAT_02038300,8);
  sub_080D5104(param_1 + 0x958,&DAT_02036eb0,0x10);
  sub_0801DF68();
  sub_080DEA08(&DAT_0202f8f8);
  sub_080DEEEC(&DAT_0202f8f8);
  sub_0801E708(*(undefined4 *)(param_1 + 0x75bc),0,param_1 + 0x7324);
  sub_0801E708(*(undefined4 *)(param_1 + 0x75c0),0,param_1 + 0x7324);
  sub_0801492C(param_1 + 0x9a8);
  DAT_03002e7c = 0xffffffff;
  DAT_03002e78 = 0xffffffff;
  DAT_03002e74 = 0xffffffff;
  DAT_03002e70 = 0xffffffff;
  DAT_03002e6c = 0xffffffff;
  DAT_03002e68 = 0xffffffff;
  DAT_03002e64 = 0xffffffff;
  DAT_03002e60 = 0xffffffff;
  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
  return in_lr;
}

