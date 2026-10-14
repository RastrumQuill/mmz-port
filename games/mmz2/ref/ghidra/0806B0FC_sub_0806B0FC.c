// sub_0806B0FC at 0x0806B0FC (thumb)

undefined4 sub_0806B0FC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == -1) {
    if ((((*(char *)(param_1 + 0x10) == '\x01') && (*(char *)(param_1 + 0xb7) != '\0')) &&
        (*(char *)(*(int *)(param_1 + 0x28) + 0xd) != '\0')) ||
       ((0xdfff < (*(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54)) + 0x7000U ||
        (0x13fff < (*(int *)(param_1 + 0x58) - *(int *)(DAT_0202e130 + 0x58)) + 0xa000U)))) {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar1 & 0x7fffffff;
      *(bool *)(param_1 + 0xd) = (uVar1 * 2 >> 0x11 & 0xf) < 9;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

