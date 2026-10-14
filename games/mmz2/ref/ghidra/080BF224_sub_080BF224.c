// sub_080BF224 at 0x080BF224 (thumb)

undefined4 sub_080BF224(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  iVar2 = *(int *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar2 + 0x2c) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x28) = iVar2;
  }
  return in_lr;
}

