// sub_080A205C at 0x080A205C (thumb)

undefined4 sub_080A205C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (((((uVar1 & 1) != 0) && ((uVar1 & 0x200) != 0)) && ((uVar1 & 0x20000) != 0)) &&
     (DAT_0202dbf0 != 0)) {
    sub_0803A584(DAT_0202dbf0,5,0);
  }
  return in_lr;
}

