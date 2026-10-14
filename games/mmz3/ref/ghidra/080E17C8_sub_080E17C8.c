// sub_080E17C8 at 0x080E17C8 (thumb)

undefined8 sub_080E17C8(uint param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  param_1 = param_1 & 0xff;
  if ((((char)(&DAT_0836e30c)[param_1 * 4] < '\0') || (param_1 == 5)) || (param_1 == 6)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

