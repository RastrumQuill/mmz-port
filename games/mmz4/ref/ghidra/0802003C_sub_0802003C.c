// sub_0802003C at 0x0802003C (thumb)

longlong sub_0802003C(int param_1)

{
  uint in_lr;
  
  if (*(char *)(param_1 + 0x17c) == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    sub_080275F0(&DAT_0202e920,&DAT_0883f970);
    sub_0801F63C(0);
    *(char *)(param_1 + 0x17c) = '\x01';
  }
  return (ulonglong)in_lr << 0x20;
}

