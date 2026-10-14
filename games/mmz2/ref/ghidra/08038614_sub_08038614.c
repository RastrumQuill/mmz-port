// sub_08038614 at 0x08038614 (thumb)

undefined8 sub_08038614(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  uint param_5;
  
  sub_08038668();
  if (((*(byte *)(param_1 + 0x176) < 3) || (*(char *)(param_1 + 0x2b6) != '\0')) ||
     ((*(byte *)(param_1 + 0x1fc) == param_5 &&
      ((*(char *)(param_1 + 0x212) == '\0' || (*(char *)(param_1 + 0x213) == '\0')))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

