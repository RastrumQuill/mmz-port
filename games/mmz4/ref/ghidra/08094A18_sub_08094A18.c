// sub_08094A18 at 0x08094A18 (thumb)

undefined4 sub_08094A18(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  param_2 = param_2 + 0x700;
  iVar4 = *(int *)(param_1 + 0x58);
  iVar5 = iVar4 + -0x2000;
  iVar7 = 0x7fffffff;
  uVar1 = sub_08007020(*(undefined4 *)(param_1 + 0x54));
  if ((ushort)((uVar1 & 0xf) - 2) < 6) {
    iVar4 = 2;
    do {
      uVar1 = sub_08007020(param_2,iVar5);
      if (((((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) && ((uVar1 & 0xf) != 0xf)) &&
          ((5 < (ushort)((uVar1 & 0xf) - 2) && (iVar2 = sub_0800816C(param_2,iVar5), iVar2 < 0))))
         && (iVar2 = iVar2 + param_2, iVar2 < iVar7)) {
        param_2 = iVar2;
        iVar7 = iVar2;
      }
      iVar5 = iVar5 + 0x1000;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  else {
    iVar6 = 2;
    iVar2 = param_2;
    do {
      uVar1 = sub_08007020(iVar2,iVar5);
      if ((((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) && ((uVar1 & 0xf) != 0xf)) &&
         ((iVar3 = sub_0800816C(iVar2,iVar5), iVar3 < 0 && (iVar3 = iVar3 + iVar2, iVar3 < iVar7))))
      {
        iVar2 = iVar3;
        iVar7 = iVar3;
      }
      iVar5 = iVar5 + 0x1000;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar4 = iVar4 + -1;
    uVar1 = sub_08007C7C(param_2,iVar4);
    if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) &&
       (((uVar1 & 0xf) != 0xf &&
        ((iVar4 = sub_0800816C(param_2,iVar4), iVar4 < 0 && (iVar4 + param_2 < iVar7)))))) {
      iVar7 = iVar4 + param_2;
    }
  }
  if (iVar7 != 0x7fffffff) {
    *(int *)(param_1 + 0x54) = iVar7 + -0x700;
  }
  return in_lr;
}

