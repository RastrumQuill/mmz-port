// sub_080151EC at 0x080151EC (thumb)

undefined4 sub_080151EC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined *)(param_1 + 0x1c) = 1;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x44);
  sub_0801504C(param_1,*(undefined *)(param_1 + 0x19));
  return in_lr;
}

