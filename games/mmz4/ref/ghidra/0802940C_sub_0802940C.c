// sub_0802940C at 0x0802940C (thumb)

longlong sub_0802940C(int param_1)

{
  uint in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    if (*(short *)(&DAT_0883f900 + (uint)*(byte *)(DAT_0202e8e0 + 0x15) * 2) != 0) {
      sub_0810DED0();
    }
  }
  else if (((DAT_0202e8b6 & 1) == 0) || ((DAT_0202e8b6 & 0x20) == 0)) {
    sub_0810DED0(0x33);
  }
  else if ((DAT_0202e8b6 & 0x40) == 0) {
    sub_0810DED0(0x35);
  }
  else if ((DAT_0202e8b6 & 0x80) == 0) {
    sub_0810DED0(0x36);
  }
  else if ((DAT_0202e8b7 & 1) == 0) {
    sub_0810DED0(0x37);
  }
  else if ((((DAT_0202e8b7 & 2) == 0) || ((DAT_0202e8b7 & 4) == 0)) || ((DAT_0202e8b7 & 8) == 0)) {
    sub_0810DED0(0x38);
  }
  else {
    sub_0810DED0(0x3b);
  }
  return (ulonglong)in_lr << 0x20;
}

