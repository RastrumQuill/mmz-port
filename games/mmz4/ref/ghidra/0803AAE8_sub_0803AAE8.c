// sub_0803AAE8 at 0x0803AAE8 (thumb)

undefined8 sub_0803AAE8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xe6) == 0xff) || (1 < *(byte *)(param_1 + 0xe6))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

