// sub_0805DEC8 at 0x0805DEC8 (thumb)

undefined8 sub_0805DEC8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  if (param_3 != 0) {
    param_3 = *(int *)(param_1 + 0x50) + param_3;
    *(int *)(param_1 + 0x50) = param_3;
    uVar2 = (uint)(0 < *(int *)(param_1 + 0x58));
    iVar4 = *(int *)(param_1 + 0x4c) + -0x700;
    iVar1 = -0x2f00;
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) ||
       (iVar1 = 0x2f00, (*(byte *)(param_1 + 10) & 0x20) == 0)) {
      iVar1 = iVar1 * (uVar2 ^ 1);
    }
    else {
      iVar1 = uVar2 * 0x2f00;
    }
    param_3 = param_3 + iVar1;
    if (uVar2 == 0) {
      iVar1 = sub_08007CF8(iVar4,param_3 + 0x100);
      if (0 < iVar1) {
        iVar4 = *(int *)(param_1 + 0x50);
        iVar3 = -0x100;
        goto LAB_0805df52;
      }
    }
    else {
      iVar1 = sub_08007B30(iVar4,param_3 + -0x100);
      if (iVar1 < 0) {
        iVar4 = *(int *)(param_1 + 0x50);
        iVar3 = 0x100;
LAB_0805df52:
        *(int *)(param_1 + 0x50) = iVar4 + iVar3 + iVar1;
        uVar5 = 1;
      }
    }
    uVar2 = (uint)(0 < *(int *)(param_1 + 0x58));
    iVar4 = *(int *)(param_1 + 0x4c) + 0x700;
    iVar1 = -0x2f00;
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) ||
       (iVar1 = 0x2f00, (*(byte *)(param_1 + 10) & 0x20) == 0)) {
      iVar1 = iVar1 * (uVar2 ^ 1);
    }
    else {
      iVar1 = uVar2 * 0x2f00;
    }
    iVar1 = *(int *)(param_1 + 0x50) + iVar1;
    if (uVar2 == 0) {
      iVar1 = sub_08007CF8(iVar4,iVar1 + 0x100);
      if (0 < iVar1) {
        iVar4 = *(int *)(param_1 + 0x50);
        iVar3 = -0x100;
        goto LAB_0805dfd6;
      }
    }
    else {
      iVar1 = sub_08007B30(iVar4,iVar1 + -0x100);
      if (iVar1 < 0) {
        iVar4 = *(int *)(param_1 + 0x50);
        iVar3 = 0x100;
LAB_0805dfd6:
        *(int *)(param_1 + 0x50) = iVar4 + iVar3 + iVar1;
        uVar5 = 1;
      }
    }
  }
  if (param_2 == 0) goto LAB_0805e0b6;
  param_2 = *(int *)(param_1 + 0x4c) + param_2;
  *(int *)(param_1 + 0x4c) = param_2;
  uVar2 = (uint)(0 < *(int *)(param_1 + 0x54));
  iVar4 = param_2 + -0x700 + uVar2 * 0xe00;
  iVar1 = *(int *)(param_1 + 0x50) + -0x200;
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    iVar1 = *(int *)(param_1 + 0x50) + 0x200;
  }
  if (uVar2 == 0) {
    iVar1 = sub_08008120(iVar4,iVar1);
    if (0 < iVar1) goto LAB_0805e040;
  }
  else {
    iVar1 = sub_08007EE0(iVar4);
    if (iVar1 < 0) {
LAB_0805e040:
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
      uVar5 = uVar5 | 2;
    }
  }
  uVar2 = (uint)(0 < *(int *)(param_1 + 0x54));
  iVar1 = *(int *)(param_1 + 0x4c) + -0x700 + uVar2 * 0xe00;
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    iVar4 = *(int *)(param_1 + 0x50) + -0x2d00;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x50) + 0x2d00;
  }
  if (uVar2 == 0) {
    iVar1 = sub_08008120(iVar1,iVar4);
    if (iVar1 < 1) goto LAB_0805e0b6;
  }
  else {
    iVar1 = sub_08007EE0(iVar1);
    if (-1 < iVar1) goto LAB_0805e0b6;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
  uVar5 = uVar5 | 2;
LAB_0805e0b6:
  return CONCAT44(in_lr,uVar5);
}

