// sub_08058E80 at 0x08058E80 (thumb)

undefined4 sub_08058E80(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801CF00(param_1,0xa006);
    if (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0xb8)) {
      uVar1 = 0x200;
    }
    else {
      uVar1 = 0xfffffe00;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar1;
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
  piVar2 = (int *)(param_1 + 0xbc);
  iVar3 = *piVar2 + *(int *)(param_1 + 0x60);
  *piVar2 = iVar3;
  *(int *)(param_1 + 0x58) = iVar3 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
  if (((*(int *)(param_1 + 0x60) < 0) && (iVar3 <= *(int *)(param_1 + 0xb8))) ||
     ((0 < *(int *)(param_1 + 0x60) && (*(int *)(param_1 + 0xb8) <= iVar3)))) {
    *piVar2 = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
    sub_08059534(param_1);
  }
  return in_lr;
}

