// sub_0802367C at 0x0802367C (thumb)

longlong sub_0802367C(int param_1)

{
  char cVar1;
  uint in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 1);
  if (cVar1 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 0x40;
  }
  else if (cVar1 == '\x01') {
    DAT_020301a8 = DAT_020301a8 & 0xffbf;
  }
  return (ulonglong)in_lr << 0x20;
}

