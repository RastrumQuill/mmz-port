// sub_080E9380 at 0x080E9380 (thumb)

undefined8 sub_080E9380(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 2) == 0) {
    uVar1 = 0x52;
    do {
      uVar1 = uVar1 - 1;
      if (uVar1 == 0) break;
    } while (((int)(uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x228 + (uVar1 >> 3)) >> (uVar1 & 7) &
             1U) == 0);
    if (uVar1 != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

