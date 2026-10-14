// sub_080F9210 at 0x080F9210 (thumb)

undefined4 sub_080F9210(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  uVar2 = (uint)CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0886705c)[*(ushort *)(&DAT_08867068 + (uVar2 - 0x8100) * 2)]) +
               (uint)*(byte *)(*(int *)(uVar2 * 4 +
                                        *(int *)(&DAT_08867138 +
                                                ((int)(-*(uint *)(param_1 + 0x2c) |
                                                      *(uint *)(param_1 + 0x2c)) >> 0x1f & 4)) +
                                       -0x20400) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

