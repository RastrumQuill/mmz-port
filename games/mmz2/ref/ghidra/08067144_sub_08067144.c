// sub_08067144 at 0x08067144 (thumb)

undefined4 sub_08067144(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x900);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (6 < *(short *)(DAT_0202f07c + 10)) {
    if (((*(int *)(DAT_0202e130 + 0x54) <= *(int *)(param_1 + 0x54) !=
          (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) &&
        ((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6e00U < 0xdc01)) &&
       ((*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + 0x5000U < 0xa001)) {
      *(undefined *)(param_1 + 0xf) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
    *(char *)(param_1 + 0xbd) = *(char *)(param_1 + 0xbd) == '\0';
    sub_08066ECC(param_1);
  }
  return in_lr;
}

