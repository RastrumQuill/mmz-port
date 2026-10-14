// sub_08035494 at 0x08035494 (thumb)

undefined8 sub_08035494(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_0202ebbb & 8) == 0) {
    if (*(byte *)(param_1 + 0x222) < 2) {
      uVar1 = 0x28;
    }
    else {
      uVar1 = 0x1e;
    }
  }
  else {
    uVar1 = 0x14;
  }
  return CONCAT44(in_lr,uVar1);
}

