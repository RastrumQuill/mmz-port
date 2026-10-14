// sub_080D04A4 at 0x080D04A4 (thumb)

undefined4 sub_080D04A4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                       *(int *)(&DAT_088639ec + (uint)*(byte *)(param_1 + 0x10) * 4) * 0x100,
                       *(undefined4 *)(param_1 + 0x58));
  if ((cVar1 != '\0') && (cVar1 != '\x0f')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  }
  if (*(char *)(param_1 + 0xb5) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sub_080D0590(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(char *)(param_1 + 0xb5) = '\0';
      cVar1 = '\x01';
    }
    else {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
    }
    *(char *)(param_1 + 0x12) = cVar1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(param_1 + 0x54) + -0x1000 <= DAT_0202ea30 + 0x77ff) goto LAB_080d055e;
  }
  else if (DAT_0202ea30 + -0x7800 <= *(int *)(param_1 + 0x54) + 0x1000) goto LAB_080d055e;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
LAB_080d055e:
  sub_0801CFF0(param_1);
  return in_lr;
}

