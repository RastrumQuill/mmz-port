// sub_08027450 at 0x08027450 (thumb)

longlong sub_08027450(int param_1)

{
  char *pcVar1;
  uint in_lr;
  
  pcVar1 = (char *)(param_1 + 0x17c);
  if (*pcVar1 == '\0') {
    if (DAT_0202e912 == '\0') {
      DAT_0202e918 = DAT_0202e918 | 1;
      sub_080275F0(&DAT_0202e920,&DAT_0884e900);
      sub_08006984(0x59);
      sub_0801F63C(1);
      *pcVar1 = '\x01';
      goto LAB_080274a6;
    }
  }
  else {
    if (*pcVar1 != '\x01') goto LAB_080274a6;
    *pcVar1 = '\x02';
  }
  DAT_0202e918 = DAT_0202e918 & 0xfffe;
LAB_080274a6:
  return (ulonglong)in_lr << 0x20;
}

