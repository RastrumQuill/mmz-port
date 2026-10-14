// sub_08055578 at 0x08055578 (thumb)

undefined4 sub_08055578(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xa001);
    iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0xbc));
    *(int *)(param_1 + 0xbc) = iVar1;
    *(int *)(param_1 + 0x58) = iVar1 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
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
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    iVar1 = sub_08059BD4(param_1);
    *(int *)(param_1 + 0xcc) = iVar1;
    iVar1 = sub_08008534(iVar1 + 0xf000,*(int *)(param_1 + 0x58) + -0x2000);
    *(int *)(param_1 + 0xb8) = iVar1 + -0x4000;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

