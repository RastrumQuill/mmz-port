// sub_0801B130 at 0x0801B130 (thumb)

void sub_0801B130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = sub_08008F20();
  if (iVar1 < 0) {
    sub_0801B178(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    sub_0801B18C(param_1,param_2,param_3,param_4,param_5,iVar1);
  }
  return;
}

