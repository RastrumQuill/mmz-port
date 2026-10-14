// sub_080AF198 at 0x080AF198 (thumb)

undefined4 sub_080AF198(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 4) == 0) {
    *(undefined *)(iVar1 + 0xd) = 2;
    *(undefined *)(iVar1 + 0xe) = 0;
    sub_08006984(0x16);
    if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
      *(undefined *)(iVar1 + 0xd) = 0;
      if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)
         ) {
        *(undefined *)(iVar1 + 0xb4) = 1;
        if (DAT_0202dbf0 != 0) {
          sub_0803A584(DAT_0202dbf0,5,8);
        }
      }
    }
  }
  return in_lr;
}

