// sub_0803D880 at 0x0803D880 (thumb)

undefined8 sub_0803D880(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar5 = 0;
  uVar3 = (uint)(0 < *(int *)(param_1 + 0x54));
  iVar6 = uVar3 * 0x2c00 + -0x1600;
  iVar2 = *(int *)(param_1 + 0x50);
  iVar4 = iVar2 + -0x800;
  if (uVar3 == 0) {
    iVar4 = sub_08008120(*(int *)(param_1 + 0x4c) + iVar6,iVar4);
    if (iVar4 < 1) goto LAB_0803d8e0;
  }
  else {
    iVar4 = sub_08007EE0(*(int *)(param_1 + 0x4c) + iVar6,iVar4);
    if (-1 < iVar4) goto LAB_0803d8e0;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
  uVar5 = 2;
LAB_0803d8e0:
  cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + iVar6,iVar2 + 0x800);
  if (cVar1 == '\0') {
    uVar5 = uVar5 | 4;
  }
  iVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if ((*(int *)(param_1 + 0x50) + -0x1000 < iVar2) && (*(int *)(param_1 + 0x58) < 0)) {
    *(int *)(param_1 + 0x50) = iVar2 + 0x1000;
    uVar5 = uVar5 | 8;
  }
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if ((iVar2 - *(int *)(param_1 + 0x50) < 0x440) && (0 < *(int *)(param_1 + 0x58))) {
    *(int *)(param_1 + 0x50) = iVar2;
    uVar5 = uVar5 | 1;
  }
  return CONCAT44(in_lr,uVar5);
}

