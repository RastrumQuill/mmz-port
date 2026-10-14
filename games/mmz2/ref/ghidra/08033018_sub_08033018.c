// sub_08033018 at 0x08033018 (thumb)

undefined8 sub_08033018(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 3;
  pbVar1 = &DAT_083359ae;
  do {
    if (param_1 - (uint)*pbVar1 < (uint)pbVar1[1]) goto LAB_08033042;
    pbVar1 = pbVar1 + -2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = -1;
LAB_08033042:
  return CONCAT44(in_lr,iVar2);
}

