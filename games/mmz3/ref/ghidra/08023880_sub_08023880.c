// sub_08023880 at 0x08023880 (thumb)

longlong sub_08023880(int param_1)

{
  uint in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    if (*(short *)(&DAT_0834998c + (uint)*(byte *)(DAT_02030160 + 0x13) * 2) != 0) {
      sub_080EA1B8();
    }
  }
  else if ((DAT_02030105 & 8) == 0) {
    sub_080EA1B8(0x4a);
  }
  else if ((DAT_02030105 & 0x80) == 0) {
    sub_080EA1B8(0x4b);
  }
  else if ((DAT_02030106 & 1) == 0) {
    sub_080EA1B8(0x4c);
  }
  else if ((DAT_02030106 & 4) == 0) {
    sub_080EA1B8(0x4d);
  }
  else if ((DAT_02030106 & 0x20) == 0) {
    sub_080EA1B8(0x4e);
  }
  else {
    sub_080EA1B8(0x4f);
  }
  return (ulonglong)in_lr << 0x20;
}

