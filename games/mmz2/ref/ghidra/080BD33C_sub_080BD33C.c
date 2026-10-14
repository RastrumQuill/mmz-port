// sub_080BD33C at 0x080BD33C (thumb)

undefined4 sub_080BD33C(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  sVar1 = sub_08008354(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1000);
  if (sVar1 != 0) {
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar1 != 0)) {
    sub_080BD1A8(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54);
    sub_080AC60C(1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

