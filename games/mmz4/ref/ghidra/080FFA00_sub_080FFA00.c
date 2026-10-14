// sub_080FFA00 at 0x080FFA00 (thumb)

undefined4 sub_080FFA00(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(iVar2 + 0xbc) =
         *(int *)(iVar2 + 0x54) < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (DAT_0202dbf0 != 0)) {
      uVar1 = sub_0803A584(DAT_0202dbf0,3,0x12);
      *(undefined *)(iVar2 + 0xbd) = uVar1;
    }
  }
  return in_lr;
}

