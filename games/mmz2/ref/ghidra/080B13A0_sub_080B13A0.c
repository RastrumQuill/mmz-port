// sub_080B13A0 at 0x080B13A0 (thumb)

undefined8 sub_080B13A0(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  iVar2 = *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x54) + iVar2;
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  if (iVar2 < 0) {
    iVar3 = iVar3 + param_2 * -0x100;
    sVar1 = sub_08008CFC(iVar3,uVar4);
    if (sVar1 == 0) {
LAB_080b13fa:
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
LAB_080b1402:
      uVar4 = 0;
      goto LAB_080b1404;
    }
    iVar2 = sub_08009774(iVar3,uVar4);
    iVar2 = iVar2 + param_2 * 0x100;
  }
  else {
    if (iVar2 < 1) goto LAB_080b1402;
    iVar3 = param_2 * 0x100 + iVar3;
    sVar1 = sub_08008CFC(iVar3,uVar4);
    if (sVar1 == 0) goto LAB_080b13fa;
    iVar2 = sub_08009684(iVar3,uVar4);
    iVar2 = iVar2 + param_2 * -0x100;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  uVar4 = 1;
LAB_080b1404:
  return CONCAT44(in_lr,uVar4);
}

