// sub_08058D2C at 0x08058D2C (thumb)

undefined4 sub_08058D2C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xa006);
    if (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0xb8)) {
      iVar2 = 0x30;
      if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
        iVar2 = 0x50;
      }
    }
    else {
      iVar2 = 0xd0;
      if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
        iVar2 = 0xb0;
      }
    }
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x17)) << 1;
    *(int *)(param_1 + 0x60) =
         (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar2 << 0x18) >> 0x17)) << 1;
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
  iVar2 = sub_08059798(param_1);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    piVar1 = (int *)(param_1 + 0xbc);
    iVar2 = *piVar1 + *(int *)(param_1 + 0x60);
    *piVar1 = iVar2;
    *(int *)(param_1 + 0x58) = iVar2 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
    if (((*(int *)(param_1 + 0x60) < 0) && (iVar2 <= *(int *)(param_1 + 0xb8))) ||
       ((0 < *(int *)(param_1 + 0x60) && (*(int *)(param_1 + 0xb8) <= iVar2)))) {
      *piVar1 = *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
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

