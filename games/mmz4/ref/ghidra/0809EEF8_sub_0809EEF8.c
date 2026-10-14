// sub_0809EEF8 at 0x0809EEF8 (thumb)

undefined4 sub_0809EEF8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    sub_08006984(0x10);
    if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
    {
      *(undefined *)(iVar1 + 0xb9) = 1;
      if (DAT_0202dbf0 != 0) {
        sub_0803A584(DAT_0202dbf0,3,0xe);
      }
    }
  }
  return in_lr;
}

