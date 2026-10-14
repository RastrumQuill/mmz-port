// sub_08000B7C at 0x08000B7C (thumb)

undefined4 sub_08000B7C(void)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = DAT_030016f4;
  if ((DAT_030016f7 & 1) == 0) {
    DAT_030016f7 = DAT_030016f7 | 1;
    DAT_03007ff8 = 1;
    DAT_030016f4 = DAT_030016f4 + '\x01';
    if (DAT_030016e8 != 0) {
      sub_080EF114(DAT_030016e8,0x158,cVar1);
    }
    sub_08000C7C();
    sub_08000D34();
    DAT_030016f7 = DAT_030016f7 ^ 1;
  }
  return in_lr;
}

