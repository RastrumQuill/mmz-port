// sub_08081D00 at 0x08081D00 (thumb)

undefined8 sub_08081D00(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = 0;
  uVar3 = (uint)(0 < *(int *)(param_1 + 0x54));
  iVar5 = uVar3 * 0x1c00 + -0xe00;
  iVar2 = *(int *)(param_1 + 0x50);
  iVar4 = iVar2 + -0x800;
  if (uVar3 == 0) {
    iVar4 = sub_08008120(*(int *)(param_1 + 0x4c) + iVar5,iVar4);
    if (iVar4 < 1) goto LAB_08081d58;
  }
  else {
    iVar4 = sub_08007EE0(*(int *)(param_1 + 0x4c) + iVar5,iVar4);
    if (-1 < iVar4) goto LAB_08081d58;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
  uVar6 = 2;
LAB_08081d58:
  cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + iVar5,iVar2 + 0x800);
  if (cVar1 == '\0') {
    uVar6 = uVar6 | 4;
  }
  iVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if ((*(int *)(param_1 + 0x50) + -0x800 < iVar2) && (*(int *)(param_1 + 0x58) < 0)) {
    *(int *)(param_1 + 0x50) = iVar2 + 0x800;
    uVar6 = uVar6 | 8;
  }
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (((iVar2 + -0x800) - *(int *)(param_1 + 0x50) < 0x440) && (0 < *(int *)(param_1 + 0x58))) {
    *(int *)(param_1 + 0x50) = iVar2 + -0x800;
    uVar6 = uVar6 | 1;
  }
  return CONCAT44(in_lr,uVar6);
}

