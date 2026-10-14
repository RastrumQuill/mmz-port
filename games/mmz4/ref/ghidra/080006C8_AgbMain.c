// AgbMain at 0x080006C8 (thumb)

undefined4 AgbMain(void)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  sub_08000A10();
  sub_08000BA8();
  sub_080011C0();
  sub_08001454();
  sub_0800155C();
  DAT_04000000 = 0x80;
  sub_08001C04();
  sub_0800202C();
  sub_08002348();
  sub_08002664();
  sub_08002820();
  sub_080028E0();
  sub_0800290C();
  sub_08002970();
  sub_08002990();
  sub_08001FD4(&DAT_0202f620,(DAT_02000a04 & 0x1f00) << 3,0x580,0x3c0);
  sub_0810CE10(&DAT_0202f620);
  DAT_03002ac0 = 0x7fff;
  DAT_030016f5 = 1;
  DAT_030016ec = 0x80009f9;
  uVar1 = DAT_04000006;
  DAT_030016f6 = 0;
  DAT_030016e8 = 0x8000a05;
  DAT_0202f61c = 1;
  sub_0810F0B0(&DAT_0202f3b0,0);
  DAT_0202f3c2 = 0;
  DAT_0202f5e4 = 0;
  sub_080011CC(1);
  sub_080012B8(0,0x80007cd);
  sub_080012B8(2,0x80008c9);
  sub_080011FC();
  return in_lr;
}

