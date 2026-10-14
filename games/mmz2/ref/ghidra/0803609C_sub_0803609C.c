// sub_0803609C at 0x0803609C (thumb)

undefined4 sub_0803609C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2d4);
  iVar2 = *(int *)(param_1 + 0x2d8);
  sub_08035F88(param_1);
  *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + (*(int *)(param_1 + 0x2d4) - iVar1);
  *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + (*(int *)(param_1 + 0x2d8) - iVar2);
  return in_lr;
}

