// sub_080AF870 at 0x080AF870 (thumb)

undefined8 sub_080AF870(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *param_3;
  iVar2 = *param_2 + iVar4;
  *param_2 = iVar2;
  param_2[1] = param_2[1] + param_3[1];
  uVar3 = (iVar2 + -0x2600) - *(int *)(param_1 + 0xd4);
  if ((*(int *)(param_1 + 0xdc) - 0x4c00U < uVar3) && (0 < (int)(iVar4 * uVar3))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

