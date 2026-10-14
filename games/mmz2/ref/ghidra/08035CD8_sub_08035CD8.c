// sub_08035CD8 at 0x08035CD8 (thumb)

undefined8 sub_08035CD8(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  pbVar1 = &DAT_08335cd8;
  do {
    if (param_1 - (uint)*pbVar1 < (uint)pbVar1[1]) goto LAB_08035cfe;
    pbVar1 = pbVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  iVar2 = -1;
LAB_08035cfe:
  return CONCAT44(in_lr,iVar2);
}

