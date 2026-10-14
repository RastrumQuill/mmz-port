// sub_080B4A70 at 0x080B4A70 (thumb)

undefined4 sub_080B4A70(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    sub_08006984(0x37);
    if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
    {
      *(undefined *)(iVar1 + 0xb4) = 1;
      if (DAT_0202dbf0 != 0) {
        sub_0803A584(DAT_0202dbf0,6,0xb);
      }
    }
    *(undefined *)(iVar1 + 0xd) = 5;
    *(undefined *)(iVar1 + 0xe) = 0;
  }
  return in_lr;
}

