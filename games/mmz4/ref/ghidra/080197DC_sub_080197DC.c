// sub_080197DC at 0x080197DC (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080197DC(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  DAT_0202dae0 = DAT_0202dae0 + 1;
  if (0x9f < DAT_0202dae0) {
    DAT_0202dae0 = 0;
  }
  DAT_0202dae4 = DAT_0202dae4 + 1;
  if (0x1d < DAT_0202dae4) {
    DAT_0202dae4 = 0;
  }
  if ((DAT_02001284 >> 8 == 0xe) && (uVar1 = DAT_02001284 & 0xff, (DAT_02001284 & 0xff) == 0)) {
    if ((_DAT_0202dad8 & 1) == 0) {
      _DAT_0202dad8 = _DAT_0202dad8 | 1;
      sub_0800249C(0xb7,0);
      sub_0800249C(0xb8,0);
      DAT_0202dae6 = uVar1;
    }
    DAT_0202dae6 = DAT_0202dae6 + 1;
    if (0x1f0 < DAT_0202dae6) {
      DAT_0202dae6 = uVar1;
    }
    sub_080025D8(0xb7);
    sub_080025D8(0xb8);
  }
  else if ((_DAT_0202dad8 & 1) != 0) {
    _DAT_0202dad8 = _DAT_0202dad8 ^ 1;
    sub_08002624(0xb7);
    sub_08002624(0xb8);
  }
  if ((DAT_02001286 >> 8 == 0xe) && ((DAT_02001286 & 0xff) == 1)) {
    if ((_DAT_0202dad8 & 2) == 0) {
      _DAT_0202dad8 = _DAT_0202dad8 | 2;
      sub_0800249C(0xb9,0);
    }
    sub_080025D8(0xb9);
  }
  else if ((_DAT_0202dad8 & 2) != 0) {
    _DAT_0202dad8 = _DAT_0202dad8 ^ 2;
    sub_08002624(0xb9);
  }
  if ((DAT_02001286 >> 8 == 0xe) && ((DAT_02001286 & 0xff) == 3)) {
    if ((_DAT_0202dad8 & 4) == 0) {
      _DAT_0202dad8 = _DAT_0202dad8 | 4;
      sub_0800249C(0xba,0);
    }
    sub_080025D8(0xba);
  }
  else if ((_DAT_0202dad8 & 4) != 0) {
    _DAT_0202dad8 = _DAT_0202dad8 ^ 4;
    sub_08002624(0xba);
  }
  if ((DAT_02001284 >> 8 == 0xe) && ((DAT_02001284 & 0xff) == 4)) {
    if ((_DAT_0202dad8 & 8) == 0) {
      _DAT_0202dad8 = _DAT_0202dad8 | 8;
      sub_0800249C(0xbb,0);
    }
    sub_080025D8(0xbb);
  }
  else if ((_DAT_0202dad8 & 8) != 0) {
    _DAT_0202dad8 = _DAT_0202dad8 ^ 8;
    sub_08002624(0xbb);
  }
  if ((DAT_02001286 >> 8 == 0xe) && ((DAT_02001286 & 0xff) == 5)) {
    if ((_DAT_0202dad8 & 0x10) == 0) {
      _DAT_0202dad8 = _DAT_0202dad8 | 0x10;
      sub_0800249C(0xbc,0);
    }
    sub_080025D8(0xbc);
  }
  else if ((_DAT_0202dad8 & 0x10) != 0) {
    _DAT_0202dad8 = _DAT_0202dad8 ^ 0x10;
    sub_08002624(0xbc);
  }
  if ((DAT_02001284 >> 8 == 0xe) && ((DAT_02001284 & 0xff) == 6)) {
    if ((_DAT_0202dad8 & 0x20) == 0) {
      _DAT_0202dad8 = _DAT_0202dad8 | 0x20;
      sub_0800249C(0xbd,0);
    }
    sub_080025D8(0xbd);
  }
  else if ((_DAT_0202dad8 & 0x20) != 0) {
    _DAT_0202dad8 = _DAT_0202dad8 ^ 0x20;
    sub_08002624(0xbd);
  }
  if ((DAT_02001284 >> 8 == 0xe) && ((DAT_02001284 & 0xff) == 7)) {
    if ((_DAT_0202dad8 & 0x40) == 0) {
      _DAT_0202dad8 = _DAT_0202dad8 | 0x40;
      sub_0800249C(0xbe,0);
    }
    sub_080025D8(0xbe);
  }
  else if ((_DAT_0202dad8 & 0x40) != 0) {
    _DAT_0202dad8 = _DAT_0202dad8 ^ 0x40;
    sub_08002624(0xbe);
  }
  if ((DAT_02001286 >> 8 == 0xe) && ((DAT_02001286 & 0xff) == 8)) {
    if ((_DAT_0202dad8 & 0x80) == 0) {
      _DAT_0202dad8 = _DAT_0202dad8 | 0x80;
      sub_0800249C(0xbf,0);
    }
    sub_080025D8(0xbf);
  }
  else if ((_DAT_0202dad8 & 0x80) != 0) {
    _DAT_0202dad8 = _DAT_0202dad8 ^ 0x80;
    sub_08002624(0xbf);
  }
  if ((DAT_02001284 >> 8 == 0xe) && ((DAT_02001284 & 0xff) == 9)) {
    if ((_DAT_0202dad8 & 0x100) == 0) {
      _DAT_0202dad8 = _DAT_0202dad8 | 0x100;
      sub_0800249C(0xc0,0);
    }
    sub_080025D8(0xc0);
  }
  else if ((_DAT_0202dad8 & 0x100) != 0) {
    _DAT_0202dad8 = _DAT_0202dad8 ^ 0x100;
    sub_08002624(0xc0);
  }
  if ((DAT_02001286 >> 8 == 0xe) && ((DAT_02001286 & 0xff) == 10)) {
    if ((_DAT_0202dad8 & 0x200) == 0) {
      _DAT_0202dad8 = _DAT_0202dad8 | 0x200;
      sub_0800249C(0xc3,0);
    }
    sub_080025D8(0xc3);
  }
  else if ((_DAT_0202dad8 & 0x200) != 0) {
    _DAT_0202dad8 = _DAT_0202dad8 ^ 0x200;
    sub_08002624(0xc3);
  }
  if (DAT_0202e891 == '\0') {
    if ((_DAT_0202dad8 & 0x800) == 0) {
      _DAT_0202dad8 = _DAT_0202dad8 | 0x800;
      sub_0800249C(0xca,0x2e0);
    }
    sub_080025D8(0xca);
  }
  else if ((_DAT_0202dad8 & 0x800) != 0) {
    _DAT_0202dad8 = _DAT_0202dad8 ^ 0x800;
    sub_08002624(0xca);
    DAT_0202e891 = -1;
  }
  return in_lr;
}

