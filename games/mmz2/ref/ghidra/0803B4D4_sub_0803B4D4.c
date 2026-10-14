// sub_0803B4D4 at 0x0803B4D4 (thumb)

undefined4 sub_0803B4D4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x14) & 4) != 0) &&
      (iVar1 = *(int *)(param_1 + 0x2c), (*(uint *)(iVar1 + 0x8c) & 4) != 0)) &&
     (*(char *)(iVar1 + 0x10) == '\0')) {
    sub_08035674(iVar1,*(undefined4 *)(iVar1 + 0x28),0);
  }
  return in_lr;
}

