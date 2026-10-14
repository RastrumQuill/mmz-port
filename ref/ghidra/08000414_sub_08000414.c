// sub_08000414 at 0x08000414 (thumb)

undefined4 sub_08000414(void)

{
  undefined4 in_lr;
  
  DAT_030004e5 = 1;
  sub_08000E9C();
  ResetKeyStates();
  DAT_03001ba2 = 0x20;
  DAT_03001ba1 = 0x20;
  DAT_03001ba0 = 0x20;
  DAT_02004f70 = 0;
  DAT_02004f80 = 0;
  DAT_02004f8e = 0xff;
  DAT_02004f90 = 0;
  DAT_030017a0 = 0;
  FUN_08001d6c();
  FUN_080bbe2c();
  FUN_080bbeb8();
  DAT_02004f30 = DAT_02004f30 & 0xf0f8 | 0x100;
  DAT_02004f3c = 0;
  FUN_08000d3c(1);
  sub_08000DFC(&LAB_080bd360_1);
  return in_lr;
}

