// sub_080DAB44 at 0x080DAB44 (thumb)

undefined4 sub_080DAB44(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080DABF4();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(iVar1 + 8);
  return in_lr;
}

