// sub_0805A1C0 at 0x0805A1C0 (thumb)

undefined4 sub_0805A1C0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5cff) {
      sub_0801CF00(param_1);
      *(undefined *)(param_1 + 0xbd) = 1;
    }
    if ((bVar1 & 1) == 0) {
      iVar2 = sub_0805C370(param_1);
      iVar3 = 0x2000;
    }
    else {
      iVar2 = sub_0805C370(param_1);
      iVar3 = 0xd000;
    }
    *(int *)(param_1 + 100) = iVar2 + iVar3;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb4) + -0x47ff;
    iVar2 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = FUN_081288bc(iVar2 * 0x100,((bVar1 & 1) * 2 + -1) * 0x240);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
    }
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x60) >> 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  piVar5 = (int *)(param_1 + 0xc0);
  if (*piVar5 != 0) {
    *piVar5 = *piVar5 + -1;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  iVar2 = FUN_081288bc(*(int *)(param_1 + 0x5c) * *piVar5 * 0x100,uVar4);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) - iVar2;
  iVar2 = FUN_081288bc(*piVar5 << 0x11,uVar4);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x68) +
       *(short *)((int)&DAT_08128c10 + ((uint)(iVar2 << 0x18) >> 0x17)) * 0xc;
  if (*piVar5 == 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

