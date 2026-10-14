// sub_080B9A74 at 0x080B9A74 (thumb)

undefined8 sub_080B9A74(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x58) < 0x12f00) &&
     (((0x83a00 < *(int *)(param_1 + 0x54) && (*(int *)(param_1 + 0x58) < 0xf000)) ||
      ((0x82e00 < *(int *)(param_1 + 0x54) && (0xf000 < *(int *)(param_1 + 0x58))))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

