// sub_08083564 at 0x08083564 (thumb)

undefined8 sub_08083564(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  if (param_3 != 0) {
    param_3 = *(int *)(param_1 + 0x58) + param_3;
    *(int *)(param_1 + 0x58) = param_3;
    uVar2 = (uint)(0 < *(int *)(param_1 + 0x60));
    iVar4 = *(int *)(param_1 + 0x54) + -0x700;
    iVar3 = -0x2f00;
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) ||
       (iVar3 = 0x2f00, (*(byte *)(param_1 + 10) & 0x20) == 0)) {
      iVar3 = iVar3 * (uVar2 ^ 1);
    }
    else {
      iVar3 = uVar2 * 0x2f00;
    }
    param_3 = param_3 + iVar3;
    if (uVar2 == 0) {
      iVar3 = sub_08007F8C(iVar4,param_3 + 0x100);
      if (0 < iVar3) {
        iVar4 = *(int *)(param_1 + 0x58);
        iVar1 = -0x100;
        goto LAB_080835f2;
      }
    }
    else {
      iVar3 = sub_08007DB4(iVar4,param_3 + -0x100);
      if (iVar3 < 0) {
        iVar4 = *(int *)(param_1 + 0x58);
        iVar1 = 0x100;
LAB_080835f2:
        *(int *)(param_1 + 0x58) = iVar4 + iVar1 + iVar3;
        uVar5 = 1;
      }
    }
    uVar2 = (uint)(0 < *(int *)(param_1 + 0x60));
    iVar4 = *(int *)(param_1 + 0x54) + 0x700;
    iVar3 = -0x2f00;
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) ||
       (iVar3 = 0x2f00, (*(byte *)(param_1 + 10) & 0x20) == 0)) {
      iVar3 = iVar3 * (uVar2 ^ 1);
    }
    else {
      iVar3 = uVar2 * 0x2f00;
    }
    iVar3 = *(int *)(param_1 + 0x58) + iVar3;
    if (uVar2 == 0) {
      iVar3 = sub_08007F8C(iVar4,iVar3 + 0x100);
      if (0 < iVar3) {
        iVar4 = *(int *)(param_1 + 0x58);
        iVar1 = -0x100;
        goto LAB_08083676;
      }
    }
    else {
      iVar3 = sub_08007DB4(iVar4,iVar3 + -0x100);
      if (iVar3 < 0) {
        iVar4 = *(int *)(param_1 + 0x58);
        iVar1 = 0x100;
LAB_08083676:
        *(int *)(param_1 + 0x58) = iVar4 + iVar1 + iVar3;
        uVar5 = 1;
      }
    }
  }
  if (param_2 == 0) goto LAB_08083760;
  param_2 = *(int *)(param_1 + 0x54) + param_2;
  *(int *)(param_1 + 0x54) = param_2;
  uVar2 = (uint)(0 < *(int *)(param_1 + 0x5c));
  iVar4 = param_2 + -0x700 + uVar2 * 0xe00;
  iVar3 = *(int *)(param_1 + 0x58) + -0x200;
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    iVar3 = *(int *)(param_1 + 0x58) + 0x200;
  }
  if (uVar2 == 0) {
    iVar3 = sub_0800834C(iVar4,iVar3);
    if (0 < iVar3) goto LAB_080836e6;
  }
  else {
    iVar3 = sub_0800816C(iVar4,iVar3);
    if (iVar3 < 0) {
LAB_080836e6:
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
      uVar5 = uVar5 | 2;
    }
  }
  uVar2 = (uint)(0 < *(int *)(param_1 + 0x5c));
  iVar3 = *(int *)(param_1 + 0x54) + -0x700 + uVar2 * 0xe00;
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    iVar4 = *(int *)(param_1 + 0x58) + -0x2d00;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x58) + 0x2d00;
  }
  if (uVar2 == 0) {
    iVar3 = sub_0800834C(iVar3,iVar4);
    if (iVar3 < 1) goto LAB_08083760;
  }
  else {
    iVar3 = sub_0800816C(iVar3,iVar4);
    if (-1 < iVar3) goto LAB_08083760;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  uVar5 = uVar5 | 2;
LAB_08083760:
  return CONCAT44(in_lr,uVar5);
}

