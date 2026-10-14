// sub_0806B92C at 0x0806B92C (thumb)

undefined4 sub_0806B92C(int param_1)

{
  char cVar1;
  undefined extraout_var;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(DAT_0202e130 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    sub_080EEF64((*(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54)) * 0x100 >> 0x10,
                 (*(int *)(param_1 + 0x58) - *(int *)(DAT_0202e130 + 0x58)) * 0x100 >> 0x10);
    *(undefined *)(param_1 + 0xbe) = extraout_var;
    if (*(char *)(param_1 + 0xbd) == '\0') {
      sub_080127E4(param_1,0x809);
    }
    else {
      sub_080127E4(param_1,0x801);
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

