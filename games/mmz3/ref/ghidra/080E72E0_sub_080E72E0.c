// sub_080E72E0 at 0x080E72E0 (thumb)

undefined4 sub_080E72E0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if ((*(char *)(*(int *)(param_1 + 0x28) + 3) == '\x03') &&
     ((*(byte *)(*(int *)(param_1 + 0x28) + 0xe0b) & 2) != 0)) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}

