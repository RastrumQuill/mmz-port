// sub_08015564 at 0x08015564 (thumb)

undefined4 sub_08015564(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
  return in_lr;
}

