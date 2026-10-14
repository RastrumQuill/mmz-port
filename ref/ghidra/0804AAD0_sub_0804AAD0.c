// sub_0804AAD0 at 0x0804AAD0 (thumb)

undefined4 sub_0804AAD0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_2 + 0x18);
  iVar3 = *(int *)(param_1 + 0x50) + *(int *)(param_2 + 0x1c);
  iVar1 = sub_08007EE0(iVar4,iVar3);
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

