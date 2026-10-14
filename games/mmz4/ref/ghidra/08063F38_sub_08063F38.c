// sub_08063F38 at 0x08063F38 (thumb)

undefined4 sub_08063F38(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08065A40(param_1,0);
    iVar5 = *(int *)(param_1 + 0xd0) + 0x7800;
    *(int *)(param_1 + 100) = iVar5;
    iVar2 = *(int *)(param_1 + 0xd4) + 0x5800;
    *(int *)(param_1 + 0x68) = iVar2;
    iVar3 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar5 - iVar3;
    *(int *)(param_1 + 0x60) = iVar2 - *(int *)(param_1 + 0x58);
    uVar4 = 0xfffffe00;
    if (iVar3 < iVar5) {
      uVar4 = 0x200;
    }
    cVar1 = FUN_081288bc(iVar5 - iVar3,uVar4);
    *(char *)(param_1 + 0x13) = cVar1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar2 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) * -*(int *)(param_1 + 0x5c),
                       *(undefined *)(param_1 + 0x13));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + iVar2;
  iVar2 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) << 6,*(undefined *)(param_1 + 0x13));
  iVar2 = -*(int *)(param_1 + 0x60) *
          (int)*(short *)((int)&DAT_08128c10 + ((uint)((0x80 - iVar2) * 0x1000000) >> 0x17));
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + (iVar2 >> 8);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

