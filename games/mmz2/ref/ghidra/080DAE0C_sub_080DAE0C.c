// sub_080DAE0C at 0x080DAE0C (thumb)

undefined4 sub_080DAE0C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 4) == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DAE28(param_1);
  }
  return in_lr;
}

