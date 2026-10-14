// sub_0809323C at 0x0809323C (thumb)

undefined4 sub_0809323C(int param_1)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  uVar8 = bVar1 & 1;
  bVar2 = false;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885d058);
    sub_0801CF00(param_1,0x4003);
    iVar5 = uVar8 * 2 + -1;
    *(int *)(param_1 + 100) = iVar5;
    *(int *)(param_1 + 0x5c) = iVar5 * 0x200;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_080947EC(param_1);
  iVar5 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54);
  if ((0x8000 < (*(int *)(param_1 + 0xb4) - iVar5) + 0x4000U) &&
     (uVar8 == *(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54))) {
    bVar2 = true;
  }
  iVar6 = *(int *)(param_1 + 100) * 0x700 + iVar5;
  uVar8 = *(int *)(param_1 + 0x58) + 0x7ff;
  sVar3 = sub_08007C7C(iVar6,uVar8);
  if ((sVar3 == 0) || (uVar7 = sub_08007C7C(iVar6,uVar8), (uVar7 & 0xf) == 0xf)) {
    iVar9 = (uVar8 & 0xfffff000) + 0xfff;
    uVar4 = sub_08007020(iVar6,iVar9);
    if (0xb < (ushort)((uVar4 & 0xf) - 2)) {
      sVar3 = sub_08007C7C(iVar6 + -0x3ff,iVar9);
      if ((sVar3 != 0) && (uVar8 = sub_08007C7C(iVar6 + -0x3ff,iVar9), (uVar8 & 0xf) != 0xf)) {
        sVar3 = sub_08007C7C(iVar6 + 0x3ff,iVar9);
        if ((sVar3 != 0) && (uVar8 = sub_08007C7C(iVar6 + 0x3ff,iVar9), (uVar8 & 0xf) != 0xf))
        goto LAB_08093366;
      }
      bVar2 = true;
    }
  }
LAB_08093366:
  if ((bVar1 & 1) == 0) {
    iVar6 = sub_080945E0(param_1,iVar5);
    if (iVar6 != 0) goto LAB_080933ae;
  }
  else {
    iVar6 = sub_080946E8(param_1,iVar5);
    if (iVar6 != 0) {
      bVar2 = true;
    }
  }
  if (!bVar2) {
    *(int *)(param_1 + 0x54) = iVar5;
    sub_080947EC(param_1);
    return in_lr;
  }
LAB_080933ae:
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

