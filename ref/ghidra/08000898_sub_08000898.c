// sub_08000898 at 0x08000898 (thumb)

undefined4 sub_08000898(void)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = DAT_030004e4;
  if ((DAT_030004e7 & 1) == 0) {
    DAT_030004e7 = DAT_030004e7 | 1;
    DAT_03007ff8 = 1;
    DAT_030004e4 = DAT_030004e4 + '\x01';
    if (DAT_030004d8 != 0) {
      FUN_080c8a94(DAT_030004d8,0x158,cVar1);
    }
    sub_0800099C();
    sub_08000A54();
    DAT_030004e7 = DAT_030004e7 ^ 1;
  }
  return in_lr;
}

