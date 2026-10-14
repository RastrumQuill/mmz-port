// sub_0801E7CC at 0x0801E7CC (thumb)

undefined8 sub_0801E7CC(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0x1d1000) {
    if (*param_1 < 0x10e000) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}

