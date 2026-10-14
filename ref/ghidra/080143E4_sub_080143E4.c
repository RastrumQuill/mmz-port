// sub_080143E4 at 0x080143E4 (thumb)

undefined4 sub_080143E4(void)

{
  undefined4 in_lr;
  
  DAT_03001ba2 = 0x20;
  DAT_03001ba1 = 0x20;
  DAT_03001ba0 = 0x20;
  DAT_02004f70 = 0;
  DAT_02004f80 = 0;
  DAT_02004f8e = 0xff;
  DAT_02004f90 = 0;
  DAT_030017a0 = 0;
  DAT_02004f30 = DAT_02004f30 & 0xc1ff;
  FUN_08001d6c();
  return in_lr;
}

