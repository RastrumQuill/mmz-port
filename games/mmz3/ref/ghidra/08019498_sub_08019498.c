// sub_08019498 at 0x08019498 (thumb)

undefined8 sub_08019498(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0x1ba800) {
    if (*param_1 < 0x9d800) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 7;
  }
  return CONCAT44(in_lr,uVar1);
}

