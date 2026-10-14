// sub_080A0460 at 0x080A0460 (thumb)

undefined8 sub_080A0460(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = 0;
  uVar3 = (uint)(0 < *(int *)(param_1 + 0x5c));
  iVar5 = uVar3 * 0x1000 + -0x800;
  iVar2 = *(int *)(param_1 + 0x58);
  iVar4 = iVar2 + -0x800;
  if (uVar3 == 0) {
    iVar4 = sub_08009240(*(int *)(param_1 + 0x54) + iVar5,iVar4);
    if (iVar4 < 1) goto LAB_080a04ac;
  }
  else {
    iVar4 = sub_080090D4(*(int *)(param_1 + 0x54) + iVar5,iVar4);
    if (-1 < iVar4) goto LAB_080a04ac;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  uVar6 = 2;
LAB_080a04ac:
  sVar1 = sub_08008CFC(*(int *)(param_1 + 0x54) + iVar5,iVar2 + 0x800);
  if (sVar1 == 0) {
    uVar6 = uVar6 | 4;
  }
  iVar2 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((*(int *)(param_1 + 0x58) + -0x800 < iVar2) && (*(int *)(param_1 + 0x60) < 0)) {
    *(int *)(param_1 + 0x58) = iVar2 + 0x800;
    uVar6 = uVar6 | 8;
  }
  iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (((iVar2 + -0x800) - *(int *)(param_1 + 0x58) < 0x440) && (0 < *(int *)(param_1 + 0x60))) {
    *(int *)(param_1 + 0x58) = iVar2 + -0x800;
    uVar6 = uVar6 | 1;
  }
  return CONCAT44(in_lr,uVar6);
}

