// sub_080F5ADC at 0x080F5ADC (thumb)

undefined4 sub_080F5ADC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x5d01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x5c) + -0x20;
  *(int *)(param_1 + 0x5c) = iVar1;
  if (iVar1 < -0x100) {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
  }
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  if (0x177000 < iVar1) {
    *(undefined4 *)(param_1 + 0x54) = 0x177000;
  }
  if (*(int *)(param_1 + 0x54) < 0x151000) {
    *(undefined4 *)(param_1 + 0x54) = 0x151000;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + -0x1080;
  return in_lr;
}

