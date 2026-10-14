// sub_080CAFDC at 0x080CAFDC (thumb)

undefined8 sub_080CAFDC(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  sub_080177F4();
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar5 = *(int *)(param_1 + 0x54);
    iVar9 = *(int *)(param_1 + 0x58);
    iVar8 = iVar9 + -0x800;
    if (*(char *)(param_1 + 0x10) == '\0') {
      sVar4 = sub_0800E41C(iVar5,iVar9 + -0x1800);
      bVar10 = sVar4 == 0;
      uVar6 = (uint)!bVar10;
      sVar4 = sub_0800E41C(iVar5 + 0x1000,iVar8);
      bVar11 = sVar4 == 0;
      if (!bVar11) {
        uVar6 = uVar6 + 1;
      }
      sVar4 = sub_0800E41C(iVar5,iVar9 + 0x800);
      bVar12 = sVar4 == 0;
      if (!bVar12) {
        uVar6 = uVar6 + 1;
      }
      sVar4 = sub_0800E41C(iVar5 + -0x1000,iVar8);
    }
    else {
      sVar4 = sub_08010E68(iVar5,iVar9 + -0x1800);
      bVar10 = sVar4 == 0;
      uVar6 = (uint)!bVar10;
      sVar4 = sub_08010E68(iVar5 + 0x1000,iVar8);
      bVar11 = sVar4 == 0;
      if (!bVar11) {
        uVar6 = uVar6 + 1;
      }
      sVar4 = sub_08010E68(iVar5,iVar9 + 0x800);
      bVar12 = sVar4 == 0;
      if (!bVar12) {
        uVar6 = uVar6 + 1;
      }
      sVar4 = sub_08010E68(iVar5 + -0x1000,iVar8);
    }
    bVar10 = !bVar10;
    bVar11 = !bVar11;
    bVar12 = !bVar12;
    bVar13 = sVar4 != 0;
    if (bVar13) {
      uVar6 = uVar6 + 1;
    }
    if (uVar6 == 0) {
      uVar7 = 0;
      goto LAB_080cb1f8;
    }
    if ((int)(uVar6 - 1) <= (int)*(short *)(DAT_02030630 + 10) + (int)*(short *)(DAT_0203062c + 10))
    {
      if (bVar10) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1000;
        bVar10 = !bVar10;
      }
      else {
        if (bVar11) {
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1000;
          bVar2 = 0;
          bVar1 = 1;
          bVar3 = 0;
        }
        else if (bVar12) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1000;
          bVar2 = 1;
          bVar1 = 0;
          bVar3 = 0;
        }
        else {
          if (!bVar13) goto LAB_080cb174;
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1000;
          bVar2 = 0;
          bVar1 = 0;
          bVar3 = 1;
        }
        bVar12 = (bool)(bVar12 ^ bVar2);
        bVar11 = (bool)(bVar11 ^ bVar1);
        bVar13 = (bool)(bVar13 ^ bVar3);
      }
LAB_080cb174:
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_0800E45C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
      }
      else {
        sub_08010EB8(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
      }
      if (bVar10) {
        sub_080CAE6C(param_1,iVar5,iVar9 + -0x1800);
      }
      if (bVar11) {
        sub_080CAE6C(param_1,iVar5 + 0x1000,iVar8);
      }
      if (bVar12) {
        sub_080CAE6C(param_1,iVar5,iVar9 + 0x800);
      }
      if (bVar13) {
        sub_080CAE6C(param_1,iVar5 + -0x1000,iVar8);
      }
      sub_080CAF74(param_1);
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  uVar7 = 1;
LAB_080cb1f8:
  return CONCAT44(in_lr,uVar7);
}

