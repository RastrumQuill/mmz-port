// sub_08059B48 at 0x08059B48 (thumb)

undefined8 sub_08059B48(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x58) < 0) {
    iVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1400);
    if (*(int *)(param_1 + 0x50) + -0x1400 < iVar2) {
      *(int *)(param_1 + 0x50) = iVar2 + 0x1400;
    }
  }
  else {
    iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    uVar3 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if ((uVar3 & 0x80) == 0) {
      if (iVar2 - *(int *)(param_1 + 0x50) < 0x440) goto LAB_08059bce;
    }
    else {
      iVar5 = iVar2 - *(int *)(param_1 + 0x50);
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0x50) - iVar2;
      }
      if ((iVar5 < 0x400) || (0x400 < *(int *)(param_1 + 0x58))) {
LAB_08059bce:
        *(int *)(param_1 + 0x50) = iVar2;
      }
    }
  }
  if (*(int *)(param_1 + 0x54) < 1) {
    iVar5 = *(int *)(param_1 + 0x50) + -0x400;
    iVar2 = sub_08008120(*(undefined4 *)(param_1 + 0x4c),iVar5);
    if (iVar2 < 1) goto LAB_08059c18;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x50) + -0x400;
    iVar2 = sub_08007EE0(*(undefined4 *)(param_1 + 0x4c),iVar5);
    if (-1 < iVar2) {
LAB_08059c18:
      iVar2 = -0xa00;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar2 = 0xa00;
      }
      cVar1 = sub_080079CC(*(int *)(param_1 + 0x4c) + iVar2,iVar5 + 0x1000);
      if (cVar1 == '\0') {
        uVar4 = 2;
      }
      else {
        uVar4 = 0;
      }
      goto LAB_08059c4a;
    }
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
  uVar4 = 1;
LAB_08059c4a:
  return CONCAT44(in_lr,uVar4);
}

