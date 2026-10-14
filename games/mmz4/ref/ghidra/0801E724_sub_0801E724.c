// sub_0801E724 at 0x0801E724 (thumb)

undefined8 sub_0801E724(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_1[1] < 0x50000) {
    if (*param_1 < 0x1e8000) {
      if (*param_1 < 0x14a000) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 3;
  }
  return CONCAT44(in_lr,uVar1);
}

