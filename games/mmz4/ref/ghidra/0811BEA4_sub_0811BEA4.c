// sub_0811BEA4 at 0x0811BEA4 (thumb)

undefined4 sub_0811BEA4(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = *(short *)(param_1 + 4) + 1;
  *(short *)(param_1 + 4) = sVar1;
  if (sVar1 < 0x10) {
    DAT_03002ec0 = (undefined)sVar1;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
  }
  else {
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    *(undefined *)(param_1 + 1) = 2;
    *(undefined *)(param_1 + 2) = 1;
    sub_0811BF18(param_1);
  }
  return in_lr;
}

