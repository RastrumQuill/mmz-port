// sub_0801AE74 at 0x0801AE74 (thumb)

void sub_0801AE74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = sub_08009B9C();
  if ((uVar1 & 0x80) == 0) {
    sub_0801AEBC(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    sub_0801AF44(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

