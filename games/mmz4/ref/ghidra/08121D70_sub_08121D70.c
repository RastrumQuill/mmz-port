// sub_08121D70 at 0x08121D70 (thumb)

undefined4 sub_08121D70(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sub_080025D8(0x33);
  sub_080025D8(0x79);
  sVar1 = *(short *)(param_1 + 4) + -1;
  *(short *)(param_1 + 4) = sVar1;
  if (sVar1 == 0) {
    DAT_03002ec2 = 0;
    DAT_03002ec1 = 0;
    DAT_03002ec0 = 0;
    *(undefined *)(param_1 + 1) = 4;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined *)(param_1 + 2) = 0;
    sub_08121E0C(param_1);
  }
  else {
    DAT_03002ec0 = (undefined)sVar1;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
  }
  sub_0810D214(&DAT_0886deb3,1,0x12);
  sub_081221CC(param_1);
  return in_lr;
}

