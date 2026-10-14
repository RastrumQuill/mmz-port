// sub_08056024 at 0x08056024 (thumb)

undefined4 sub_08056024(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xa00a);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
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
  piVar3 = (int *)(param_1 + 0xbc);
  iVar1 = *piVar3 + *(int *)(param_1 + 0x60);
  *piVar3 = iVar1;
  *(int *)(param_1 + 0x58) = iVar1 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
  iVar2 = *(int *)(param_1 + 0x5c) + -0x800;
  if (iVar1 <= iVar2) {
    *piVar3 = iVar2;
    *(int *)(param_1 + 0x58) = iVar2 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

