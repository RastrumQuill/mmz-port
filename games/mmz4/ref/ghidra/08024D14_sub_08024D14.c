// sub_08024D14 at 0x08024D14 (thumb)

longlong sub_08024D14(int param_1)

{
  uint in_lr;
  
  if (*(char *)(param_1 + 0x17c) == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
    sub_0801F63C(1);
    sub_080275F0(&DAT_0202e920,&DAT_0884788c);
    *(char *)(param_1 + 0x17c) = '\x01';
  }
  return (ulonglong)in_lr << 0x20;
}

