// sub_080A0784 at 0x080A0784 (thumb)

undefined8 sub_080A0784(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  uint local_28;
  
  iVar4 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x58);
  iVar6 = iVar2 + -0x800;
  uVar7 = iVar6 + param_2;
  if (param_2 < 0) {
    iVar8 = uVar7 - 0x800;
    iVar9 = 0;
    do {
      iVar5 = iVar4 + -0xc00 + iVar9 * 0x1000;
      sVar1 = sub_08007C7C(iVar5,iVar8);
      if (sVar1 != 0) {
        iVar5 = sub_08008748(iVar5,iVar8);
        if ((int)uVar7 < (int)(iVar5 + 0x800U)) {
          uVar7 = iVar5 + 0x800U;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
    sVar1 = sub_08007C7C(iVar4 + 0xc00,iVar8);
    if (sVar1 == 0) goto LAB_080a089a;
    iVar4 = sub_08008748(iVar4 + 0xc00,iVar8);
    uVar3 = iVar4 + 0x800;
    if ((int)uVar3 <= (int)uVar7) goto LAB_080a089a;
  }
  else {
    iVar8 = uVar7 + 0x800;
    iVar9 = 0;
    do {
      iVar5 = iVar4 + -0xc00 + iVar9 * 0x1000;
      sVar1 = sub_08007C7C(iVar5,iVar8);
      if (sVar1 != 0) {
        iVar5 = sub_08008534(iVar5,iVar8);
        if ((int)(iVar5 - 0x800U) < (int)uVar7) {
          uVar7 = iVar5 - 0x800U;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
    sVar1 = sub_08007C7C(iVar4 + 0xc00,iVar8);
    if (sVar1 == 0) goto LAB_080a089a;
    iVar4 = sub_08008534(iVar4 + 0xc00,iVar8);
    uVar3 = iVar4 - 0x800;
    if ((int)uVar7 <= (int)uVar3) goto LAB_080a089a;
  }
  uVar7 = uVar3;
LAB_080a089a:
  local_28 = param_2 + iVar6;
  *(uint *)(param_1 + 0x58) = uVar7 + (iVar2 - iVar6);
  return CONCAT44(in_lr,(-(local_28 ^ uVar7) | local_28 ^ uVar7) >> 0x1f);
}

