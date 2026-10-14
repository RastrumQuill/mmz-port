// sub_0811E2AC at 0x0811E2AC (thumb)

undefined4 sub_0811E2AC(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sub_080025D8(0x3f);
  sub_080025D8(0x40);
  sVar1 = *(short *)(param_1 + 4) + -1;
  *(short *)(param_1 + 4) = sVar1;
  if (sVar1 == 0) {
    DAT_03002ec2 = 0;
    DAT_03002ec1 = 0;
    DAT_03002ec0 = 0;
    *(undefined *)(param_1 + 1) = 4;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined *)(param_1 + 2) = 0;
    sub_0811E324(param_1);
  }
  else {
    DAT_03002ec0 = (undefined)sVar1;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
  }
  return in_lr;
}

