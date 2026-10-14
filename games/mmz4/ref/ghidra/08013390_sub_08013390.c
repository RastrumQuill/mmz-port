// sub_08013390 at 0x08013390 (thumb)

undefined4 sub_08013390(void)

{
  undefined4 in_lr;
  
  if ((DAT_0202e924 & 1) == 0) {
    DAT_0202ea58 = 0x2d000;
  }
  else {
    DAT_0202ea58 = 0x3c0000;
  }
  DAT_0202ea54 = 0xf000;
  return in_lr;
}

