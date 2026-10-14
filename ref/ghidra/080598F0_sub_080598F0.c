// sub_080598F0 at 0x080598F0 (thumb)

undefined8 sub_080598F0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  iVar1 = sub_08008360(*(int *)(param_1 + 0x4c) + -0x800,*(undefined4 *)(param_1 + 0x50));
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  iVar3 = sub_08008360(*(int *)(param_1 + 0x4c) + 0x800,*(undefined4 *)(param_1 + 0x50));
  if ((iVar3 < iVar1) || (iVar2 < iVar1)) {
    if ((iVar1 < iVar2) || (iVar3 < iVar2)) {
      iVar4 = *(int *)(param_1 + 0x4c);
      iVar2 = 0x800;
      goto LAB_08059944;
    }
    iVar4 = *(int *)(param_1 + 0x4c);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x4c);
    iVar2 = -0x800;
    iVar3 = iVar1;
LAB_08059944:
    iVar4 = iVar4 + iVar2;
    iVar2 = iVar3;
  }
  uVar5 = sub_080079CC(iVar4,*(undefined4 *)(param_1 + 0x50));
  if ((uVar5 & 0x80) == 0) {
    if (0 < iVar2 - *(int *)(param_1 + 0x50)) goto LAB_0805997e;
  }
  else {
    iVar3 = iVar2 - *(int *)(param_1 + 0x50);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0x50) - iVar2;
    }
    if (0x400 < iVar3) {
LAB_0805997e:
      uVar6 = 0;
      goto LAB_08059984;
    }
  }
  uVar6 = 1;
LAB_08059984:
  return CONCAT44(in_lr,uVar6);
}

