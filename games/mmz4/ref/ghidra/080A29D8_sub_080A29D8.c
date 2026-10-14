// sub_080A29D8 at 0x080A29D8 (thumb)

undefined4 sub_080A29D8(int param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar2 = *(uint *)(param_1 + 0x14);
  if (((((uVar2 & 1) != 0) && ((uVar2 & 0x200) != 0)) && ((uVar2 & 0x20000) != 0)) &&
     (DAT_0202dbf0 != 0)) {
    uVar1 = sub_0803A584(DAT_0202dbf0,4,2);
    *(undefined *)(iVar3 + 0xb8) = uVar1;
  }
  return in_lr;
}

