// sub_0806F784 at 0x0806F784 (thumb)

undefined4 sub_0806F784(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1800);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(byte *)(param_1 + 0x12) < 0x20) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
  }
  else if ((*(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54)) + 0x8000U < 0x10001) {
    sub_080705DC(param_1);
  }
  cVar1 = sub_080708D0(param_1,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 1);
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

