// sub_08013D2C at 0x08013D2C (thumb)

undefined8 sub_08013D2C(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0x1e5001) {
    if (*param_1 < 0x2d000) {
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

