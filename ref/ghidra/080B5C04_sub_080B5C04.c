// sub_080B5C04 at 0x080B5C04 (thumb)

undefined4 sub_080B5C04(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  if (*(int *)(param_1 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
    if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
      if (*(byte *)(param_1 + 0xbd) != 0) {
        *(byte *)(param_1 + 0xbd) = *(byte *)(iVar2 + 10) & 0x10;
        *(undefined4 *)(param_1 + 0x54) = 0x20;
      }
      iVar1 = (*(int *)(param_1 + 0x54) * 0x2800 >> 5) + -0x1400;
    }
    else {
      if (*(char *)(param_1 + 0xbd) == '\0') {
        *(char *)(param_1 + 0xbd) = '\x01';
        *(undefined4 *)(param_1 + 0x54) = 0x20;
      }
      iVar1 = 0x1400 - (*(int *)(param_1 + 0x54) * 0x2800 >> 5);
    }
    *param_2 = *(int *)(iVar2 + 0x4c) + iVar1;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      iVar2 = *(int *)(iVar2 + 0x50) + -0x2400;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x50) + -0x1000;
    }
    param_2[1] = iVar2;
    iVar2 = param_2[1] + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0xbc)] * -4;
  }
  else {
    *param_2 = *(int *)(iVar2 + 0x4c) + 0x1000;
    iVar2 = *(int *)(iVar2 + 0x50) + -0x1a00;
  }
  param_2[1] = iVar2;
  return in_lr;
}

