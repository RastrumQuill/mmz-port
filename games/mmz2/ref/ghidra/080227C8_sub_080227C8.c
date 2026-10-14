// sub_080227C8 at 0x080227C8 (thumb)

void sub_080227C8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = sub_08008D80();
  if ((uVar1 & 0x8000) == 0) {
    sub_08022810(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    sub_0802283C(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

