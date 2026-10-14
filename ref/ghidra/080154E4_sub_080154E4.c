// sub_080154E4 at 0x080154E4 (thumb)

longlong sub_080154E4(int param_1)

{
  int iVar1;
  uint in_lr;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar1 + 1) == '\0') {
    sub_08001EAC(*(undefined2 *)(iVar1 + 4));
  }
  else if (*(char *)(iVar1 + 1) == '\x01') {
    sub_08001EE8((int)*(short *)(iVar1 + 4));
  }
  return (ulonglong)in_lr << 0x20;
}

