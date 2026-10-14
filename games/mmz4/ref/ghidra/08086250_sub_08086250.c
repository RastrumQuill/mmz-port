// sub_08086250 at 0x08086250 (thumb)

undefined4 sub_08086250(int param_1)

{
  undefined4 in_lr;
  
  if (((*(int *)(param_1 + 100) - *(int *)(DAT_0202dbf0 + 0x54)) + 0xf000U < 0x1e001) &&
     ((*(int *)(param_1 + 0x68) - *(int *)(DAT_0202dbf0 + 0x58)) + 0xc400U < 0x14001)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

