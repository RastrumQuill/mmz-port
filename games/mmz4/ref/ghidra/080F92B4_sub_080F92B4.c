// sub_080F92B4 at 0x080F92B4 (thumb)

undefined4 sub_080F92B4(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_30 [3];
  byte abStack_24 [4];
  
  local_30[0] = 0x8103;
  local_30[1] = 0x8109;
  local_30[2] = 0x8106;
  cVar1 = *(char *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x16d);
    sub_0801CF00(param_1,*(undefined2 *)(local_30 + bVar2));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  uVar3 = (uint)CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0886705c)[*(ushort *)(&DAT_08867068 + (uVar3 - 0x8100) * 2)]) +
               (uint)*(byte *)(*(int *)(uVar3 * 4 +
                                        *(int *)(&DAT_08867138 +
                                                ((int)(-*(uint *)(param_1 + 0x2c) |
                                                      *(uint *)(param_1 + 0x2c)) >> 0x1f & 4)) +
                                       -0x20400) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (cVar1 == '\x03') {
      sub_08128B5C(abStack_24,&DAT_08129d94,3);
      *(byte *)(param_1 + 0xb4) = abStack_24[bVar2];
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

