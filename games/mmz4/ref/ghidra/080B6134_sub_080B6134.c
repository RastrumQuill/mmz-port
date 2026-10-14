// sub_080B6134 at 0x080B6134 (thumb)

undefined4 sub_080B6134(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((((*(uint *)(param_1 + 0x14) & 1) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)) &&
     (DAT_0202dbf0 != 0)) {
    uVar1 = sub_0803A584(DAT_0202dbf0,7,3);
    *(undefined *)(iVar2 + 0xb4) = uVar1;
  }
  return in_lr;
}

