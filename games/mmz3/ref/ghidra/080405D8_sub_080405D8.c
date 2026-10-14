// sub_080405D8 at 0x080405D8 (thumb)

undefined4 sub_080405D8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}

