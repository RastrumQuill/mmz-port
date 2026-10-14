// sub_08081900 at 0x08081900 (thumb)

undefined4 sub_08081900(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6600);
    sub_08081F98(param_1,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (((*(int *)(DAT_0202e130 + 0x58) + -0x1000 <= *(int *)(param_1 + 0x58)) &&
      (*(int *)(param_1 + 0x58) + -0x6000 <= *(int *)(DAT_0202e130 + 0x58))) &&
     ((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) + 0x3000U < 0x6001)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

