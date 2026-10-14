// sub_0804A968 at 0x0804A968 (thumb)

undefined4 sub_0804A968(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x4c) + *param_2;
  iVar3 = *(int *)(param_1 + 0x50) + param_2[1];
  iVar1 = sub_08008120(iVar4,iVar3);
  iVar4 = sub_08007B30(iVar4,iVar3);
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

