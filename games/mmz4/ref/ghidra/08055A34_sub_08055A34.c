// sub_08055A34 at 0x08055A34 (thumb)

undefined4 sub_08055A34(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xf8);
    sub_0801CF00(param_1,0xa008);
    iVar1 = sub_08059768(param_1);
    *(uint *)(param_1 + 0x5c) = (uint)*(ushort *)(&DAT_08855268 + iVar1 * 2) * (uVar2 * 2 + -1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_08854f90 +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_088551e0 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0xa000) * 4)) *
               0x18);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar1 = sub_08059798(param_1);
  if (iVar1 == 0) {
    if ((*(int *)(DAT_0202dbf0 + 0x54) - (*(int *)(param_1 + 0x54) + (uVar2 * 2 + -1) * 0x2000)) +
        0x2000 < 0x4001) {
      sub_08059534(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

