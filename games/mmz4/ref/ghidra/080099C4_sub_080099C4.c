// sub_080099C4 at 0x080099C4 (thumb)

undefined4 sub_080099C4(void)

{
  undefined4 in_lr;
  
  if ((DAT_02001284 >> 8 == 0) && ((DAT_02001284 & 0xff) == 0)) {
    if ((DAT_0202dae6 & 1) == 0) {
      DAT_0202dae6 = DAT_0202dae6 | 1;
    }
  }
  else if ((DAT_0202dae6 & 1) != 0) {
    DAT_0202dae6 = DAT_0202dae6 ^ 1;
  }
  if ((DAT_02001286 >> 8 == 0) && ((DAT_02001286 & 0xff) == 2)) {
    if ((DAT_0202dae6 & 2) == 0) {
      DAT_0202dae6 = DAT_0202dae6 | 2;
    }
  }
  else if ((DAT_0202dae6 & 2) != 0) {
    DAT_0202dae6 = DAT_0202dae6 ^ 2;
  }
  if ((DAT_02001284 >> 8 == 0) && ((DAT_02001284 & 0xff) == 3)) {
    if ((DAT_0202dae6 & 4) == 0) {
      DAT_0202dae6 = DAT_0202dae6 | 4;
    }
  }
  else if ((DAT_0202dae6 & 4) != 0) {
    DAT_0202dae6 = DAT_0202dae6 ^ 4;
  }
  if ((DAT_02001286 >> 8 == 0) && ((DAT_02001286 & 0xff) == 4)) {
    if ((DAT_0202dae6 & 8) == 0) {
      DAT_0202dae6 = DAT_0202dae6 | 8;
    }
  }
  else if ((DAT_0202dae6 & 8) != 0) {
    DAT_0202dae6 = DAT_0202dae6 ^ 8;
  }
  return in_lr;
}

