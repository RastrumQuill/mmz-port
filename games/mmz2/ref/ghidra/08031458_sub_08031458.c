// sub_08031458 at 0x08031458 (thumb)

undefined4 sub_08031458(undefined *param_1,undefined *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = 9;
  do {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_lr;
}

