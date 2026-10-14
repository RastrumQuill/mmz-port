// sub_080133EC at 0x080133EC (thumb)

undefined4 sub_080133EC(void)

{
  undefined4 in_lr;
  
  if ((DAT_0202e924 & 1) == 0) {
    DAT_0202ea54 = 0xff000;
    DAT_0202ea58 = 0x114000;
  }
  else {
    DAT_0202ea54 = 0xf000;
    DAT_0202ea58 = 0x3c0000;
  }
  return in_lr;
}

