// sub_080737D0 at 0x080737D0 (thumb)

undefined4 sub_080737D0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58);
  iVar6 = -0x80000000;
  iVar7 = iVar1 + -0xa00;
  iVar4 = iVar3 + -0x1c00;
  iVar5 = 1;
  do {
    iVar2 = sub_08008988(iVar7,iVar4,iVar4,iVar5,iVar1);
    if (iVar6 < iVar2 + 0xa00) {
      iVar6 = iVar2 + 0xa00;
    }
    iVar4 = iVar4 + 0x1000;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar1 = sub_08008988(iVar7,iVar3,iVar3 + -0xe00,iVar5,iVar1);
  if (iVar6 < iVar1 + 0xa00) {
    iVar6 = iVar1 + 0xa00;
  }
  *(int *)(param_1 + 0x54) = iVar6;
  return in_lr;
}

