// sub_08019528 at 0x08019528 (thumb)

undefined8 sub_08019528(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 < 0xf7001) || (0x1dfff < param_1[1])) {
    if (param_1[1] < 0x87001) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 7;
  }
  return CONCAT44(in_lr,uVar1);
}

