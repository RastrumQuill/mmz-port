// AgbMain at 0x08000438 (thumb)

undefined4 AgbMain(void)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  sub_08000868();
  sub_08000A00();
  sub_08000F6C();
  sub_08001200();
  sub_08001F88();
  sub_080020C0();
  DAT_04000000 = 0x80;
  sub_0800250C();
  sub_08002934();
  sub_08002C18();
  sub_08002F2C();
  sub_08002FFC();
  sub_080030BC();
  sub_080030E8();
  sub_0800314C();
  sub_0800316C();
  sub_080028DC(&DAT_0202f8f8,(DAT_02000f94 & 0x1f00) << 3,0x580,0x3c0);
  sub_080DE198(&DAT_0202f8f8);
  DAT_030016f5 = 1;
  DAT_030016ec = 0x8000851;
  uVar1 = DAT_04000006;
  DAT_030016f6 = 0;
  DAT_030016e8 = 0x800085d;
  sub_080DFBC0(&DAT_0202f680,0);
  sub_08000F78(1);
  sub_08001064(0,0x800051d);
  sub_08001064(2,0x80005fd);
  sub_08000FA8();
  return in_lr;
}

