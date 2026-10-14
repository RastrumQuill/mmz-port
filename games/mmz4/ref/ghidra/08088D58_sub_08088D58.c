// sub_08088D58 at 0x08088D58 (thumb)

undefined8 sub_08088D58(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  uVar2 = *(byte *)(param_1 + 10) >> 5 & 1;
  iVar7 = *(int *)(param_1 + 0x58) + param_2;
  iVar3 = *(int *)(param_1 + 0x54);
  iVar6 = iVar3 + -0x800;
  iVar8 = iVar7;
  if (param_2 < 0) {
    uVar2 = uVar2 + 1 & 1;
    iVar3 = iVar7 + uVar2 * -0xc00;
    iVar9 = 1;
    do {
      sVar1 = sub_08007C7C(iVar6,iVar3);
      if (sVar1 != 0) {
        iVar4 = sub_08008748(iVar6,iVar3);
        iVar4 = iVar4 + uVar2 * 0xc00;
        if (iVar8 < iVar4) {
          iVar8 = iVar4;
        }
      }
      iVar6 = iVar6 + 0x1000;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  else {
    iVar9 = iVar7 + uVar2 * 0xc00;
    iVar4 = 1;
    do {
      sVar1 = sub_08007C7C(iVar6,iVar9);
      if (sVar1 != 0) {
        iVar5 = sub_08008534(iVar6,iVar9);
        iVar5 = iVar5 + uVar2 * -0xc00;
        if (iVar5 < iVar8) {
          iVar8 = iVar5;
        }
      }
      iVar6 = iVar6 + 0x1000;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    iVar3 = iVar3 + 0x800;
    sVar1 = sub_08007C7C(iVar3,iVar9);
    if (sVar1 != 0) {
      iVar3 = sub_08008534(iVar3,iVar9);
      iVar3 = iVar3 + uVar2 * -0xc00;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
  }
  *(int *)(param_1 + 0x58) = iVar8;
  return CONCAT44(in_lr,(uint)(iVar8 != iVar7));
}

