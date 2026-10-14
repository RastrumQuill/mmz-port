// sub_080A9818 at 0x080A9818 (thumb)

undefined4 sub_080A9818(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    uVar1 = 0xffffff00;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    uVar1 = 0x100;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  return in_lr;
}

