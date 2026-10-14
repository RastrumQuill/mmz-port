// sub_0809D98C at 0x0809D98C (thumb)

undefined4 sub_0809D98C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    sub_08006984(0x3a);
    if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
    {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xbe) = 1;
      if (DAT_0202dbf0 != 0) {
        sub_0803A584(DAT_0202dbf0,3,0xd);
      }
    }
  }
  return in_lr;
}

