// sub_08055C14 at 0x08055C14 (thumb)

undefined4 sub_08055C14(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined auStack_2c [4];
  undefined auStack_28 [4];
  undefined auStack_24 [4];
  undefined *local_20 [2];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xf7);
    sub_0801CF00(param_1,0xa01c);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffab0;
    *(undefined4 *)(param_1 + 0x68) = 0x38;
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
  iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar3;
  if (0 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  piVar4 = (int *)(param_1 + 0xbc);
  iVar3 = *piVar4 + *(int *)(param_1 + 0x60);
  *piVar4 = iVar3;
  *(int *)(param_1 + 0x58) = iVar3 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
  if (*piVar4 < DAT_0202ea34 + -0x5400) {
    uVar2 = 2;
  }
  else {
    if (*(int *)(param_1 + 0x60) != 0) {
      return in_lr;
    }
    sub_08128B5C(auStack_2c,&DAT_08128ee0,3);
    sub_08128B5C(auStack_28,&DAT_08128ee3,3);
    sub_08128B5C(auStack_24,&DAT_08128ee6,3);
    local_20[0] = auStack_28;
    local_20[1] = auStack_24;
    bVar1 = (byte)DAT_0202e918 & 8;
    if ((DAT_0202e918 & 8) != 0) {
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    iVar3 = sub_08059B54(local_20[0x7e00 < (*(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54)
                                           ) + 0x3f00U],3);
    if (iVar3 != 0) {
      *(undefined *)(param_1 + 0xd) = auStack_2c[iVar3];
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
      return in_lr;
    }
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0xe) = uVar2;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

