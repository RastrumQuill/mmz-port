// sub_0808BD9C at 0x0808BD9C (thumb)

undefined8 sub_0808BD9C(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    if (*(int *)(param_1 + 0x60) < 0) {
      iVar2 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1400);
      if (*(int *)(param_1 + 0x58) + -0x1400 < iVar2) {
        *(int *)(param_1 + 0x58) = iVar2 + 0x1400;
LAB_0808be30:
        uVar5 = 4;
      }
    }
    else {
      iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      uVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if ((uVar3 & 0x8000) == 0) {
        if (iVar2 - *(int *)(param_1 + 0x58) < 0x440) {
          *(int *)(param_1 + 0x58) = iVar2;
          goto LAB_0808be30;
        }
      }
      else {
        iVar4 = iVar2 - *(int *)(param_1 + 0x58);
        if (iVar4 < 0) {
          iVar4 = *(int *)(param_1 + 0x58) - iVar2;
        }
        if ((iVar4 < 0x400) || (0x400 < *(int *)(param_1 + 0x60))) {
          *(int *)(param_1 + 0x58) = iVar2;
          uVar5 = 4;
        }
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x58);
  iVar4 = iVar2 + -0x400;
  if (*(int *)(param_1 + 0x5c) != 0) {
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar4 = sub_08009240(*(int *)(param_1 + 0x54) + -0xa00,iVar4);
      if (iVar4 < 1) goto LAB_0808be7c;
    }
    else {
      iVar4 = sub_080090D4(*(int *)(param_1 + 0x54) + 0xa00,iVar4);
      if (-1 < iVar4) goto LAB_0808be7c;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    uVar5 = uVar5 | 1;
  }
LAB_0808be7c:
  iVar4 = -0xa00;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar4 = 0xa00;
  }
  sVar1 = sub_08008CFC(*(int *)(param_1 + 0x54) + iVar4,iVar2 + 0xc00);
  if (sVar1 == 0) {
    uVar5 = uVar5 | 2;
  }
  return CONCAT44(in_lr,uVar5);
}

