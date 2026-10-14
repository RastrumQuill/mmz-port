// sub_08066544 at 0x08066544 (thumb)

undefined4 sub_08066544(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  iVar4 = 5 - (uVar1 * 2 >> 0x11 & 1);
  if (0 < iVar4) {
    do {
      iVar6 = *(int *)(param_1 + 0x54);
      uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar7 = uVar1 & 0x7fffffff;
      DAT_0202dc38 = uVar7;
      iVar2 = sub_08128A9C(uVar1 * 2 >> 0x11,0x3000);
      iVar5 = *(int *)(param_1 + 0x58);
      uVar1 = uVar7 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar1 & 0x7fffffff;
      iVar3 = sub_08128A9C(uVar1 * 2 >> 0x11,0x3000);
      sub_080D0C00(iVar6 + -0x1800 + iVar2,iVar5 + -0x1800 + iVar3,0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  iVar4 = 4 - (uVar1 * 2 >> 0x11 & 1);
  if (0 < iVar4) {
    do {
      iVar6 = *(int *)(param_1 + 0x54);
      uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar7 = uVar1 & 0x7fffffff;
      DAT_0202dc38 = uVar7;
      iVar2 = sub_08128A9C(uVar1 * 2 >> 0x11,0x3000);
      iVar5 = *(int *)(param_1 + 0x58);
      uVar1 = uVar7 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar1 & 0x7fffffff;
      iVar3 = sub_08128A9C(uVar1 * 2 >> 0x11,0x3000);
      sub_080D0C00(iVar6 + -0x1800 + iVar2,iVar5 + -0x1800 + iVar3,1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return in_lr;
}

