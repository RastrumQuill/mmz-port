// sub_080195FC at 0x080195FC (thumb)

undefined8 sub_080195FC(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_1[1] < 0x3c000) {
    if (*param_1 < 0x160801) {
      if (*param_1 < 0x142801) {
        uVar1 = 0;
      }
      else {
        uVar1 = 6;
      }
      goto LAB_0801963e;
    }
  }
  else if (*param_1 < 0xc3001) {
    uVar1 = 7;
    goto LAB_0801963e;
  }
  uVar1 = 1;
LAB_0801963e:
  return CONCAT44(in_lr,uVar1);
}

