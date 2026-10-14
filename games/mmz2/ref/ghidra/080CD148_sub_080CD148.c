// sub_080CD148 at 0x080CD148 (thumb)

undefined8 sub_080CD148(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58) + -0x100;
  iVar5 = 0x7fffffff;
  uVar4 = 0;
  do {
    iVar2 = iVar1 + -0x1800 + uVar4 * 0x1000;
    if (uVar4 != 0) {
      iVar2 = iVar2 + -1;
    }
    iVar2 = sub_080093C4(iVar2,iVar3);
    if (iVar2 < iVar5) {
      iVar5 = iVar2;
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 4);
  if (iVar5 != 0x7fffffff) {
    iVar3 = iVar5;
  }
  return CONCAT44(in_lr,iVar3 + 0x100);
}

