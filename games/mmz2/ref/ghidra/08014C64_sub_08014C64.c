// sub_08014C64 at 0x08014C64 (thumb)

undefined4 sub_08014C64(void)

{
  undefined4 in_lr;
  
  sub_0800829C();
  sub_0801B3F0(&DAT_0202ec40);
  sub_08002C18();
  if ((DAT_0202ec38 & 0x10) == 0) {
    if ((DAT_0202ec30 == 5) && ((DAT_0202ebb4 & 0x10) == 0)) {
      DAT_0202ebbd = DAT_0202ebbd | 0x10;
    }
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x106c) == 0x106c) {
      DAT_0202ebb5 = DAT_0202ebb5 | 0x40;
    }
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x780) == 0x780) {
      DAT_0202ebb5 = DAT_0202ebb5 | 0x80;
    }
    sub_08014104(&DAT_02036b44);
  }
  sub_0801E79C(DAT_02036e98,&DAT_02036c04);
  return in_lr;
}

