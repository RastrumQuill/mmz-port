// sub_080008F8 at 0x080008F8 (thumb)

undefined4 sub_080008F8(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_04000006;
  if ((DAT_030004e7 & 2) == 0) {
    DAT_030004e7 = DAT_030004e7 | 2;
    if (uVar1 == 0) {
      DAT_030004e0 = DAT_030004e0 + 1;
    }
    if ((uVar1 == DAT_030004e6) && (DAT_030004dc != 0)) {
      FUN_080c8a94();
    }
    if (uVar1 < DAT_030004e6) {
      DAT_04000004._1_1_ = DAT_030004e6;
    }
    else {
      DAT_04000004._1_1_ = 0;
    }
    DAT_030004e7 = DAT_030004e7 ^ 2;
  }
  return in_lr;
}

