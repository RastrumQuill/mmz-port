// sub_0805DCB0 at 0x0805DCB0 (thumb)

undefined4 sub_0805DCB0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = false;
  if (param_3 != 0) {
    param_3 = *(int *)(param_1 + 0x60) + param_3;
    *(int *)(param_1 + 0x60) = param_3;
    uVar3 = (uint)(0 < *(int *)(param_1 + 0x58));
    iVar4 = *(int *)(param_1 + 0x5c) + -0x700;
    iVar6 = -0x2f00;
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) ||
       (iVar6 = 0x2f00, (*(byte *)(param_1 + 10) & 0x20) == 0)) {
      iVar6 = iVar6 * (uVar3 ^ 1);
    }
    else {
      iVar6 = uVar3 * 0x2f00;
    }
    param_3 = param_3 + iVar6;
    if (uVar3 == 0) {
      iVar6 = sub_08007CF8(iVar4,param_3 + 0x100);
      if (0 < iVar6) {
        iVar4 = *(int *)(param_1 + 0x60);
        iVar5 = -0x100;
        goto LAB_0805dd3a;
      }
    }
    else {
      iVar6 = sub_08007B30(iVar4,param_3 + -0x100);
      if (iVar6 < 0) {
        iVar4 = *(int *)(param_1 + 0x60);
        iVar5 = 0x100;
LAB_0805dd3a:
        *(int *)(param_1 + 0x60) = iVar4 + iVar5 + iVar6;
        bVar1 = true;
      }
    }
    uVar3 = (uint)(0 < *(int *)(param_1 + 0x58));
    iVar4 = *(int *)(param_1 + 0x5c) + 0x700;
    iVar6 = -0x2f00;
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) ||
       (iVar6 = 0x2f00, (*(byte *)(param_1 + 10) & 0x20) == 0)) {
      iVar6 = iVar6 * (uVar3 ^ 1);
    }
    else {
      iVar6 = uVar3 * 0x2f00;
    }
    iVar6 = *(int *)(param_1 + 0x60) + iVar6;
    if (uVar3 == 0) {
      iVar6 = sub_08007CF8(iVar4,iVar6 + 0x100);
      if (0 < iVar6) {
        iVar4 = *(int *)(param_1 + 0x60);
        iVar5 = -0x100;
        goto LAB_0805ddbe;
      }
    }
    else {
      iVar6 = sub_08007B30(iVar4,iVar6 + -0x100);
      if (iVar6 < 0) {
        iVar4 = *(int *)(param_1 + 0x60);
        iVar5 = 0x100;
LAB_0805ddbe:
        *(int *)(param_1 + 0x60) = iVar4 + iVar5 + iVar6;
        bVar1 = true;
      }
    }
  }
  bVar2 = false;
  if (param_2 == 0) goto LAB_0805de8e;
  param_2 = *(int *)(param_1 + 0x5c) + param_2;
  *(int *)(param_1 + 0x5c) = param_2;
  uVar3 = (uint)(0 < *(int *)(param_1 + 0x54));
  iVar6 = param_2 + -0x700 + uVar3 * 0xe00;
  if (uVar3 == 0) {
    iVar6 = sub_08008120(iVar6,*(int *)(param_1 + 0x60) + -0x200);
    if (0 < iVar6) goto LAB_0805de18;
  }
  else {
    iVar6 = sub_08007EE0(iVar6);
    if (iVar6 < 0) {
LAB_0805de18:
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar6;
      bVar2 = true;
    }
  }
  uVar3 = (uint)(0 < *(int *)(param_1 + 0x54));
  iVar6 = *(int *)(param_1 + 0x5c) + -0x700 + uVar3 * 0xe00;
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    iVar4 = *(int *)(param_1 + 0x60) + -0x2d00;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x60) + 0x2d00;
  }
  if (uVar3 == 0) {
    iVar6 = sub_08008120(iVar6,iVar4);
    if (iVar6 < 1) goto LAB_0805de8e;
  }
  else {
    iVar6 = sub_08007EE0(iVar6);
    if (-1 < iVar6) goto LAB_0805de8e;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar6;
  bVar2 = true;
LAB_0805de8e:
  if (((bVar1) || (*(int *)(param_1 + 0x54) == 0)) || (*(int *)(param_1 + 0x58) == 0)) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  }
  if (bVar2) {
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
  }
  return in_lr;
}

