// sub_080CD0D8 at 0x080CD0D8 (thumb)

undefined8 sub_080CD0D8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x54) + 0x17ff;
  iVar6 = 0x7fffffff;
  uVar5 = 0;
  do {
    iVar4 = iVar2 + -0x3100 + uVar5 * 0x1000;
    if (uVar5 != 0) {
      iVar4 = iVar4 + -1;
    }
    sVar1 = sub_08008CFC(iVar3,iVar4);
    if (((sVar1 != 0) && (iVar4 = sub_08009684(iVar3,iVar4), iVar4 <= iVar3)) && (iVar4 < iVar6)) {
      iVar6 = iVar4;
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 4);
  if (iVar6 != 0x7fffffff) {
    iVar3 = iVar6;
  }
  return CONCAT44(in_lr,iVar3);
}

