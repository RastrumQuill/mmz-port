// sub_080891BC at 0x080891BC (thumb)

undefined4 sub_080891BC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_2 + 0x10);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_2 + 0x14);
  iVar1 = sub_080090D4(iVar4,iVar3);
  iVar4 = sub_08008F50(iVar4,iVar3);
  iVar3 = iVar1;
  if (iVar1 < 0) {
    iVar3 = -iVar1;
  }
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = -iVar4;
  }
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
  }
  return in_lr;
}

