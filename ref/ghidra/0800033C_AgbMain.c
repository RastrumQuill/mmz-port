// AgbMain at 0x0800033C (thumb)

undefined4 AgbMain(void)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  sub_080005BC();
  sub_08000750();
  sub_08000C1C();
  sub_08000E98();
  InitInput();
  FUN_08000fe8();
  DAT_04000000 = 0x80;
  FUN_08001434();
  FUN_0800162c();
  FUN_080018c8();
  FUN_08001af8();
  FUN_08001bcc();
  FUN_08001c8c();
  FUN_08001cb8();
  FUN_08001d1c();
  FUN_08001d3c();
  FUN_080015d4(&DAT_020236ec,0,0x580,0x3c0);
  FUN_080bbe08(&DAT_020236ec);
  DAT_030004e5 = 1;
  DAT_030004dc = 0x80005a5;
  uVar1 = DAT_04000006;
  DAT_030004e6 = 0;
  DAT_030004d8 = 0x80005b1;
  FUN_080bd390(&DAT_02023680,0);
  sub_08000C28(1);
  FUN_08000d10(0,0x8000415);
  FUN_08000d10(2,0x80004b9);
  sub_08000C54();
  return in_lr;
}

