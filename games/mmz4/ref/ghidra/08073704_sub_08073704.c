// sub_08073704 at 0x08073704 (thumb)

undefined8 sub_08073704(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54);
  iVar4 = *(int *)(param_1 + 0x58) + -0x1c00;
  iVar6 = 0;
  iVar5 = iVar3 + -0xa00;
  do {
    sVar1 = sub_08007C7C(iVar5,iVar4);
    if (sVar1 != 0) goto LAB_08073760;
    iVar5 = iVar5 + 0x1000;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  sVar1 = sub_08007C7C(iVar3 + 0xa00,iVar4);
  if (sVar1 == 0) {
    uVar2 = 0;
  }
  else {
LAB_08073760:
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

