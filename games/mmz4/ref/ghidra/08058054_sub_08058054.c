// sub_08058054 at 0x08058054 (thumb)

undefined4 sub_08058054(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x100);
    sub_0801CF00(param_1,0xa019);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xcc) + 0xf000;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if ((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0xcc)) - 0xa000U < 0xa001) {
      iVar4 = *(int *)(param_1 + 0xb8) + 0x2000;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xb8) + 0x1000;
    }
    *(int *)(param_1 + 0xbc) = iVar4;
    *(int *)(param_1 + 0x58) = iVar4 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
    *(uint *)(param_1 + 0x5c) = ((uint)bVar1 * 2 + -1) * 0x380;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xfffffff0;
    *(undefined *)(param_1 + 0x12) = 0;
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
  if ((*(char *)(param_1 + 0x12) == '\0') &&
     (*(int *)(DAT_0202dbf0 + 0x58) < *(int *)(param_1 + 0x58))) {
    *(undefined *)(param_1 + 0x12) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  if (*(char *)(param_1 + 0x12) != '\0') {
    iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 < -0x180) {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
    }
    iVar3 = *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0xbc) = iVar3;
    *(int *)(param_1 + 0x58) = iVar3 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
  }
  if (0x28000 < (iVar4 - *(int *)(param_1 + 0xcc)) + 0x5000U) {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

