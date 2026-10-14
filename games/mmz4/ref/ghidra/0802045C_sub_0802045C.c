// sub_0802045C at 0x0802045C (thumb)

longlong sub_0802045C(int param_1)

{
  uint in_lr;
  
  if (*(char *)(param_1 + 0x17c) == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
    if (DAT_0202e912 == '\0') {
      sub_0801F63C(1);
      *(char *)(param_1 + 0x17c) = '\x01';
      sub_080275F0(&DAT_0202e920,&DAT_0883ff08);
    }
  }
  return (ulonglong)in_lr << 0x20;
}

