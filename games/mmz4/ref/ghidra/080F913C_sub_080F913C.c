// sub_080F913C at 0x080F913C (thumb)

undefined4 sub_080F913C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_20 [3];
  
  local_20[0] = 0x8102;
  local_20[1] = 0x8108;
  local_20[2] = 0x8105;
  bVar1 = *(byte *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x16d,&stack0xffffffec);
    sub_080F9854(param_1);
    sub_0801CF00(param_1,*(undefined2 *)(local_20 + bVar1));
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
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

