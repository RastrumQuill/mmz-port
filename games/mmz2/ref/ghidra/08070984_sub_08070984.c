// sub_08070984 at 0x08070984 (thumb)

undefined8 sub_08070984(int param_1,short *param_2,int param_3)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_lr;
  int local_30;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = param_3 + 0xfff;
  }
  iVar8 = param_3 + (iVar3 >> 0xc) * -0x1000;
  bVar1 = false;
  iVar3 = iVar8;
  if (iVar8 < 0) {
    iVar3 = -iVar8;
  }
  iVar3 = iVar3 >> 8;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  uVar4 = iVar3 >> 4 & 0xff;
  uVar5 = (uint)((ushort)param_2[3] >> 0xc);
  uVar6 = uVar5 + 1;
  if (param_3 < 0) {
    local_30 = (int)*param_2 - (uint)((ushort)param_2[2] >> 1);
    iVar3 = (int)param_2[1] + (uint)((ushort)param_2[3] >> 1) + -0x100;
    iVar9 = local_30 + *(int *)(param_1 + 0x54);
    for (uVar12 = 1; uVar12 <= uVar4; uVar12 = uVar12 + 1 & 0xff) {
      iVar10 = iVar3 + *(int *)(param_1 + 0x58);
      iVar9 = iVar9 + -0x1000;
      uVar11 = 0;
      if (uVar5 != 0xffffffff) {
        do {
          sVar2 = sub_08008CFC(iVar9,iVar10);
          if (sVar2 != 0) {
            iVar9 = sub_08009774(iVar9,iVar10);
            bVar1 = true;
          }
          iVar10 = iVar10 + -0x1000;
          uVar11 = uVar11 + 1 & 0xff;
        } while (uVar11 < uVar6);
      }
      if (bVar1) goto LAB_08070b6c;
    }
    if (iVar8 != 0) {
      iVar3 = iVar3 + *(int *)(param_1 + 0x58);
      iVar9 = iVar9 + iVar8;
      uVar4 = 0;
      if (uVar5 != 0xffffffff) {
        do {
          sVar2 = sub_08008CFC(iVar9,iVar3);
          if (sVar2 != 0) {
            iVar9 = sub_08009774(iVar9,iVar3);
            bVar1 = true;
          }
          iVar3 = iVar3 + -0x1000;
          uVar4 = uVar4 + 1 & 0xff;
        } while (uVar4 < uVar6);
      }
    }
LAB_08070a96:
    if (bVar1) {
LAB_08070b6c:
      *(int *)(param_1 + 0x54) = iVar9 - local_30;
      uVar7 = 1;
      goto LAB_08070b84;
    }
  }
  else if (0 < param_3) {
    local_30 = (int)*param_2 + (uint)((ushort)param_2[2] >> 1) + -1;
    iVar3 = (int)param_2[1] + (uint)((ushort)param_2[3] >> 1) + -0x100;
    iVar9 = local_30 + *(int *)(param_1 + 0x54);
    for (uVar12 = 1; uVar12 <= uVar4; uVar12 = uVar12 + 1 & 0xff) {
      iVar10 = iVar3 + *(int *)(param_1 + 0x58);
      iVar9 = iVar9 + 0x1000;
      uVar11 = 0;
      if (uVar5 != 0xffffffff) {
        do {
          sVar2 = sub_08008CFC(iVar9,iVar10);
          if (sVar2 != 0) {
            iVar9 = sub_08009684(iVar9,iVar10);
            bVar1 = true;
          }
          iVar10 = iVar10 + -0x1000;
          uVar11 = uVar11 + 1 & 0xff;
        } while (uVar11 < uVar6);
      }
      if (bVar1) goto LAB_08070b6c;
    }
    if (iVar8 != 0) {
      iVar3 = iVar3 + *(int *)(param_1 + 0x58);
      iVar9 = iVar9 + iVar8;
      uVar4 = 0;
      if (uVar5 != 0xffffffff) {
        do {
          sVar2 = sub_08008CFC(iVar9,iVar3);
          if (sVar2 != 0) {
            iVar9 = sub_08009684(iVar9,iVar3);
            bVar1 = true;
          }
          iVar3 = iVar3 + -0x1000;
          uVar4 = uVar4 + 1 & 0xff;
        } while (uVar4 < uVar6);
      }
    }
    goto LAB_08070a96;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  uVar7 = 0;
LAB_08070b84:
  return CONCAT44(in_lr,uVar7);
}

