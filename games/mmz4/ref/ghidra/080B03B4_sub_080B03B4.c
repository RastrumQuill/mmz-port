// sub_080B03B4 at 0x080B03B4 (thumb)

undefined4 sub_080B03B4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 0x50) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

