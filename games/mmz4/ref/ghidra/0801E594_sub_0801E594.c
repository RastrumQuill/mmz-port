// sub_0801E594 at 0x0801E594 (thumb)

undefined8 sub_0801E594(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0x11d001) {
    if (param_1[1] < 0x1e001) {
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

