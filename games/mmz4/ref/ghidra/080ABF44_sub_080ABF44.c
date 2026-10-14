// sub_080ABF44 at 0x080ABF44 (thumb)

undefined4 sub_080ABF44(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  if ((DAT_0202dbf0 != 0) && ((*(uint *)(param_1 + 0x8c) & 0x800) != 0)) {
    *(undefined4 *)(DAT_0202dbf0 + 0x60) = 0;
    *(int *)(iVar1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xb4);
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xb8);
  }
  return in_lr;
}

