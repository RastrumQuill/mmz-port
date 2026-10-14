// sub_080029A8 at 0x080029A8 (thumb)

undefined4 sub_080029A8(void)

{
  undefined4 in_lr;
  
  if (DAT_02001790 == '\0') {
    if (((DAT_02001791 == '\x04') || (DAT_02001791 == '\x02')) &&
       (DAT_02000006 = DAT_02000006 + 1, 6 < DAT_02000006)) {
      if (DAT_02001791 == '\x04') {
        DAT_020017a5 = 2;
      }
      if (DAT_02001791 == '\x02') {
        DAT_02001792 = DAT_02001790;
        DAT_02001793 = DAT_02001790;
        DAT_020017a1 = DAT_02001790;
      }
    }
  }
  else {
    if (DAT_02001791 != '\x02') {
      if (DAT_02001791 != '\x04') {
        return in_lr;
      }
      if (DAT_0200179d < 9) {
        if (DAT_020017a2 == '\0') {
          DAT_020017a5 = 1;
          return in_lr;
        }
      }
      else {
        if (DAT_020017a5 != 0) {
          return in_lr;
        }
        DAT_0200179d = DAT_020017a5;
      }
    }
    sub_08002B08();
    if ((DAT_02001780 == 2) && (DAT_02000006 = DAT_02000006 + 1, 6 < DAT_02000006)) {
      DAT_020017a5 = DAT_02001780;
      DAT_02001792 = '\0';
      DAT_02001793 = '\0';
      DAT_020017a1 = '\0';
    }
  }
  return in_lr;
}

