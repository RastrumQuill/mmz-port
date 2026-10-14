// sub_0802934C at 0x0802934C (thumb)

undefined4 sub_0802934C(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(byte *)(iVar1 + 0x10) < 5) {
    sub_08029378(iVar1,param_1,param_2,param_3);
  }
  else {
    sub_0802937C(iVar1,param_1,param_2,param_3);
  }
  return in_lr;
}

