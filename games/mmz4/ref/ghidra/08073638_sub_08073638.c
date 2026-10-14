// sub_08073638 at 0x08073638 (thumb)

undefined8 sub_08073638(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x58);
  iVar5 = iVar4 + -0xa00;
  iVar7 = 0;
  iVar6 = iVar2 + -0x1c00;
  do {
    sVar1 = sub_08007C7C(iVar5,iVar6,iVar4,iVar2 + -0xe00,iVar4);
    if (sVar1 != 0) goto LAB_08073694;
    iVar6 = iVar6 + 0x1000;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  sVar1 = sub_08007C7C(iVar5,iVar2);
  if (sVar1 == 0) {
    uVar3 = 0;
  }
  else {
LAB_08073694:
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

