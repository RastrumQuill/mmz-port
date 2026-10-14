// sub_0804EBC4 at 0x0804EBC4 (thumb)

undefined8 sub_0804EBC4(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar5 = 0;
  uVar3 = (uint)(0 < *(int *)(param_1 + 0x5c));
  iVar6 = uVar3 * 0x2c00 + -0x1600;
  iVar2 = *(int *)(param_1 + 0x58);
  iVar4 = iVar2 + -0x800;
  if (uVar3 == 0) {
    iVar4 = sub_08009240(*(int *)(param_1 + 0x54) + iVar6,iVar4);
    if (iVar4 < 1) goto LAB_0804ec24;
  }
  else {
    iVar4 = sub_080090D4(*(int *)(param_1 + 0x54) + iVar6,iVar4);
    if (-1 < iVar4) goto LAB_0804ec24;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  uVar5 = 2;
LAB_0804ec24:
  sVar1 = sub_08008CFC(*(int *)(param_1 + 0x54) + iVar6,iVar2 + 0x800);
  if (sVar1 == 0) {
    uVar5 = uVar5 | 4;
  }
  iVar2 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((*(int *)(param_1 + 0x58) + -0x1000 < iVar2) && (*(int *)(param_1 + 0x60) < 0)) {
    *(int *)(param_1 + 0x58) = iVar2 + 0x1000;
    uVar5 = uVar5 | 8;
  }
  iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((iVar2 - *(int *)(param_1 + 0x58) < 0x440) && (0 < *(int *)(param_1 + 0x60))) {
    *(int *)(param_1 + 0x58) = iVar2;
    uVar5 = uVar5 | 1;
  }
  return CONCAT44(in_lr,uVar5);
}

