// sub_08016B68 at 0x08016B68 (thumb)

undefined4 sub_08016B68(void)

{
  undefined4 in_lr;
  
  DAT_0202dad5 = 0x80;
  DAT_0202dad4 = 0;
  DAT_0202dad8 = 0;
  DAT_0202cac0 = 0x10;
  DAT_0202dad9 = 0;
  DAT_0202dada = 0x78;
  if ((DAT_0202e8b6 & 0x40) != 0) {
    sub_080074C0(0x18,7,0x84);
    sub_080074C0(0x19,7,0x85);
    sub_080074C0(0x1c,7,0x86);
    sub_080074C0(0x1d,7,0x87);
    sub_080074C0(0x1e,7,0x88);
    sub_080074C0(0x1f,7,0x89);
  }
  return in_lr;
}

