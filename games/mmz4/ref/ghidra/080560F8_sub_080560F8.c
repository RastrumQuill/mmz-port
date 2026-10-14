// sub_080560F8 at 0x080560F8 (thumb)

undefined4 sub_080560F8(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = DAT_0202dbf0;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xfa);
    sub_0801CF00(param_1,0xa00b);
    iVar3 = sub_08059768(param_1);
    uVar1 = *(ushort *)(&DAT_08855278 + iVar3 * 2);
    *(ushort *)(param_1 + 0xc2) = uVar1;
    iVar3 = sub_080598E0(param_1);
    iVar4 = (uint)uVar1 *
            (int)*(short *)((int)&DAT_08128c10 + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x17));
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    iVar3 = (uint)uVar1 * (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar3 << 0x18) >> 0x17));
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar3 >> 8;
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
  iVar3 = *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0xbc) = iVar3;
  *(int *)(param_1 + 0x58) = iVar3 + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0xb5)] * 2;
  if ((iVar2 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) {
    if (DAT_0202ea34 + 0x4fff <= *(int *)(param_1 + 0x58) + -0x1000) {
      *(undefined *)(param_1 + 0xe) = 4;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0x60) = 0;
    sub_08005784(param_1 + 0x74,&DAT_088550f8);
    *(undefined *)(param_1 + 0xe) = 5;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

