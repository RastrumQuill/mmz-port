// sub_08070C00 at 0x08070C00 (thumb)

undefined4 sub_08070C00(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 0x40) == 0) {
    if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
      *(bool *)(iVar4 + 0x13) = *(int *)(iVar4 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    }
  }
  else if (*(int *)(iVar4 + 0x54) < *(int *)(DAT_0202e130 + 0x54) ==
           (bool)(*(byte *)(iVar4 + 10) >> 4 & 1)) {
    iVar3 = *(int *)(iVar4 + 0x54) + *(int *)(iVar4 + 0x68);
    *(int *)(iVar4 + 0x54) = iVar3;
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      iVar2 = 0x1400;
    }
    else {
      iVar2 = -0x1400;
    }
    iVar3 = iVar3 + iVar2;
    iVar2 = *(int *)(iVar4 + 0x58) + -0x800;
    sVar1 = sub_08008CFC(iVar3,iVar2);
    if (sVar1 != 0) {
      if (*(int *)(iVar4 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
        iVar3 = sub_08009774(iVar3,iVar2);
        iVar2 = 0x1400;
      }
      else {
        iVar3 = sub_08009684(iVar3,iVar2);
        iVar2 = -0x1400;
      }
      *(int *)(iVar4 + 0x54) = iVar3 + iVar2;
    }
  }
  return in_lr;
}

