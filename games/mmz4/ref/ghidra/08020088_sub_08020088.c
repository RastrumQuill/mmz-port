// sub_08020088 at 0x08020088 (thumb)

longlong sub_08020088(int param_1)

{
  uint in_lr;
  
  if (*(char *)(param_1 + 0x17c) == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
    sub_0801F63C(1);
    sub_080275F0(&DAT_0202e920,&DAT_0883f9e0);
    *(char *)(param_1 + 0x17c) = '\x01';
  }
  return (ulonglong)in_lr << 0x20;
}

