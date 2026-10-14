// sub_080DBB80 at 0x080DBB80 (thumb)

undefined4 sub_080DBB80(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0202e48c + -0xa00;
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) &&
     (*(int *)(DAT_0202f5c0 + 0x58) < *(int *)(param_1 + 0x58) + 0x800)) {
    iVar1 = DAT_0202e48c + -0x800;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) * 7 + iVar1 >> 3;
  return in_lr;
}

