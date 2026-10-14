// sub_0800BC30 at 0x0800BC30 (thumb)

undefined4 sub_0800BC30(void)

{
  undefined4 in_lr;
  
  if (DAT_0202e020 == '\0') {
    if ((DAT_020017d4 >> 8 == 3) && ((DAT_020017d4 & 0xff) == 2)) {
      if ((DAT_0202e021 & 1) == 0) {
        sub_08002D68(0x56,0);
        sub_08002D68(0x57,0);
        DAT_0202e021 = DAT_0202e021 | 1;
      }
      sub_08002EA0(0x56);
      sub_08002EA0(0x57);
    }
    else if ((DAT_0202e021 & 1) != 0) {
      sub_08002EF0(0x56);
      sub_08002EF0(0x57);
      DAT_0202e021 = DAT_0202e021 ^ 1;
    }
    if ((DAT_020017d6 >> 8 == 3) && ((DAT_020017d6 & 0xff) == 3)) {
      if ((DAT_0202e021 & 2) == 0) {
        sub_08002D68(0x55,0);
        DAT_0202e021 = DAT_0202e021 | 2;
      }
      sub_08002EA0(0x55);
    }
    else if ((DAT_0202e021 & 2) != 0) {
      sub_08002EF0(0x55);
      DAT_0202e021 = DAT_0202e021 ^ 2;
    }
    if ((DAT_020017d6 >> 8 == 3) && ((DAT_020017d6 & 0xff) == 4)) {
      if ((DAT_0202e021 & 4) == 0) {
        sub_08002D68(0x58,0);
        DAT_0202e021 = DAT_0202e021 | 4;
      }
      sub_08002EA0(0x58);
    }
    else if ((DAT_0202e021 & 4) != 0) {
      sub_08002EF0(0x58);
      DAT_0202e021 = DAT_0202e021 ^ 4;
    }
    if ((DAT_020017d4 >> 8 == 3) && ((DAT_020017d4 & 0xff) == 5)) {
      if ((DAT_0202e021 & 8) == 0) {
        sub_08002D68(0x59,0);
        DAT_0202e021 = DAT_0202e021 | 8;
      }
      sub_08002EA0(0x59);
    }
    else if ((DAT_0202e021 & 8) != 0) {
      sub_08002EF0(0x59);
      DAT_0202e021 = DAT_0202e021 ^ 8;
    }
  }
  return in_lr;
}

