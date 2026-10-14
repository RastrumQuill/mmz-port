// sub_080294BC at 0x080294BC (thumb)

longlong sub_080294BC(void)

{
  uint in_lr;
  
  if (DAT_0202dbec != 0) {
    DAT_0202e8b8 = DAT_0202e8b8 & 0x7f;
    sub_08002A50();
    DAT_0202dbec = 0;
  }
  return (ulonglong)in_lr << 0x20;
}

