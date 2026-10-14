// sub_0811D838 at 0x0811D838 (thumb)

undefined4 sub_0811D838(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sub_0810D214(&DAT_0886a487,8,0xd);
  sub_0811E4B4(param_1);
  sub_080025D8(0x3f);
  sub_080025D8(0x40);
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
    *(undefined *)(param_1 + 3) = 0;
    *(undefined *)(param_1 + 2) = 0;
    sub_0811D8DC(param_1);
  }
  return in_lr;
}

