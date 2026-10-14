// sub_08055814 at 0x08055814 (thumb)

undefined4 sub_08055814(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xa004);
    iVar1 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x68) = iVar1;
    uVar2 = FUN_081288bc(iVar1 * 2,0x510);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x24;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (((*(char *)(param_1 + 0x13) == '\0') && (*(char *)(param_1 + 0x73) == '\x03')) &&
     (*(byte *)(param_1 + 0x12) < 0x19)) {
    sub_0801CF00(param_1,0xa005);
    *(undefined *)(param_1 + 0x13) = 1;
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_08854f90 +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_088551e0 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0xa000) * 4)) *
               0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar1 = *(int *)(param_1 + 0xb8) +
          (int)((uint)*(byte *)(param_1 + 0x12) *
               (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x68)) / 2;
  *(int *)(param_1 + 0xbc) = iVar1;
  *(int *)(param_1 + 0x58) = iVar1 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
  if (((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x13) != '\0')) &&
     (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0xe) = 5;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

