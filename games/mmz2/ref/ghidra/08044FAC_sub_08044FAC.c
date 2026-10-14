// sub_08044FAC at 0x08044FAC (thumb)

undefined8 sub_08044FAC(int param_1,uint param_2)

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
LAB_08044fe0:
      *(int *)(param_1 + 0x54) = iVar2;
LAB_08045028:
      uVar3 = 1;
      goto LAB_0804502a;
    }
  }
  else if (*(int *)(param_1 + 0x5c) < 1) {
    sVar1 = sub_08008CFC(iVar2 - param_2,uVar3);
    if ((sVar1 != 0) || (sVar1 = sub_08008CFC(param_2 + iVar2,uVar3), sVar1 != 0))
    goto LAB_08045028;
  }
  else {
    sVar1 = sub_08008CFC(param_2 + iVar2,uVar3);
    if (sVar1 != 0) {
      iVar2 = sub_08009684(param_2 + iVar2,uVar3);
      iVar2 = iVar2 - param_2;
      goto LAB_08044fe0;
    }
  }
  uVar3 = 0;
LAB_0804502a:
  return CONCAT44(in_lr,uVar3);
}

