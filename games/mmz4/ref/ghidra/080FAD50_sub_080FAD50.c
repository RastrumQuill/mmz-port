// sub_080FAD50 at 0x080FAD50 (thumb)

undefined4 sub_080FAD50(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    sub_08006984(0x12);
    if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
    {
      *(undefined *)(iVar1 + 0xb5) = 1;
      if (DAT_0202dbf0 != 0) {
        sub_0803A584(DAT_0202dbf0,7,1);
      }
    }
  }
  return in_lr;
}

