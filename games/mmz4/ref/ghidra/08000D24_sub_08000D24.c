// sub_08000D24 at 0x08000D24 (thumb)

undefined4 sub_08000D24(void)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = DAT_030016f4;
  if ((DAT_030016f7 & 1) == 0) {
    DAT_030016f7 = DAT_030016f7 | 1;
    DAT_03007ff8 = 1;
    DAT_030016f4 = DAT_030016f4 + '\x01';
    if (DAT_030016e8 != 0) {
      sub_08128880(DAT_030016e8,0x158,cVar1);
    }
    sub_08000E24();
    sub_08000EDC();
    DAT_030016f7 = DAT_030016f7 ^ 1;
  }
  return in_lr;
}

