// sub_0802ACF0 at 0x0802ACF0 (thumb)

undefined4 sub_0802ACF0(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  DAT_0202ed50 = 0;
  sub_0802AD84(0);
  DAT_0202ed52 = 0;
  uVar1 = 0;
  do {
    (&DAT_0202ed54)[uVar1] = 0;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 0xc);
  sub_08001D30(&DAT_08c440b4,(DAT_0202e052 - 0x1c1) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c440c0,(DAT_0202de52 - 0xe) * 0x20 + 0x200);
  return in_lr;
}

