// sub_0800D130 at 0x0800D130 (thumb)

undefined4 sub_0800D130(void)

{
  undefined4 in_lr;
  
  if ((DAT_020017d4 >> 8 == 5) && ((DAT_020017d4 & 0xff) == 0)) {
    if ((DAT_0202e020 & 1) == 0) {
      sub_08002D68(0x3b,0);
      sub_08002D68(0x3c,0);
      DAT_0202e020 = DAT_0202e020 | 1;
    }
    sub_08002EA0(0x3b);
    sub_08002EA0(0x3c);
  }
  else if ((DAT_0202e020 & 1) != 0) {
    sub_08002EF0(0x3b);
    sub_08002EF0(0x3c);
    DAT_0202e020 = DAT_0202e020 ^ 1;
  }
  if ((DAT_020017d4 >> 8 == 5) && ((DAT_020017d4 & 0xff) == 4)) {
    if ((DAT_0202e020 & 2) == 0) {
      sub_08002D68(0x3d,0);
      sub_08002D68(0x84,0);
      DAT_0202e020 = DAT_0202e020 | 2;
    }
    sub_08002EA0(0x3d);
    sub_08002EA0(0x84);
  }
  else if ((DAT_0202e020 & 2) != 0) {
    sub_08002EF0(0x3d);
    sub_08002EF0(0x84);
    DAT_0202e020 = DAT_0202e020 ^ 2;
  }
  DAT_0202e021 = DAT_0202e021 + '\x01';
  if (DAT_0202e021 == '-') {
    DAT_0202e021 = '\0';
  }
  return in_lr;
}

