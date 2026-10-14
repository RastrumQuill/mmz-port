// sub_08019674 at 0x08019674 (thumb)

undefined8 sub_08019674(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((param_1[1] < 0x1e000) && (0x69000 < *param_1)) {
    uVar1 = 6;
  }
  else if (*param_1 < 0xd9801) {
    if (*param_1 < 0x52801) {
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

