// sub_080F93BC at 0x080F93BC (thumb)

undefined4 sub_080F93BC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x8100);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  uVar1 = (uint)CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0886705c)[*(ushort *)(&DAT_08867068 + (uVar1 - 0x8100) * 2)]) +
               (uint)*(byte *)(*(int *)(uVar1 * 4 +
                                        *(int *)(&DAT_08867138 +
                                                ((int)(-*(uint *)(param_1 + 0x2c) |
                                                      *(uint *)(param_1 + 0x2c)) >> 0x1f & 4)) +
                                       -0x20400) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

