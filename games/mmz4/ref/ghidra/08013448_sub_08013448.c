// sub_08013448 at 0x08013448 (thumb)

undefined4 sub_08013448(void)

{
  undefined4 in_lr;
  
  if ((DAT_0202e924 & 1) == 0) {
    DAT_0202ea54 = 0xc3000;
    DAT_0202ea58 = 0xe1000;
  }
  else {
    DAT_0202ea54 = 0xf000;
    DAT_0202ea58 = 0x3c0000;
  }
  return in_lr;
}

