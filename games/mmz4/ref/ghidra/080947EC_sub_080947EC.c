// sub_080947EC at 0x080947EC (thumb)

undefined4 sub_080947EC(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar2 = sub_08094C68(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x58) + 0x800;
    iVar4 = *(int *)(param_1 + 0x54);
    iVar5 = iVar4 + -0x700;
    iVar3 = 0x7fffffff;
    iVar8 = 0;
    do {
      sVar1 = sub_08007C7C(iVar5,iVar2);
      if ((((sVar1 != 0) && (uVar6 = sub_08007C7C(iVar5,iVar2), (uVar6 & 0xf) != 0xf)) &&
          (iVar7 = sub_08007DB4(iVar5,iVar2), iVar7 < 0)) && (iVar7 = iVar7 + iVar2, iVar7 < iVar3))
      {
        iVar2 = iVar7;
        iVar3 = iVar7;
      }
      iVar5 = iVar5 + 0x1000;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    iVar4 = iVar4 + 0x700;
    sVar1 = sub_08007C7C(iVar4,iVar2);
    if (((sVar1 != 0) && (uVar6 = sub_08007C7C(iVar4,iVar2), (uVar6 & 0xf) != 0xf)) &&
       ((iVar4 = sub_08007DB4(iVar4,iVar2), iVar4 < 0 && (iVar4 + iVar2 < iVar3)))) {
      iVar3 = iVar4 + iVar2;
    }
    if (iVar3 == 0x7fffffff) {
      return in_lr;
    }
  }
  else {
    iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  *(int *)(param_1 + 0x58) = iVar3;
  return in_lr;
}

