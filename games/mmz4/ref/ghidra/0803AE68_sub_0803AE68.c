// sub_0803AE68 at 0x0803AE68 (thumb)

undefined8 sub_0803AE68(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0x58);
    iVar2 = -0xa00;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0x58);
    iVar2 = 0xa00;
  }
  param_2[1] = iVar1 + iVar2;
  return CONCAT44(in_lr,1);
}

