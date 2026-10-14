// sub_080158A8 at 0x080158A8 (thumb)

undefined4 sub_080158A8(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined4 in_lr;
  
  DAT_0202dae0 = DAT_0202dae0 + 1;
  if ((((byte)DAT_0202dada & 1) != 0) && ((short)DAT_0202dadc != 0)) {
    DAT_0202dadc._0_2_ = (short)DAT_0202dadc + -0x10;
  }
  if (((DAT_02001284 >> 8 == 10) && ((DAT_02001284 & 0xff) == 0)) &&
     (DAT_0202dae4 = DAT_0202dae4 + '\x01', DAT_0202dae4 == '\x10')) {
    DAT_0202dae4 = (char)DAT_02001284;
  }
  if ((DAT_0202cac0 & 0xf) == 2) {
    if ((DAT_02001284 >> 8 == 10) && ((DAT_02001284 & 0xff) == 0)) {
      if ((DAT_0202dad8 & 1) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 1;
        sub_0800249C(0x61,0);
        sub_0800249C(99,0);
        sub_0800249C(0x65,0);
      }
      sub_080025D8(0x61);
      sub_080025D8(99);
      sub_080025D8(0x65);
    }
    else if ((DAT_0202dad8 & 1) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 1;
      sub_08002624(0x61);
      sub_08002624(99);
      sub_08002624(0x65);
    }
    if ((DAT_02001284 >> 8 == 10) && ((DAT_02001284 & 0xff) == 2)) {
      if ((DAT_0202dad8 & 0x10) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 0x10;
        sub_0800249C(0x65,0);
      }
      sub_080025D8(0x65);
    }
    else if ((DAT_0202dad8 & 0x10) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 0x10;
      sub_08002624(0x65);
    }
  }
  else {
    if ((DAT_02001284 >> 8 == 10) && ((DAT_02001284 & 0xff) == 0)) {
      if ((DAT_0202dad8 & 1) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 1;
        sub_0800249C(0x60,0);
        sub_0800249C(0x61,0);
        sub_0800249C(0x62,0);
        sub_0800249C(100,0);
      }
      sub_080025D8(0x60);
      sub_080025D8(0x61);
      sub_080025D8(0x62);
      sub_080025D8(100);
    }
    else if ((DAT_0202dad8 & 1) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 1;
      sub_08002624(0x60);
      sub_08002624(0x61);
      sub_08002624(0x62);
      sub_08002624(100);
    }
    if ((DAT_02001284 >> 8 == 10) && ((DAT_02001284 & 0xff) == 2)) {
      if ((DAT_0202dad8 & 0x10) == 0) {
        DAT_0202dad8 = DAT_0202dad8 | 0x10;
        sub_0800249C(100,0);
      }
      sub_080025D8(100);
    }
    else if ((DAT_0202dad8 & 0x10) != 0) {
      DAT_0202dad8 = DAT_0202dad8 ^ 0x10;
      sub_08002624(100);
    }
  }
  if ((DAT_02001286 >> 8 == 10) && ((DAT_02001286 & 0xff) == 1)) {
    if ((DAT_0202dad8 & 2) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 2;
      sub_0800249C(0x66,0);
      sub_0800249C(0x67,0);
    }
    sub_080025D8(0x66);
    sub_080025D8(0x67);
    sub_080025D8(0x67);
    sub_080025D8(0x67);
    sub_080025D8(0x67);
  }
  else if ((DAT_0202dad8 & 2) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 2;
    sub_08002624(0x66);
    sub_08002624(0x67);
  }
  if ((DAT_02001286 >> 8 == 10) && ((DAT_02001286 & 0xff) == 3)) {
    if ((DAT_0202dad8 & 4) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 4;
      sub_0800249C(0x6f,0);
    }
    sub_080025D8(0x6f);
  }
  else if ((DAT_0202dad8 & 4) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 4;
    sub_08002624(0x6f);
  }
  if ((DAT_02001284 >> 8 == 10) && ((DAT_02001284 & 0xff) == 4)) {
    if ((DAT_0202dad8 & 8) == 0) {
      DAT_0202dad8 = DAT_0202dad8 | 8;
      sub_0800249C(0x67,0);
      sub_0800249C(0x70,0);
    }
    sub_080025D8(0x67);
    sub_080025D8(0x67);
    sub_080025D8(0x67);
    sub_080025D8(0x67);
    sub_080025D8(0x70);
  }
  else if ((DAT_0202dad8 & 8) != 0) {
    DAT_0202dad8 = DAT_0202dad8 ^ 8;
    sub_08002624(0x67);
    sub_08002624(0x70);
  }
  if ((((DAT_02001284 >> 8 == 10) && ((DAT_02001284 & 0xff) == 2)) && (DAT_02001286 >> 8 == 10)) &&
     ((DAT_02001286 & 0xff) == 3)) {
    if (DAT_0202dad4 == '\0') {
      if ((DAT_0202dad9 & 1) == 0) {
        DAT_0202dad9 = DAT_0202dad9 | 1;
        sub_0800249C(0x68,0);
        sub_0800249C(0x6b,0);
      }
      sub_080025D8(0x68);
      sub_080025D8(0x6b);
    }
    else {
      if (DAT_0202dad4 == '\x10') {
        if ((DAT_0202dad9 & 1) == 0) {
          if ((DAT_0202dad9 & 2) == 0) {
            DAT_0202dad9 = DAT_0202dad9 | 2;
            sub_0800249C(0x69,0);
            sub_0800249C(0x6c,0);
          }
          sub_080025D8(0x69);
          sub_080025D8(0x6c);
          return in_lr;
        }
        sub_08002624(0x68);
        sub_08002624(0x6b);
        bVar3 = DAT_0202dad9;
        DAT_0202dad9 = 1;
      }
      else {
        if ((byte)(DAT_0202dad4 - 0x20U) < 0x10) {
          if ((DAT_0202dad9 & 2) == 0) {
            if ((DAT_0202dad9 & 4) == 0) {
              DAT_0202dad9 = DAT_0202dad9 | 4;
              sub_0800249C(0x6d,0);
            }
            sub_080025D8(0x6d);
          }
          else {
            sub_08002624(0x6c);
            DAT_0202dad9 = DAT_0202dad9 ^ 2;
          }
          sub_080025D8(0x69);
          return in_lr;
        }
        if (DAT_0202dad4 == '0') {
          if ((DAT_0202dad9 & 4) != 0) {
            sub_08002624(0x69);
            sub_08002624(0x6d);
            DAT_0202dad9 = DAT_0202dad9 ^ 4;
            return in_lr;
          }
          if ((DAT_0202dad9 & 0x18) == 0) {
            DAT_0202dad9 = DAT_0202dad9 | 8;
            sub_0800249C(0x6a,0);
            sub_0800249C(0x6e,0);
          }
          if ((DAT_0202dad9 & 0x10) != 0) {
            return in_lr;
          }
          cVar1 = sub_080025D8(0x6a);
          cVar2 = sub_080025D8(0x6e);
          if (cVar1 == '\x03') {
            sub_08002624(0x6a);
          }
          if (cVar2 == '\x03') {
            sub_08002624(0x6e);
          }
          if (cVar1 != '\x03') {
            return in_lr;
          }
          if (cVar2 != '\x03') {
            return in_lr;
          }
          DAT_0202dad9 = DAT_0202dad9 ^ 8 | 0x10;
          return in_lr;
        }
        if (DAT_0202dad9 == 0) {
          return in_lr;
        }
        if ((DAT_0202dad9 & 1) != 0) {
          sub_08002624(0x68);
          sub_08002624(0x6b);
          DAT_0202dad9 = DAT_0202dad9 ^ 1;
        }
        if ((DAT_0202dad9 & 2) != 0) {
          sub_08002624(0x69);
          sub_08002624(0x6c);
          DAT_0202dad9 = DAT_0202dad9 ^ 2;
        }
        if ((DAT_0202dad9 & 4) != 0) {
          sub_08002624(0x69);
          sub_08002624(0x6d);
          DAT_0202dad9 = DAT_0202dad9 ^ 4;
        }
        if ((DAT_0202dad9 & 8) != 0) {
          sub_08002624(0x6a);
          sub_08002624(0x6e);
          DAT_0202dad9 = DAT_0202dad9 ^ 8;
        }
        if ((DAT_0202dad9 & 0x10) == 0) {
          return in_lr;
        }
        bVar3 = 0x10;
      }
      DAT_0202dad9 = bVar3 ^ DAT_0202dad9;
    }
  }
  else if (DAT_0202dad9 != 0) {
    if ((DAT_0202dad9 & 1) != 0) {
      sub_08002624(0x68);
      sub_08002624(0x6b);
      DAT_0202dad9 = DAT_0202dad9 ^ 1;
    }
    if ((DAT_0202dad9 & 2) != 0) {
      sub_08002624(0x69);
      sub_08002624(0x6c);
      DAT_0202dad9 = DAT_0202dad9 ^ 2;
    }
    if ((DAT_0202dad9 & 4) != 0) {
      sub_08002624(0x69);
      sub_08002624(0x6d);
      DAT_0202dad9 = DAT_0202dad9 ^ 4;
    }
    if ((DAT_0202dad9 & 8) != 0) {
      sub_08002624(0x6a);
      sub_08002624(0x6e);
      DAT_0202dad9 = DAT_0202dad9 ^ 8;
    }
    if ((DAT_0202dad9 & 0x10) != 0) {
      DAT_0202dad9 = DAT_0202dad9 ^ 0x10;
    }
  }
  return in_lr;
}

