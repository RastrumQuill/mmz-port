// sub_08087930 at 0x08087930 (thumb)

undefined4 sub_08087930(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(iVar3 + 0xb4) & 0x200) == 0) {
    iVar1 = *(int *)(iVar3 + 0x54) + -0x3000;
    *(int *)(param_1 + 0x54) = iVar1;
    iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0xb4) * 0x6000;
    *(int *)(param_1 + 0x54) = iVar1;
    psVar2 = (short *)(param_1 + 0xb6);
    *(int *)(param_1 + 0x54) = iVar1 + *psVar2;
    iVar1 = *(int *)(param_1 + 100) - (int)*psVar2;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    *psVar2 = (short)(iVar1 >> 3) + *psVar2;
    iVar3 = *(int *)(iVar3 + 0x58) + -0x2c00;
    *(int *)(param_1 + 0x58) = iVar3;
    iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0xb5) * 0x5000;
    *(int *)(param_1 + 0x58) = iVar3;
    psVar2 = (short *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x58) = iVar3 + *psVar2;
    iVar3 = *(int *)(param_1 + 0x68) - (int)*psVar2;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    *psVar2 = (short)(iVar3 >> 3) + *psVar2;
  }
  return in_lr;
}

