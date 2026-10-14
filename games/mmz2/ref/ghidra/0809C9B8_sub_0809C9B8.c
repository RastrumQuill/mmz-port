// sub_0809C9B8 at 0x0809C9B8 (thumb)

undefined8 sub_0809C9B8(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xffff;
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x58);
  if (*(int *)(param_1 + 0x60) < 1) {
    if (*(int *)(param_1 + 0x60) < 0) {
      sVar1 = sub_08008CFC(uVar3,iVar2 - param_2);
      if (sVar1 != 0) {
        iVar2 = sub_0800958C(uVar3,iVar2 - param_2);
        iVar2 = iVar2 + param_2;
        goto LAB_0809c9ec;
      }
    }
    else {
      sVar1 = sub_08008CFC(uVar3,iVar2 - param_2);
      if ((sVar1 != 0) || (sVar1 = sub_08008CFC(uVar3,param_2 + iVar2), sVar1 != 0))
      goto LAB_0809ca34;
    }
  }
  else {
    sVar1 = sub_08008CFC(uVar3,param_2 + iVar2);
    if (sVar1 != 0) {
      iVar2 = sub_080093C4(uVar3,param_2 + iVar2);
      iVar2 = iVar2 - param_2;
LAB_0809c9ec:
      *(int *)(param_1 + 0x58) = iVar2;
LAB_0809ca34:
      uVar3 = 1;
      goto LAB_0809ca36;
    }
  }
  uVar3 = 0;
LAB_0809ca36:
  return CONCAT44(in_lr,uVar3);
}

