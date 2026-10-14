// sub_080820F0 at 0x080820F0 (thumb)

undefined4 sub_080820F0(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0xb4);
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 != 0) {
    iVar5 = (uint)*pbVar2 * param_3;
    iVar4 = (uint)*pbVar2 * param_2;
    do {
      iVar1 = FUN_080fe2f8(iVar4,*pbVar2);
      *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) + iVar1;
      iVar1 = FUN_080fe2f8(iVar5,*pbVar2);
      *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + iVar1;
      iVar5 = iVar5 - param_3;
      iVar4 = iVar4 - param_2;
      iVar3 = *(int *)(iVar3 + 0x2c);
    } while (iVar3 != 0);
  }
  return in_lr;
}

