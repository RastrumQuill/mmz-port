// sub_08011848 at 0x08011848 (thumb)

undefined4 sub_08011848(void)

{
  undefined4 in_lr;
  
  if ((DAT_020017d4 >> 8 == 0x11) && ((DAT_020017d4 & 0xff) == 1)) {
    if ((DAT_0202e020 & 1) == 0) {
      DAT_0202e020 = DAT_0202e020 | 1;
      sub_08002D68(0x2c,0);
    }
    sub_08002EA0(0x2c);
  }
  else if ((DAT_0202e020 & 1) != 0) {
    sub_08002EF0(0x2c);
    DAT_0202e020 = DAT_0202e020 ^ 1;
  }
  return in_lr;
}

