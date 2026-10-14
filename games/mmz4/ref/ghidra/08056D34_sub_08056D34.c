// sub_08056D34 at 0x08056D34 (thumb)

undefined4 sub_08056D34(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801CF00(param_1,0xa008);
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
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
    *(uint *)(param_1 + 0x5c) = ((uint)bVar1 * 2 + -1) * 0x300;
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
  iVar3 = sub_08059798(param_1);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if ((iVar3 - *(int *)(param_1 + 0xcc)) - 0x2800U < 0x19001) {
      *(undefined *)(param_1 + 0xe) = 7;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

