// sub_08091F4C at 0x08091F4C (thumb)

undefined4 sub_08091F4C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    if ((DAT_02000a70 & 0x10) == 0) {
      sub_08006984(4);
    }
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (DAT_0202dbf0 != 0)) {
      sub_0803A584(DAT_0202dbf0,6,3);
    }
  }
  return in_lr;
}

