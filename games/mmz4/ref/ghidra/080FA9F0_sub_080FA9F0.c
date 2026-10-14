// sub_080FA9F0 at 0x080FA9F0 (thumb)

undefined4 sub_080FA9F0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 100) = 0x80;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  iVar1 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar1;
  if (iVar1 < 1) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

