// sub_080738E8 at 0x080738E8 (thumb)

undefined4 sub_080738E8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar5 = -0x80000000;
  iVar6 = *(int *)(param_1 + 0x58) + -0x1c00;
  iVar3 = iVar1 + -0xa00;
  iVar4 = 1;
  do {
    iVar2 = sub_08008748(iVar3,iVar6);
    if (iVar5 < iVar2 + 0xe00) {
      iVar5 = iVar2 + 0xe00;
    }
    iVar3 = iVar3 + 0x1000;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  iVar1 = sub_08008748(iVar1 + 0xa00,iVar6);
  if (iVar5 < iVar1 + 0xe00) {
    iVar5 = iVar1 + 0xe00;
  }
  *(int *)(param_1 + 0x58) = iVar5 + 0xe00;
  return in_lr;
}

