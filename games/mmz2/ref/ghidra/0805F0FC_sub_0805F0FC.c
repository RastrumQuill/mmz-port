// sub_0805F0FC at 0x0805F0FC (thumb)

undefined4 sub_0805F0FC(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa19);
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_080032EC(0x7b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x80;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x54) <= *(int *)(DAT_0202e130 + 0x54)) goto LAB_0805f162;
    iVar2 = *(int *)(param_1 + 0x54) + -0x80;
  }
  else {
    if (*(int *)(DAT_0202e130 + 0x54) <= *(int *)(param_1 + 0x54)) goto LAB_0805f162;
    iVar2 = *(int *)(param_1 + 0x54) + 0x80;
  }
  *(int *)(param_1 + 0x54) = iVar2;
LAB_0805f162:
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x2000);
  if (sVar1 != 0) {
    sub_080032EC(0x51);
    *(undefined *)(param_1 + 0xd) = 0x1c;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

