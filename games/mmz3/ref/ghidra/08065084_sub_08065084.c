// sub_08065084 at 0x08065084 (thumb)

undefined4 sub_08065084(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1300);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (6 < *(short *)(DAT_020305f8 + 10)) {
    if (((*(int *)(DAT_0202f5c0 + 0x54) <= *(int *)(param_1 + 0x54) !=
          (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) &&
        ((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6e00U < 0xdc01)) &&
       ((*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x5000U < 0xa001)) {
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
    sub_08064DFC(param_1);
  }
  return in_lr;
}

