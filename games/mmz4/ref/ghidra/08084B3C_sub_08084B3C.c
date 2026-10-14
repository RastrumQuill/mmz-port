// sub_08084B3C at 0x08084B3C (thumb)

undefined4 sub_08084B3C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = sub_0802B3CC(), iVar1 != 0)) {
    *(int *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

