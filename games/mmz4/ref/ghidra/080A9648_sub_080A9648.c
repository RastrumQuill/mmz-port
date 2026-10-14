// sub_080A9648 at 0x080A9648 (thumb)

undefined4 sub_080A9648(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(undefined *)(iVar1 + 0xb6) = 1;
    if (*(char *)(iVar1 + 0x10) == '\0') {
      sub_08006984(0x1e);
    }
    else {
      sub_08006984(0x1f);
    }
    if (*(char *)(iVar2 + 8) == '\x01') {
      if (*(char *)(iVar2 + 9) == '\x1d') {
        *(undefined *)(iVar1 + 0xb7) = 2;
      }
      if (*(char *)(iVar2 + 9) == '\x1e') {
        *(undefined *)(iVar1 + 0xb7) = 1;
      }
      sub_080A98E0(iVar1);
    }
    if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
    {
      *(undefined *)(iVar1 + 0xb4) = 1;
      if (DAT_0202dbf0 != 0) {
        sub_0803A584(DAT_0202dbf0,6,(&DAT_0885f558)[*(byte *)(iVar1 + 0x10)]);
      }
    }
  }
  return in_lr;
}

