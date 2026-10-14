// sub_08080530 at 0x08080530 (thumb)

undefined4 sub_08080530(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    sub_08006984(0x19);
    iVar2 = *(int *)(param_1 + 0x2c);
    *(bool *)(iVar2 + 0xc0) =
         *(int *)(iVar2 + 0x54) < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (DAT_0202dbf0 != 0)) {
      uVar1 = sub_0803A584(DAT_0202dbf0,5,0);
      *(undefined *)(iVar2 + 0xc3) = uVar1;
    }
  }
  return in_lr;
}

