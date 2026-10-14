// sub_080EB9D8 at 0x080EB9D8 (thumb)

undefined8 sub_080EB9D8(int param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_lr;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  uVar10 = 0;
  bVar13 = false;
  bVar12 = false;
  bVar3 = false;
  bVar11 = false;
  sub_0801CFF0();
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar6 = *(int *)(param_1 + 0x54);
    iVar9 = *(int *)(param_1 + 0x58);
    iVar8 = iVar9 + -0x800;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      sVar5 = sub_0800C66C(iVar6,iVar9 + -0x1800);
      bVar11 = sVar5 != 0;
      uVar10 = (uint)bVar11;
      sVar5 = sub_0800C66C(iVar6 + 0x1000,iVar8);
      bVar12 = sVar5 != 0;
      if (bVar12) {
        uVar10 = uVar10 + 1;
      }
      sVar5 = sub_0800C66C(iVar6,iVar9 + 0x800);
      bVar13 = sVar5 != 0;
      if (bVar13) {
        uVar10 = uVar10 + 1;
      }
      bVar3 = false;
      sVar5 = sub_0800C66C(iVar6 + -0x1000,iVar8);
      if (sVar5 != 0) {
        uVar10 = uVar10 + 1;
        bVar3 = true;
      }
    }
    if (uVar10 == 0) {
      uVar7 = 0;
      goto LAB_080ebb7a;
    }
    if ((int)(uVar10 - 1) <= (int)*(short *)(DAT_0202eda0 + 10) + (int)*(short *)(DAT_0202ed9c + 10)
       ) {
      if (bVar11) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1000;
        bVar11 = (bool)(bVar11 ^ 1);
      }
      else {
        if (bVar12) {
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1000;
          bVar2 = 0;
          bVar1 = 1;
          bVar4 = 0;
        }
        else if (bVar13) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1000;
          bVar2 = 1;
          bVar1 = 0;
          bVar4 = 0;
        }
        else {
          if (!bVar3) goto LAB_080ebb0c;
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1000;
          bVar2 = 0;
          bVar1 = 0;
          bVar4 = 1;
        }
        bVar13 = (bool)(bVar13 ^ bVar2);
        bVar12 = (bool)(bVar12 ^ bVar1);
        bVar3 = (bool)(bVar3 ^ bVar4);
      }
LAB_080ebb0c:
      if (*(char *)(param_1 + 0x10) == '\x01') {
        sub_0800C6D8(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
      }
      if (bVar11) {
        sub_080EB87C(param_1,iVar6,iVar9 + -0x1800);
      }
      if (bVar12) {
        sub_080EB87C(param_1,iVar6 + 0x1000,iVar8);
      }
      if (bVar13) {
        sub_080EB87C(param_1,iVar6,iVar9 + 0x800);
      }
      if (bVar3) {
        sub_080EB87C(param_1,iVar6 + -0x1000,iVar8);
      }
      sub_080EB97C(param_1);
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  uVar7 = 1;
LAB_080ebb7a:
  return CONCAT44(in_lr,uVar7);
}

