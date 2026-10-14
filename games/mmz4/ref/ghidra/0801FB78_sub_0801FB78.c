// sub_0801FB78 at 0x0801FB78 (thumb)

undefined4 sub_0801FB78(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined *)(param_1 + 0x1c) = 1;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x44);
  sub_0801F998(param_1,*(undefined *)(param_1 + 0x19));
  return in_lr;
}

