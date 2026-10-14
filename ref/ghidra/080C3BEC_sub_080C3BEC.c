// sub_080C3BEC at 0x080C3BEC (thumb)

undefined8 sub_080C3BEC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 0x4f;
  do {
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) break;
  } while (((int)(uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x1a4 + (uVar1 >> 3)) >> (uVar1 & 7) &
           1U) == 0);
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

