// sub_080345CC at 0x080345CC (thumb)

undefined4
sub_080345CC(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,uint param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08035ED0(param_1,param_7,param_5,param_3);
  sub_0803609C(param_1,uVar1);
  if (param_6 == (byte)(&DAT_08335cd0)[param_4]) {
    uVar1 = sub_08035ED0(param_1,param_6,param_4,param_2);
    sub_08035F88(param_1,uVar1);
  }
  return in_lr;
}

