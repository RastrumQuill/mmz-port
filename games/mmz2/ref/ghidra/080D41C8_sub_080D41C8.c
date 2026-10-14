// sub_080D41C8 at 0x080D41C8 (thumb)

undefined8 sub_080D41C8(int param_1)

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
  
  sub_080128D4();
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar5 = *(int *)(param_1 + 0x54);
    iVar9 = *(int *)(param_1 + 0x58);
    iVar8 = iVar9 + -0x800;
    if (*(char *)(param_1 + 0x10) == '\0') {
      sVar4 = sub_0800BB24(iVar5,iVar9 + -0x1800);
      bVar10 = sVar4 != 0;
      uVar6 = (uint)bVar10;
      sVar4 = sub_0800BB24(iVar5 + 0x1000,iVar8);
      bVar11 = sVar4 != 0;
      if (bVar11) {
        uVar6 = uVar6 + 1;
      }
      sVar4 = sub_0800BB24(iVar5,iVar9 + 0x800);
      bVar12 = sVar4 != 0;
      if (bVar12) {
        uVar6 = uVar6 + 1;
      }
      sVar4 = sub_0800BB24(iVar5 + -0x1000,iVar8);
    }
    else if (*(char *)(param_1 + 0x10) == '\x01') {
      sVar4 = sub_0800E964(iVar5,iVar9 + -0x1800);
      bVar10 = sVar4 != 0;
      uVar6 = (uint)bVar10;
      sVar4 = sub_0800E964(iVar5 + 0x1000,iVar8);
      bVar11 = sVar4 != 0;
      if (bVar11) {
        uVar6 = uVar6 + 1;
      }
      sVar4 = sub_0800E964(iVar5,iVar9 + 0x800);
      bVar12 = sVar4 != 0;
      if (bVar12) {
        uVar6 = uVar6 + 1;
      }
      sVar4 = sub_0800E964(iVar5 + -0x1000,iVar8);
    }
    else {
      sVar4 = sub_08011768(iVar5,iVar9 + -0x1800);
      bVar10 = sVar4 != 0;
      uVar6 = (uint)bVar10;
      sVar4 = sub_08011768(iVar5 + 0x1000,iVar8);
      bVar11 = sVar4 != 0;
      if (bVar11) {
        uVar6 = uVar6 + 1;
      }
      sVar4 = sub_08011768(iVar5,iVar9 + 0x800);
      bVar12 = sVar4 != 0;
      if (bVar12) {
        uVar6 = uVar6 + 1;
      }
      sVar4 = sub_08011768(iVar5 + -0x1000,iVar8);
    }
    bVar13 = sVar4 != 0;
    if (bVar13) {
      uVar6 = uVar6 + 1;
    }
    if (uVar6 == 0) {
      uVar7 = 0;
      goto LAB_080d4464;
    }
    if ((int)(uVar6 - 1) <= (int)*(short *)(DAT_0202f088 + 10) + (int)*(short *)(DAT_0202f084 + 10))
    {
      if (bVar10) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1000;
        bVar10 = (bool)(bVar10 ^ 1);
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
          if (!bVar13) goto LAB_080d43c8;
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1000;
          bVar2 = 0;
          bVar1 = 0;
          bVar3 = 1;
        }
        bVar12 = (bool)(bVar12 ^ bVar2);
        bVar11 = (bool)(bVar11 ^ bVar1);
        bVar13 = (bool)(bVar13 ^ bVar3);
      }
LAB_080d43c8:
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_0800BB78(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
      }
      else if (*(char *)(param_1 + 0x10) == '\x01') {
        sub_0800E9AC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
      }
      else {
        sub_080117C4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
      }
      if (bVar10) {
        sub_080D4028(param_1,iVar5,iVar9 + -0x1800);
      }
      if (bVar11) {
        sub_080D4028(param_1,iVar5 + 0x1000,iVar8);
      }
      if (bVar12) {
        sub_080D4028(param_1,iVar5,iVar9 + 0x800);
      }
      if (bVar13) {
        sub_080D4028(param_1,iVar5 + -0x1000,iVar8);
      }
      sub_080D4138(param_1);
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  uVar7 = 1;
LAB_080d4464:
  return CONCAT44(in_lr,uVar7);
}

