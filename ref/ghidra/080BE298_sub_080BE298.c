// sub_080BE298 at 0x080BE298 (thumb)

undefined4 sub_080BE298(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 5) == '\0') {
    DAT_03001ba2 = 0x20;
    DAT_03001ba1 = 0x20;
    DAT_03001ba0 = 0x20;
    DAT_02004f70 = 0;
    DAT_02004f8e = 0xff;
    DAT_02004f90 = 0;
    DAT_02004f80 = DAT_02004f70;
    DAT_030017a0 = DAT_02004f90;
    FUN_080bbe2c();
    DAT_02004f30 = DAT_02004f30 & 0xf0f8 | 0x100;
    FUN_08000d3c(1);
    FUN_08000d10(1,0x80bf07d);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
    return in_lr;
  }
  if ((DAT_02023680 & 1) == 0) {
    if (DAT_03001760 == '\x01') {
      DAT_03001ba2 = 0x20;
      DAT_03001ba1 = 0x20;
      DAT_03001ba0 = 0x20;
      DAT_02004f70 = 0;
      DAT_02004f80 = 0;
      DAT_02004f8e = 0xff;
      DAT_02004f90 = 0;
      DAT_030017a0 = 0;
      FUN_080bd390(param_1,1);
    }
  }
  else {
    FUN_080bd390(param_1,6);
  }
  return in_lr;
}

