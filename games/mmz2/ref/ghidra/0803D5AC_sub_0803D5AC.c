// sub_0803D5AC at 0x0803D5AC (thumb)

undefined4 sub_0803D5AC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x2c), (*(uint *)(iVar1 + 0x8c) & 4) != 0)) {
    sub_08035720(iVar1,*(undefined4 *)(iVar1 + 0x28),1);
  }
  return in_lr;
}

