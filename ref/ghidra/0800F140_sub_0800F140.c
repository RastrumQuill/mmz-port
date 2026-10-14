// sub_0800F140 at 0x0800F140 (thumb)

undefined4 sub_0800F140(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 < 0x170001) {
    if (param_1[1] < 0xc3000) {
      uVar1 = 2;
    }
    else if (param_1[1] < 0x12c000) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

