// sub_0801B218 at 0x0801B218 (thumb)

undefined4 sub_0801B218(void)

{
  undefined4 in_lr;
  
  if ((DAT_0202ed50 < 0x1e000) && (DAT_0202ed54 < 0x1e000)) {
    if (((DAT_0202ebb5 & 0x20) == 0) && ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x6c) == 0x6c)) {
      if (DAT_0202ed98 != 0x5c) {
        if (DAT_0202ed98 != 0xffffffff) {
          sub_08003274(DAT_0202ed98 & 0xffff);
          DAT_0202ed98 = 0xffffffff;
        }
        sub_08003264(0x5c);
        DAT_0202ed98 = 0x5c;
      }
    }
    else if (DAT_0202ed98 != 0xb5) {
      if (DAT_0202ed98 != 0xffffffff) {
        sub_08003274(DAT_0202ed98 & 0xffff);
        DAT_0202ed98 = 0xffffffff;
      }
      sub_08003264(0xb5);
      DAT_0202ed98 = 0xb5;
    }
  }
  else if ((DAT_0202ed50 < 0xa5001) || (0x13fff < DAT_0202ed54)) {
    if (DAT_0202ed98 != 0xb7) {
      if (DAT_0202ed98 != 0xffffffff) {
        sub_08003274(DAT_0202ed98 & 0xffff);
        DAT_0202ed98 = 0xffffffff;
      }
      sub_08003264(0xb7);
      DAT_0202ed98 = 0xb7;
    }
  }
  else if (DAT_0202ed98 != 0xb6) {
    if (DAT_0202ed98 != 0xffffffff) {
      sub_08003274(DAT_0202ed98 & 0xffff);
      DAT_0202ed98 = 0xffffffff;
    }
    sub_08003264(0xb6);
    DAT_0202ed98 = 0xb6;
  }
  return in_lr;
}

