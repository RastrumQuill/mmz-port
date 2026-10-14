// sub_080BD600 at 0x080BD600 (thumb)

undefined4 sub_080BD600(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080BF0B0();
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return in_lr;
}

