// sub_08001E14 at 0x08001E14 (thumb)

undefined4 sub_08001E14(void)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = DAT_030016f4;
  if ((DAT_030016f7 & 1) == 0) {
    DAT_030016f7 = DAT_030016f7 | 1;
    DAT_03007ff8 = 1;
    DAT_030016f4 = DAT_030016f4 + '\x01';
    if (DAT_030016e8 != 0) {
      sub_080FE2BC(DAT_030016e8,0x158,cVar1);
    }
    sub_08001F14();
    sub_08001FCC();
    DAT_030016f7 = DAT_030016f7 ^ 1;
  }
  return in_lr;
}

