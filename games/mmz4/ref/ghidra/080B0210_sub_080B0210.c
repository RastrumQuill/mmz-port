// sub_080B0210 at 0x080B0210 (thumb)

undefined4 sub_080B0210(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (*(char *)(iVar1 + 0x10) == '\0') {
      sub_08006984(8);
      if (*(char *)(iVar1 + 0x12) == -1) {
        if ((*(uint *)(param_1 + 0x14) & 0x20000) != 0) {
          *(undefined *)(iVar1 + 0xb5) = 2;
          if (DAT_0202dbf0 != 0) {
            sub_0803A584(DAT_0202dbf0,8,0);
            *(undefined *)(iVar1 + 0xd) = 4;
            *(undefined *)(iVar1 + 0xe) = 0;
            *(undefined2 *)(iVar1 + 0xa4) = 0x28;
          }
        }
      }
      else if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) &&
              ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)) {
        *(undefined *)(iVar1 + 0xb5) = 1;
        if (DAT_0202dbf0 != 0) {
          sub_0803A584(DAT_0202dbf0,5,6);
        }
      }
    }
    else {
      sub_08006984(0x2c);
    }
  }
  return in_lr;
}

