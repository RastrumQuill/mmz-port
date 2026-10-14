// sub_080C3708 at 0x080C3708 (thumb)

void sub_080C3708(int param_1)

{
  int iVar1;
  
  iVar1 = sub_080BA738(param_1,*(undefined *)(param_1 + 5));
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 3) = 1;
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return;
}

