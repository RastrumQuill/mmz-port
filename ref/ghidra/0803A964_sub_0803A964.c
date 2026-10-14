// sub_0803A964 at 0x0803A964 (thumb)

void sub_0803A964(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
    sub_08080420(iVar1);
    *(char *)(param_1 + 0xd8) = *(char *)(param_1 + 0xd8) + -1;
  }
  return;
}

