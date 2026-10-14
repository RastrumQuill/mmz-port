// sub_080FC5C8 at 0x080FC5C8 (thumb)

undefined4 sub_080FC5C8(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (((((uVar2 & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x2c), (uVar2 & 0x200) != 0)) &&
      ((uVar2 & 0x20000) != 0)) && (DAT_0202dbf0 != 0)) {
    uVar1 = sub_0803A584(DAT_0202dbf0,5,10);
    *(undefined *)(iVar3 + 0xbd) = uVar1;
  }
  return in_lr;
}

