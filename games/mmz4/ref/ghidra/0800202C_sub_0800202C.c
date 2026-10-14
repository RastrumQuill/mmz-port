// sub_0800202C at 0x0800202C (thumb)

undefined4 sub_0800202C(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined local_c [4];
  
  DAT_040000d4 = local_c;
  DAT_040000d8 = 0x3002ac0;
  DAT_040000dc = 0x85000100;
  uVar1 = DAT_040000dc;
  DAT_040000d4 = 0x3002ac0;
  DAT_040000d8 = 0x5000000;
  DAT_040000dc = 0x84000100;
  uVar1 = DAT_040000dc;
  DAT_03002ec2 = 0x20;
  DAT_03002ec1 = 0x20;
  DAT_03002ec0 = 0x20;
  DAT_03002ec6 = 0;
  DAT_03002ec8 = 0;
  return in_lr;
}

