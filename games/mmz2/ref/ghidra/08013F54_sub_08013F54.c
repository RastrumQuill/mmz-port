// sub_08013F54 at 0x08013F54 (thumb)

undefined8 sub_08013F54(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0x5a001) {
    if (param_1[1] < 0xc8001) {
      if (param_1[1] < 0x6e001) {
        uVar1 = 2;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 3;
  }
  return CONCAT44(in_lr,uVar1);
}

