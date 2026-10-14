// sub_0802233C at 0x0802233C (thumb)

undefined4 sub_0802233C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x154);
  if ((iVar1 != 0) && (1 < *(byte *)(iVar1 + 0xc))) {
    *(int *)(param_1 + 0x154) = 0;
  }
  return in_lr;
}

