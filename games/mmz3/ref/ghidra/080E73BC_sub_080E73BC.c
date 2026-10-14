// sub_080E73BC at 0x080E73BC (thumb)

undefined4 sub_080E73BC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if ((*(char *)(*(int *)(param_1 + 0x28) + 2) == '\0') &&
     (*(char *)(*(int *)(param_1 + 0x28) + 0xdd7) != '\x1e')) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}

