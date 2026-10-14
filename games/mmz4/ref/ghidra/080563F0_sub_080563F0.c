// sub_080563F0 at 0x080563F0 (thumb)

undefined4 sub_080563F0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xa00d);
    sub_08059768(param_1);
    iVar1 = sub_08059990(param_1);
    iVar2 = *(short *)((int)&DAT_08128c10 + ((uint)((iVar1 + 0x40) * 0x1000000) >> 0x17)) * 0x500;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    iVar1 = *(short *)((int)&DAT_08128c10 + ((uint)(iVar1 << 0x18) >> 0x17)) * 0x500;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar1 >> 8;
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
  piVar3 = (int *)(param_1 + 0xbc);
  iVar2 = *piVar3 + *(int *)(param_1 + 0x60);
  *piVar3 = iVar2;
  *(int *)(param_1 + 0x58) = iVar2 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar2 <= iVar1) {
    *piVar3 = iVar1;
    *(int *)(param_1 + 0x58) = iVar1 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
    *(undefined *)(param_1 + 0xe) = 8;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

