// sub_08014898 at 0x08014898 (thumb)

undefined4 sub_08014898(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    *(int *)(param_1 + 0xc) = *(int *)(*(int *)(param_1 + 0xc) + 4) + -8;
  }
  return 0;
}

