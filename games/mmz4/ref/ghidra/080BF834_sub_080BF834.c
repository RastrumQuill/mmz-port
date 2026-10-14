// sub_080BF834 at 0x080BF834 (thumb)

undefined4 sub_080BF834(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0xbc) = iVar1 + -1;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08861ab4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

