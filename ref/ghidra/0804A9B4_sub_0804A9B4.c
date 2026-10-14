// sub_0804A9B4 at 0x0804A9B4 (thumb)

undefined4 sub_0804A9B4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_1 + 0x50) + *(int *)(param_2 + 0xc);
  iVar1 = sub_08008120(iVar4,iVar3);
  iVar4 = sub_08007CF8(iVar4,iVar3);
  iVar3 = iVar1;
  if (iVar1 < 0) {
    iVar3 = -iVar1;
  }
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = -iVar4;
  }
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
  }
  return in_lr;
}

