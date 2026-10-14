// sub_080B4838 at 0x080B4838 (thumb)

undefined8 sub_080B4838(int param_1,int param_2,short *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54) + (int)*param_3 + param_2;
  iVar4 = *(int *)(param_1 + 0x58) + (int)param_3[1];
  if (param_2 < 0) {
    iVar3 = iVar3 - (uint)((ushort)param_3[2] >> 1);
    sVar1 = sub_08008CFC(iVar3,iVar4);
    if (sVar1 == 0) {
LAB_080b48b6:
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_2;
LAB_080b48bc:
      uVar2 = 0;
      goto LAB_080b48be;
    }
    iVar3 = sub_08009774(iVar3,iVar4);
    iVar3 = iVar3 + (uint)((ushort)param_3[2] >> 1);
  }
  else {
    if (param_2 < 1) goto LAB_080b48bc;
    iVar3 = (uint)((ushort)param_3[2] >> 1) + iVar3;
    sVar1 = sub_08008CFC(iVar3,iVar4);
    if (sVar1 == 0) goto LAB_080b48b6;
    iVar3 = sub_08009684(iVar3,iVar4);
    iVar3 = iVar3 - (uint)((ushort)param_3[2] >> 1);
  }
  *(int *)(param_1 + 0x54) = iVar3 - *param_3;
  uVar2 = 1;
LAB_080b48be:
  return CONCAT44(in_lr,uVar2);
}

