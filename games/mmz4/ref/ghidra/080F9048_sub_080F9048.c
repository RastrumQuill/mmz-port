// sub_080F9048 at 0x080F9048 (thumb)

undefined4 sub_080F9048(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_20 [3];
  
  local_20[0] = 0x8101;
  local_20[1] = 0x8107;
  local_20[2] = 0x8104;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(local_20 + *(byte *)(param_1 + 0xb4)));
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
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
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (DAT_0202e8d6 < 2)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

