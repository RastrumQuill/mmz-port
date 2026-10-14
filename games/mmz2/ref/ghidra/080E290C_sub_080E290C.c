// sub_080E290C at 0x080E290C (thumb)

undefined4 sub_080E290C(int param_1)

{
  undefined4 in_lr;
  
  DAT_03002ec2 = 0x20;
  DAT_03002ec1 = 0x20;
  DAT_03002ec0 = 0x20;
  DAT_02000f90 = DAT_02000f90 & 0xdbff;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  sub_080018D4();
  sub_080E0E64(param_1,0x200);
  return in_lr;
}

