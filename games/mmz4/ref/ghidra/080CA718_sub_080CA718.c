// sub_080CA718 at 0x080CA718 (thumb)

undefined4 sub_080CA718(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  sVar1 = sub_08007C7C();
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_080D08F8(4,param_1 + 0x54,0,0);
    *(undefined *)(param_1 + 0x12) = 0xff;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}

