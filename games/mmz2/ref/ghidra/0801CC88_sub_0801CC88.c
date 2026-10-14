// sub_0801CC88 at 0x0801CC88 (thumb)

longlong sub_0801CC88(int param_1)

{
  char cVar1;
  uint in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 1);
  if (cVar1 == '\0') {
    DAT_0202eb9e = DAT_0202eb9e | 1;
  }
  else if (cVar1 == '\x01') {
    DAT_0202eb9e = DAT_0202eb9e & 0xfffe;
  }
  return (ulonglong)in_lr << 0x20;
}

