// sub_0811F3D0 at 0x0811F3D0 (thumb)

undefined4 sub_0811F3D0(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sVar1 = *(short *)(param_1 + 4) + -1;
  *(short *)(param_1 + 4) = sVar1;
  if (sVar1 == 0) {
    DAT_03002ec2 = 0;
    DAT_03002ec1 = 0;
    DAT_03002ec0 = 0;
    *(undefined *)(param_1 + 1) = 4;
    sub_0811F43C(param_1);
  }
  else {
    DAT_03002ec0 = (undefined)sVar1;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
  }
  return in_lr;
}

