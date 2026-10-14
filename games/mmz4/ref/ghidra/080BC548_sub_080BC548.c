// sub_080BC548 at 0x080BC548 (thumb)

undefined4 sub_080BC548(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 1) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x2c), (*(uint *)(param_1 + 0x14) & 0x20000) != 0)) {
    *(undefined *)(iVar1 + 0xb4) = 1;
    if (DAT_0202dbf0 != 0) {
      sub_0803A584(DAT_0202dbf0,8,0);
      *(undefined4 *)(iVar1 + 0x5c) = 0xfffffc00;
      *(undefined4 *)(iVar1 + 0x60) = 0xfffffc00;
      if (*(int *)(iVar1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
        *(undefined4 *)(iVar1 + 0x5c) = 0x400;
      }
    }
  }
  return in_lr;
}

