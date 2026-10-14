// sub_08057EF4 at 0x08057EF4 (thumb)

undefined4 sub_08057EF4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xa018);
    iVar1 = *(int *)(param_1 + 0xcc) + 0xf000;
    if (*(int *)(param_1 + 0x54) < iVar1) {
      iVar1 = -0x400;
    }
    else if (iVar1 < *(int *)(param_1 + 0x54)) {
      iVar1 = 0x400;
    }
    else {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      iVar1 = ((uVar2 * 2 >> 0x11 & 2) - 1) * 0x400;
    }
    *(int *)(param_1 + 0x5c) = iVar1;
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
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar1;
  if (0x23000 < (iVar1 - *(int *)(param_1 + 0xcc)) + 0x2800U) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

