// sub_0801E790 at 0x0801E790 (thumb)

undefined8 sub_0801E790(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xc3000) {
    uVar1 = 0;
  }
  else if (*param_1 < 0xf0000) {
    if (param_1[1] < 0x50000) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

