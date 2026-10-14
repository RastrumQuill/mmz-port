// sub_080B47A8 at 0x080B47A8 (thumb)

undefined8 sub_080B47A8(int param_1,int param_2,short *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54) + (int)*param_3;
  iVar3 = *(int *)(param_1 + 0x58) + (int)param_3[1] + param_2;
  if (param_2 < 0) {
    iVar3 = iVar3 - (uint)((ushort)param_3[3] >> 1);
    sVar1 = sub_08008CFC(iVar4,iVar3);
    if (sVar1 == 0) {
LAB_080b4824:
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_2;
LAB_080b482a:
      uVar2 = 0;
      goto LAB_080b482c;
    }
    iVar3 = sub_0800958C(iVar4,iVar3);
    iVar3 = iVar3 + (uint)((ushort)param_3[3] >> 1);
  }
  else {
    if (param_2 < 1) goto LAB_080b482a;
    iVar3 = (uint)((ushort)param_3[3] >> 1) + iVar3;
    sVar1 = sub_08008CFC(iVar4,iVar3);
    if (sVar1 == 0) goto LAB_080b4824;
    iVar3 = sub_080093C4(iVar4,iVar3);
    iVar3 = iVar3 - (uint)((ushort)param_3[3] >> 1);
  }
  *(int *)(param_1 + 0x58) = iVar3 - param_3[1];
  uVar2 = 1;
LAB_080b482c:
  return CONCAT44(in_lr,uVar2);
}

