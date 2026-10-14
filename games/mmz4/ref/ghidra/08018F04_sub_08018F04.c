// sub_08018F04 at 0x08018F04 (thumb)

undefined4 sub_08018F04(void)

{
  undefined4 in_lr;
  
  DAT_0202dadc = DAT_0202dadc + 1;
  if ((DAT_02001284 >> 8 == 0xd) && ((DAT_02001284 & 0xff) == 0)) {
    if ((DAT_0202dad8 & 1) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 1;
      sub_0800249C(0x96,0);
      sub_0800249C(0x97,0);
    }
    sub_080025D8(0x96);
    sub_080025D8(0x97);
  }
  else if ((DAT_0202dad8 & 1) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 1;
    sub_08002624(0x96);
    sub_08002624(0x97);
  }
  if ((DAT_02001286 >> 8 == 0xd) && ((DAT_02001286 & 0xff) == 1)) {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      sub_0800249C(0x98,0);
      sub_0800249C(0x99,0);
    }
    sub_080025D8(0x98);
    sub_080025D8(0x99);
    sub_080025D8(0x99);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(0x98);
    sub_08002624(0x99);
  }
  if ((DAT_02001284 >> 8 == 0xd) && ((DAT_02001284 & 0xff) == 2)) {
    if ((DAT_0202dad8 & 4) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 4;
      sub_0800249C(0x9a,0);
      sub_0800249C(0x9b,0);
    }
    sub_080025D8(0x9a);
    sub_080025D8(0x9b);
  }
  else if ((DAT_0202dad8 & 4) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 4;
    sub_08002624(0x9a);
    sub_08002624(0x9b);
  }
  if ((DAT_02001286 >> 8 == 0xd) && ((DAT_02001286 & 0xff) == 3)) {
    if ((DAT_0202dad8 & 8) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 8;
      sub_0800249C(0x9c,0);
      sub_0800249C(0x9d,0);
    }
    sub_080025D8(0x9c);
    sub_080025D8(0x9d);
  }
  else if ((DAT_0202dad8 & 8) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 8;
    sub_08002624(0x9c);
    sub_08002624(0x9d);
  }
  return in_lr;
}

