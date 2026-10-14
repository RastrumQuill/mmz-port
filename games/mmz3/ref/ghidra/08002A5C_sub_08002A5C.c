// sub_08002A5C at 0x08002A5C (thumb)

undefined4 sub_08002A5C(void)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = Ram04000128;
  DAT_02001792 = (byte)((uVar2 << 0x1a) >> 0x1e);
  if (DAT_02001791 == '\x02') {
    cVar1 = sub_08002B18();
    if (cVar1 == '\0') {
      uVar2 = 0;
      do {
        (&DAT_020017ba)[uVar2] = 0xff;
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 4);
    }
    else if (DAT_02001790 == '\0') {
      DAT_02001791 = '\x04';
    }
    else {
      DAT_02001791 = '\x03';
      DAT_0200179d = '\b';
    }
  }
  else if (DAT_02001791 == '\x04') {
    if ((uVar2 & 0x40) != 0) {
      DAT_020017a2 = 1;
    }
    sub_08002D04();
    sub_08002EE0();
    sub_08002FD4();
  }
  DAT_0200179d = DAT_0200179d + '\x01';
  DAT_02000006 = 0;
  if (DAT_0200179d == '\b') {
    DAT_02001778 = DAT_02002125;
  }
  return in_lr;
}

