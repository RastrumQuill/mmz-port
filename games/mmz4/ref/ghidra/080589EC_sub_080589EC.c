// sub_080589EC at 0x080589EC (thumb)

undefined4 sub_080589EC(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xa008);
    *(uint *)(param_1 + 0x5c) = ((bVar1 >> 4 & 1) * 2 + -1) * 0x200;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
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
  iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar2;
  if (iVar2 < -0x200) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
  }
  piVar4 = (int *)(param_1 + 0xbc);
  iVar2 = *piVar4 + *(int *)(param_1 + 0x60);
  *piVar4 = iVar2;
  *(int *)(param_1 + 0x58) = iVar2 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
  iVar3 = *(int *)(param_1 + 0xb8);
  if (iVar2 <= iVar3) {
    *piVar4 = iVar3;
    *(int *)(param_1 + 0x58) = iVar3 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
    *(undefined *)(param_1 + 0xe) = 5;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

