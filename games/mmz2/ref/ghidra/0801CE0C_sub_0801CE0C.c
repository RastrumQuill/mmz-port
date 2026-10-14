// sub_0801CE0C at 0x0801CE0C (thumb)

longlong sub_0801CE0C(void)

{
  uint in_lr;
  
  if (DAT_0202e12c != 0) {
    DAT_0202ebbb = DAT_0202ebbb & 0xfb;
    sub_0800322C();
    DAT_0202e12c = 0;
  }
  sub_08003338(0x25);
  sub_08003338(0x26);
  return (ulonglong)in_lr << 0x20;
}

