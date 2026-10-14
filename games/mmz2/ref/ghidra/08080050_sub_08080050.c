// sub_08080050 at 0x08080050 (thumb)

undefined4 sub_08080050(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0202e130;
  *param_2 = *(undefined4 *)(DAT_0202e130 + 0x54);
  param_2[1] = *(int *)(iVar1 + 0x58) + -0x1000;
  if ((0x10000 < (*(int *)(iVar1 + 0x54) - *(int *)(param_1 + 0x54)) + 0x8000U) ||
     (0x10000 < (*(int *)(iVar1 + 0x58) - *(int *)(param_1 + 0x58)) + 0x8000U)) {
    param_2[1] = *(undefined4 *)(param_1 + 0x58);
  }
  return in_lr;
}

