// sub_080193D8 at 0x080193D8 (thumb)

undefined8 sub_080193D8(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 < 0x1c9001) &&
     (((0x13fff < param_1[1] || (0xeffe < *param_1 - 0xc3001U)) && (0xeffe < *param_1 - 0x11d001U)))
     ) {
    if (*param_1 < 0x11d000) {
      uVar1 = 0;
    }
    else if (param_1[1] < 0x32000) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 7;
  }
  return CONCAT44(in_lr,uVar1);
}

