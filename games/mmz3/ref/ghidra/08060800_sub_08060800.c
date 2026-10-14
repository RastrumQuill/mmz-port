// sub_08060800 at 0x08060800 (thumb)

undefined8 sub_08060800(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) == *(int *)(DAT_0202f5c0 + 0x54)) {
    uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
      uVar1 = 1;
    }
  }
  return CONCAT44(in_lr,uVar1);
}

