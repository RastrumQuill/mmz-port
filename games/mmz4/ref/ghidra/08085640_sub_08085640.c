// sub_08085640 at 0x08085640 (thumb)

undefined4 sub_08085640(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar2 + 0xb4) = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(iVar2 + 0x54);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    sub_08006984(0x22);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (DAT_0202dbf0 != 0)) {
      uVar1 = sub_0803A584(DAT_0202dbf0,4,0);
      *(undefined *)(iVar2 + 0xc3) = uVar1;
    }
  }
  return in_lr;
}

