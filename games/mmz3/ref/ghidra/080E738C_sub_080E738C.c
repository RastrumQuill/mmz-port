// sub_080E738C at 0x080E738C (thumb)

undefined4 sub_080E738C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if ((*(char *)(*(int *)(param_1 + 0x28) + 2) == '\0') &&
     (*(char *)(*(int *)(param_1 + 0x28) + 0xdd7) != '\0')) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}

