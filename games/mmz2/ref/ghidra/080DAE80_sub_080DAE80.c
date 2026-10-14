// sub_080DAE80 at 0x080DAE80 (thumb)

undefined4 sub_080DAE80(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 4) != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DADB4(param_1);
  }
  return in_lr;
}

