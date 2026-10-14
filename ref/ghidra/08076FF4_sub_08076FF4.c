// sub_08076FF4 at 0x08076FF4 (thumb)

undefined4 sub_08076FF4(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined4 in_lr;
  
  uVar6 = (uint)*(byte *)(param_1 + 0x1f);
  iVar7 = *(int *)(param_1 + 0x4c);
  iVar8 = *(int *)(param_1 + 0x50);
  sVar1 = (&DAT_080c8e24)[uVar6 + 0x40];
  sVar2 = (&DAT_080c8e24)[uVar6];
  iVar3 = sub_08008BC0(iVar7,iVar8);
  bVar9 = false;
  if (uVar6 == 0x80) {
    iVar3 = sub_080089EC(iVar7,iVar8);
  }
  if (uVar6 < 0x81) {
    iVar4 = sub_0800869C(iVar7,iVar8);
    while ((iVar3 < iVar7 && (iVar4 < iVar8))) {
      iVar7 = iVar7 + sVar1 * -0x10;
      iVar8 = iVar8 + sVar2 * -0x10;
      if (bVar9) {
        sub_08076F40(iVar7,iVar8);
      }
      bVar9 = (bool)(bVar9 ^ 1);
    }
    uVar5 = 0x80;
  }
  else {
    iVar4 = sub_08008360(iVar7 + -0x3000,iVar8);
    while ((iVar3 < iVar7 && (iVar8 < iVar4))) {
      iVar7 = iVar7 + sVar1 * -0x10;
      iVar8 = iVar8 + sVar2 * -0x10;
      if (bVar9) {
        sub_08076F40(iVar7,iVar8);
      }
      bVar9 = (bool)(bVar9 ^ 1);
    }
    uVar5 = 0;
  }
  if (iVar7 <= iVar3) {
    uVar5 = 0x40;
    iVar7 = iVar3;
    iVar4 = iVar8;
  }
  sub_08076F40(iVar7,iVar4);
  sub_08089780(uVar5,iVar7,iVar4);
  return in_lr;
}

