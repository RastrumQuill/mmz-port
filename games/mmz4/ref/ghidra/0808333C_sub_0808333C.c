// sub_0808333C at 0x0808333C (thumb)

undefined4 sub_0808333C(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = false;
  if (param_3 != 0) {
    param_3 = *(int *)(param_1 + 0x68) + param_3;
    *(int *)(param_1 + 0x68) = param_3;
    uVar4 = (uint)(0 < *(int *)(param_1 + 0x60));
    iVar6 = *(int *)(param_1 + 100) + -0x700;
    iVar5 = -0x2f00;
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) ||
       (iVar5 = 0x2f00, (*(byte *)(param_1 + 10) & 0x20) == 0)) {
      iVar5 = iVar5 * (uVar4 ^ 1);
    }
    else {
      iVar5 = uVar4 * 0x2f00;
    }
    param_3 = param_3 + iVar5;
    if (uVar4 == 0) {
      iVar5 = sub_08007F8C(iVar6,param_3 + 0x100);
      if (0 < iVar5) {
        iVar6 = *(int *)(param_1 + 0x68);
        iVar3 = -0x100;
        goto LAB_080833ca;
      }
    }
    else {
      iVar5 = sub_08007DB4(iVar6,param_3 + -0x100);
      if (iVar5 < 0) {
        iVar6 = *(int *)(param_1 + 0x68);
        iVar3 = 0x100;
LAB_080833ca:
        *(int *)(param_1 + 0x68) = iVar6 + iVar3 + iVar5;
        bVar1 = true;
      }
    }
    uVar4 = (uint)(0 < *(int *)(param_1 + 0x60));
    iVar6 = *(int *)(param_1 + 100) + 0x700;
    iVar5 = -0x2f00;
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) ||
       (iVar5 = 0x2f00, (*(byte *)(param_1 + 10) & 0x20) == 0)) {
      iVar5 = iVar5 * (uVar4 ^ 1);
    }
    else {
      iVar5 = uVar4 * 0x2f00;
    }
    iVar5 = *(int *)(param_1 + 0x68) + iVar5;
    if (uVar4 == 0) {
      iVar5 = sub_08007F8C(iVar6,iVar5 + 0x100);
      if (0 < iVar5) {
        iVar6 = *(int *)(param_1 + 0x68);
        iVar3 = -0x100;
        goto LAB_0808344e;
      }
    }
    else {
      iVar5 = sub_08007DB4(iVar6,iVar5 + -0x100);
      if (iVar5 < 0) {
        iVar6 = *(int *)(param_1 + 0x68);
        iVar3 = 0x100;
LAB_0808344e:
        *(int *)(param_1 + 0x68) = iVar6 + iVar3 + iVar5;
        bVar1 = true;
      }
    }
  }
  bVar2 = false;
  if (param_2 == 0) goto LAB_08083528;
  param_2 = *(int *)(param_1 + 100) + param_2;
  *(int *)(param_1 + 100) = param_2;
  uVar4 = (uint)(0 < *(int *)(param_1 + 0x5c));
  iVar6 = param_2 + -0x700 + uVar4 * 0xe00;
  iVar5 = *(int *)(param_1 + 0x68) + -0x200;
  if (uVar4 == 0) {
    iVar5 = sub_0800834C(iVar6,iVar5);
    if (0 < iVar5) goto LAB_080834ae;
  }
  else {
    iVar5 = sub_0800816C(iVar6,iVar5);
    if (iVar5 < 0) {
LAB_080834ae:
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar5;
      bVar2 = true;
    }
  }
  uVar4 = (uint)(0 < *(int *)(param_1 + 0x5c));
  iVar5 = *(int *)(param_1 + 100) + -0x700 + uVar4 * 0xe00;
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    iVar6 = *(int *)(param_1 + 0x68) + -0x2d00;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x68) + 0x2d00;
  }
  if (uVar4 == 0) {
    iVar5 = sub_0800834C(iVar5,iVar6);
    if (iVar5 < 1) goto LAB_08083528;
  }
  else {
    iVar5 = sub_0800816C(iVar5,iVar6);
    if (-1 < iVar5) goto LAB_08083528;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar5;
  bVar2 = true;
LAB_08083528:
  if (((bVar1) || (*(int *)(param_1 + 0x5c) == 0)) || (*(int *)(param_1 + 0x60) == 0)) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  }
  if (bVar2) {
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  return in_lr;
}

