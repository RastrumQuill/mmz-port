// sub_0809CA44 at 0x0809CA44 (thumb)

undefined8 sub_0809CA44(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xffff;
  iVar2 = *(int *)(param_1 + 0x54);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x5c) < 0) {
    sVar1 = sub_08008CFC(iVar2 - param_2,uVar3);
    if (sVar1 != 0) {
      iVar2 = sub_08009774(iVar2 - param_2,uVar3);
      iVar2 = iVar2 + param_2;
LAB_0809ca78:
      *(int *)(param_1 + 0x54) = iVar2;
LAB_0809cac0:
      uVar3 = 1;
      goto LAB_0809cac2;
    }
  }
  else if (*(int *)(param_1 + 0x5c) < 1) {
    sVar1 = sub_08008CFC(iVar2 - param_2,uVar3);
    if ((sVar1 != 0) || (sVar1 = sub_08008CFC(param_2 + iVar2,uVar3), sVar1 != 0))
    goto LAB_0809cac0;
  }
  else {
    sVar1 = sub_08008CFC(param_2 + iVar2,uVar3);
    if (sVar1 != 0) {
      iVar2 = sub_08009684(param_2 + iVar2,uVar3);
      iVar2 = iVar2 - param_2;
      goto LAB_0809ca78;
    }
  }
  uVar3 = 0;
LAB_0809cac2:
  return CONCAT44(in_lr,uVar3);
}

