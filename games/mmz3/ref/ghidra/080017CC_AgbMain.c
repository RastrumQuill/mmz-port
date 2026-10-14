// AgbMain at 0x080017CC (thumb)

undefined4 AgbMain(void)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  sub_08001B00();
  sub_08001C98();
  sub_08002204();
  sub_0800313C();
  sub_08003244();
  DAT_04000000 = 0x80;
  sub_08003810();
  sub_08003C38();
  sub_08003F54();
  sub_08004270();
  sub_0800442C();
  sub_080044EC();
  sub_08004518();
  sub_0800457C();
  sub_0800459C();
  sub_08003BE0(&DAT_02030eb0,(DAT_020023c4 & 0x1f00) << 3,0x580,0x3c0);
  sub_080E9200(&DAT_02030eb0);
  DAT_03002ac0 = 0x7fff;
  DAT_030016f5 = 1;
  DAT_030016ec = 0x8001ae5;
  uVar1 = DAT_04000006;
  DAT_030016f6 = 0;
  DAT_030016e8 = 0x8001af1;
  DAT_02030eac = 1;
  sub_080EB400(&DAT_02030c40,0);
  DAT_02030c52 = 0;
  sub_08002210(1);
  sub_080022FC(0,0x80018c9);
  sub_080022FC(2,0x80019c5);
  sub_08002240();
  return in_lr;
}

