// sub_08084934 at 0x08084934 (thumb)

undefined4 sub_08084934(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    sub_08006984(0xe);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (DAT_0202dbf0 != 0)) {
      sub_0803A584(DAT_0202dbf0,3,3);
    }
  }
  return in_lr;
}

