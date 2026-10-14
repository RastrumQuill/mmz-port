// sub_080A06A0 at 0x080A06A0 (thumb)

undefined8 sub_080A06A0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  uint local_28;
  
  iVar3 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x58);
  uVar5 = iVar3 + param_2;
  if (param_2 < 0) {
    iVar6 = uVar5 - 0xc00;
    iVar7 = 0;
    do {
      iVar4 = iVar2 + -0x1000 + iVar7 * 0x1000;
      sVar1 = sub_08007C7C(iVar6,iVar4);
      if (sVar1 != 0) {
        iVar4 = sub_08008988(iVar6,iVar4);
        if ((int)uVar5 < (int)(iVar4 + 0xc00U)) {
          uVar5 = iVar4 + 0xc00U;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  else {
    iVar6 = uVar5 + 0xc00;
    iVar7 = 0;
    do {
      iVar4 = iVar2 + -0x1000 + iVar7 * 0x1000;
      sVar1 = sub_08007C7C(iVar6,iVar4);
      if (sVar1 != 0) {
        iVar4 = sub_08008868(iVar6,iVar4);
        if ((int)(iVar4 - 0xc00U) < (int)uVar5) {
          uVar5 = iVar4 - 0xc00U;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  local_28 = param_2 + iVar3;
  *(uint *)(param_1 + 0x54) = uVar5;
  return CONCAT44(in_lr,(-(local_28 ^ uVar5) | local_28 ^ uVar5) >> 0x1f);
}

