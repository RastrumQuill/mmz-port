// sub_08002EE0 at 0x08002EE0 (thumb)

undefined4 sub_08002EE0(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (DAT_020017b8 == 8) {
    DAT_0400012a = DAT_020017a6;
    pcVar2 = &DAT_02000007;
    if (DAT_02000007 == '\0') {
      if ((byte)(DAT_020019a0 + 1) < 0x1e) {
        DAT_020019a0 = DAT_020019a0 + 1;
        DAT_020019a1 = DAT_020019a1 + -1;
        return in_lr;
      }
      DAT_020019a0 = DAT_02000007;
      DAT_020019a1 = DAT_020019a1 + -1;
      return in_lr;
    }
    cVar1 = '\0';
  }
  else {
    if ((DAT_020017b8 == 0) && (DAT_020019a1 == '\0')) {
      DAT_02000007 = '\x01';
    }
    if (DAT_02000007 == '\0') {
      DAT_0400012a = (&DAT_020017c0)[(uint)DAT_020017b8 * 0x1e + (uint)DAT_020019a0];
    }
    else {
      DAT_0400012a = 0;
    }
    pcVar2 = (char *)&DAT_020017b8;
    cVar1 = DAT_020017b8 + 1;
  }
  *pcVar2 = cVar1;
  return in_lr;
}

