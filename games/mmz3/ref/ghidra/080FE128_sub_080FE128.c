// sub_080FE128 at 0x080FE128 (thumb)

undefined4 sub_080FE128(undefined *param_1,undefined *param_2,int param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = param_3 + -1;
  if (param_3 != 0) {
    do {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return in_lr;
}

