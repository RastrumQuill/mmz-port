// sub_08044F20 at 0x08044F20 (thumb)

undefined8 sub_08044F20(int param_1,uint param_2)

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
        goto LAB_08044f54;
      }
    }
    else {
      sVar1 = sub_08008CFC(uVar3,iVar2 - param_2);
      if ((sVar1 != 0) || (sVar1 = sub_08008CFC(uVar3,param_2 + iVar2), sVar1 != 0))
      goto LAB_08044f9c;
    }
  }
  else {
    sVar1 = sub_08008CFC(uVar3,param_2 + iVar2);
    if (sVar1 != 0) {
      iVar2 = sub_080093C4(uVar3,param_2 + iVar2);
      iVar2 = iVar2 - param_2;
LAB_08044f54:
      *(int *)(param_1 + 0x58) = iVar2;
LAB_08044f9c:
      uVar3 = 1;
      goto LAB_08044f9e;
    }
  }
  uVar3 = 0;
LAB_08044f9e:
  return CONCAT44(in_lr,uVar3);
}

