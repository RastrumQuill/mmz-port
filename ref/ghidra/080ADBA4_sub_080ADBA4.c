// sub_080ADBA4 at 0x080ADBA4 (thumb)

undefined4 sub_080ADBA4(void)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_02022b20 + 0xf);
  if (cVar1 == '\x01') {
    if (DAT_02022af7 == '\0') {
      DAT_02022ae9 = DAT_02022ae9 | 0x10;
      DAT_02022af7 = 1;
      return 0x233;
    }
    return 0x234;
  }
  if (cVar1 == '\x03') {
    if ((DAT_02022ae9 & 0x10) != 0) {
      if (DAT_02022af7 != '\0') {
        return 0x237;
      }
      if ((0x6bc >> *(sbyte *)(DAT_02022b20 + 2) & 1U) != 0) {
        DAT_02022af7 = 1;
        return 0x235;
      }
      DAT_02022af7 = 1;
      return 0x236;
    }
  }
  else if ((byte)(cVar1 - 5U) < 8) {
    if ((DAT_02022ae9 & 0x10) != 0) {
      if (DAT_02022af7 != '\0') {
        return 0x23a;
      }
      if ((*(uint *)(DAT_02022b20 + 0x14) & 1 << *(sbyte *)(DAT_02022b20 + 0xf)) != 0) {
        DAT_02022af7 = 1;
        return 0x238;
      }
      DAT_02022af7 = 1;
      return 0x239;
    }
  }
  else {
    if (cVar1 == '\r') {
      if (DAT_02022af7 == '\0') {
        DAT_02022af7 = 1;
        return 0x23e;
      }
      return 0x23f;
    }
    if ((*(uint *)(DAT_02022b20 + 0x10) & 0x8000) != 0) {
      if (DAT_02022af7 == '\0') {
        DAT_02022af7 = 1;
        return 0x242;
      }
      return 0x243;
    }
    if ((*(uint *)(DAT_02022b20 + 0x10) & 0x4000) != 0) {
      if (DAT_02022af7 == '\0') {
        DAT_02022af7 = 1;
        return 0x240;
      }
      return 0x241;
    }
    if ((DAT_02022ae9 & 0x10) != 0) {
      if (DAT_02022af7 == '\0') {
        DAT_02022af7 = 1;
        return 0x23b;
      }
      if (DAT_02022af7 != '\x01') {
        return 0x23d;
      }
      DAT_02022af7 = 2;
      return 0x23c;
    }
  }
  DAT_02022ae9 = DAT_02022ae9 | 0x10;
  return 0x233;
}

