// sub_0800847C at 0x0800847C (thumb)

undefined4 sub_0800847C(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar2 = 0xff;
  iVar1 = sub_08003274(5,0x50);
  if (iVar1 != 0) {
    sub_080034F4(5,&DAT_02002430,0x50);
    do {
      sub_08003254();
      if (DAT_02002160 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)(byte)DAT_0200217e;
      }
    } while (uVar2 == 0);
  }
  if ((int)(uVar2 * 0x1000000) < 0) {
    local_14 = 0;
    sub_080FE110(&local_14,&DAT_02002430,0x1000010);
    local_10 = 0;
    FUN_080fe114(&local_10,&DAT_02002470,&DAT_05000004);
    DAT_02002470 = 0x32da;
    sub_08008500();
  }
  return in_lr;
}

