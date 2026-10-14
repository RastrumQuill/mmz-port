// sub_0800AF8C at 0x0800AF8C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800AF8C(void)

{
  char cVar1;
  undefined4 in_lr;
  
  _DAT_0202e020 = _DAT_0202e020 + 1;
  if (_DAT_0202e020 == 0x100) {
    _DAT_0202e020 = 0;
  }
  if ((DAT_020017d6 >> 8 == 2) && ((DAT_020017d6 & 0xff) == 2)) {
    if ((DAT_0202e022 & 1) == 0) {
      sub_08002D68(0x6a,0);
      sub_08002D68(0x6b,0);
      sub_08002D68(0x6c,0);
      sub_08002D68(0x6d,0);
      sub_08002D68(0x6e,0);
      sub_08002D68(0x6f,0);
      DAT_0202e022 = DAT_0202e022 | 1;
    }
    sub_08002EA0(0x6a);
    sub_08002EA0(0x6b);
    sub_08002EA0(0x6c);
    sub_08002EA0(0x6d);
    sub_08002EA0(0x6e);
    sub_08002EA0(0x6f);
  }
  else if ((DAT_0202e022 & 1) != 0) {
    sub_08002EF0(0x6a);
    sub_08002EF0(0x6b);
    sub_08002EF0(0x6c);
    sub_08002EF0(0x6d);
    sub_08002EF0(0x6e);
    sub_08002EF0(0x6f);
    DAT_0202e022 = DAT_0202e022 ^ 1;
  }
  if ((DAT_020017d4 >> 8 == 2) && ((DAT_020017d4 & 0xff) == 3)) {
    if ((DAT_0202e022 & 2) == 0) {
      sub_08002D68(0x70,0);
      sub_08002D68(0x71,0);
      sub_08002D68(0x72,0);
      DAT_0202e022 = DAT_0202e022 | 2;
    }
    sub_08002EA0(0x70);
    sub_08002EA0(0x71);
    sub_08002EA0(0x72);
  }
  else if ((DAT_0202e022 & 2) != 0) {
    sub_08002EF0(0x70);
    sub_08002EF0(0x71);
    sub_08002EF0(0x72);
    DAT_0202e022 = DAT_0202e022 ^ 2;
  }
  if ((DAT_020017d4 >> 8 == 2) && (cVar1 = (char)DAT_020017d4, (DAT_020017d4 & 0xff) == 0)) {
    if ((DAT_0202e022 & 4) == 0) {
      sub_08002D68(0x66,0);
      sub_08002D68(0x68,0);
      sub_08002D68(0x69,0);
      DAT_0202e022 = DAT_0202e022 | 4;
    }
    sub_08002EA0(0x66);
    sub_08002EA0(0x68);
    sub_08002EA0(0x69);
    DAT_0202e023 = DAT_0202e023 + '\x01';
    if (DAT_0202e023 == -0x42) {
      DAT_0202e023 = cVar1;
    }
  }
  else if ((DAT_0202e022 & 4) != 0) {
    sub_08002EF0(0x66);
    sub_08002EF0(0x68);
    sub_08002EF0(0x69);
    DAT_0202e023 = '\0';
    DAT_0202e022 = DAT_0202e022 ^ 4;
  }
  if ((DAT_020017d6 >> 8 == 2) && ((DAT_020017d6 & 0xff) == 1)) {
    if ((DAT_0202e022 & 8) == 0) {
      sub_08002D68(0x65,0);
      sub_08002D68(0x67,0);
      DAT_0202e022 = DAT_0202e022 | 8;
    }
    sub_08002EA0(0x65);
    sub_08002EA0(0x67);
  }
  else if ((DAT_0202e022 & 8) != 0) {
    sub_08002EF0(0x65);
    sub_08002EF0(0x67);
    DAT_0202e022 = DAT_0202e022 ^ 8;
  }
  if (DAT_0202e024 == 0) {
    DAT_0202e024 = sub_080D3FD0(0);
  }
  return in_lr;
}

