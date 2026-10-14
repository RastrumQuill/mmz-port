// sub_0800DF0C at 0x0800DF0C (thumb)

undefined4 sub_0800DF0C(void)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((DAT_020017d6 >> 8 == 7) && ((DAT_020017d6 & 0xff) == 2)) {
    if ((DAT_0202e020 & 1) == 0) {
      sub_08002D68(0x6a,0);
      sub_08002D68(0x6b,0);
      sub_08002D68(0x6c,0);
      sub_08002D68(0x6d,0);
      sub_08002D68(0x6e,0);
      sub_08002D68(0x6f,0);
      DAT_0202e020 = DAT_0202e020 | 1;
    }
    sub_08002EA0(0x6a);
    sub_08002EA0(0x6b);
    sub_08002EA0(0x6c);
    sub_08002EA0(0x6d);
    sub_08002EA0(0x6e);
    sub_08002EA0(0x6f);
  }
  else if ((DAT_0202e020 & 1) != 0) {
    sub_08002EF0(0x6a);
    sub_08002EF0(0x6b);
    sub_08002EF0(0x6c);
    sub_08002EF0(0x6d);
    sub_08002EF0(0x6e);
    sub_08002EF0(0x6f);
    DAT_0202e020 = DAT_0202e020 ^ 1;
  }
  if ((DAT_020017d4 >> 8 == 7) && ((DAT_020017d4 & 0xff) == 3)) {
    if ((DAT_0202e020 & 2) == 0) {
      sub_08002D68(0x70,0);
      sub_08002D68(0x71,0);
      sub_08002D68(0x73,0);
      DAT_0202e020 = DAT_0202e020 | 2;
    }
    sub_08002EA0(0x70);
    sub_08002EA0(0x71);
    sub_08002EA0(0x73);
  }
  else if ((DAT_0202e020 & 2) != 0) {
    sub_08002EF0(0x70);
    sub_08002EF0(0x71);
    sub_08002EF0(0x73);
    DAT_0202e020 = DAT_0202e020 ^ 2;
  }
  if ((DAT_020017d4 >> 8 == 7) && (cVar1 = (char)DAT_020017d4, (DAT_020017d4 & 0xff) == 0)) {
    if ((DAT_0202e020 & 4) == 0) {
      sub_08002D68(0x66,0);
      sub_08002D68(0x68,0);
      sub_08002D68(0x69,0);
      DAT_0202e020 = DAT_0202e020 | 4;
    }
    sub_08002EA0(0x66);
    sub_08002EA0(0x68);
    sub_08002EA0(0x69);
    DAT_0202e021 = DAT_0202e021 + '\x01';
    if (DAT_0202e021 == -0x42) {
      DAT_0202e021 = cVar1;
    }
  }
  else if ((DAT_0202e020 & 4) != 0) {
    sub_08002EF0(0x66);
    sub_08002EF0(0x68);
    sub_08002EF0(0x69);
    DAT_0202e021 = '\0';
    DAT_0202e020 = DAT_0202e020 ^ 4;
  }
  if ((DAT_020017d6 >> 8 == 7) && ((DAT_020017d6 & 0xff) == 1)) {
    if ((DAT_0202e020 & 8) == 0) {
      sub_08002D68(0x65,0);
      sub_08002D68(0x67,0);
      DAT_0202e020 = DAT_0202e020 | 8;
    }
    sub_08002EA0(0x65);
    sub_08002EA0(0x67);
  }
  else if ((DAT_0202e020 & 8) != 0) {
    sub_08002EF0(0x65);
    sub_08002EF0(0x67);
    DAT_0202e020 = DAT_0202e020 ^ 8;
  }
  if (DAT_0202e024 == 0) {
    DAT_0202e024 = sub_080D3FD0(1);
  }
  return in_lr;
}

