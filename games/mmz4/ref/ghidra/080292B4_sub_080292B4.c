// sub_080292B4 at 0x080292B4 (thumb)

longlong sub_080292B4(int param_1)

{
  char cVar1;
  uint in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 1);
  if (cVar1 == '\0') {
    *(char *)(param_1 + 3) = (char)*(undefined2 *)(*(int *)(param_1 + 0xc) + 2);
    if ((DAT_0202e8b4 & 0x40) == 0) {
      DAT_0202e918 = DAT_0202e918 | 0x80;
    }
  }
  else if (cVar1 == '\x01') {
    DAT_0202e918 = DAT_0202e918 & 0xff7f;
  }
  return (ulonglong)in_lr << 0x20;
}

