// sub_08013EBC at 0x08013EBC (thumb)

undefined8 sub_08013EBC(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((param_1[1] < 0x5a001) && ((*param_1 < 0xf0001 || (param_1[1] < 0x32001)))) {
    if ((*param_1 < 0xb4001) && (param_1[1] < 0x3a001)) {
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

