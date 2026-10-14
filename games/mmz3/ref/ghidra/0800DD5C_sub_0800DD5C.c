// sub_0800DD5C at 0x0800DD5C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0800DD5C(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if (_DAT_0202f4a8 == 0) {
    _DAT_0202f4a8 = sub_080CAE18(0);
  }
  if ((DAT_02002c54 >> 8 == 5) && (uVar1 = DAT_02002c54 & 0xff, (DAT_02002c54 & 0xff) == 0)) {
    DAT_0202f4b0._0_2_ = (ushort)DAT_0202f4b0 + 1;
    if ((ushort)DAT_0202f4b0 == 0x84) {
      DAT_0202f4b0._0_2_ = uVar1;
      DAT_0202f4b0._2_2_ = uVar1;
    }
    DAT_0202f4b4._0_2_ = (ushort)DAT_0202f4b4 + 1;
    if ((ushort)DAT_0202f4b4 == 0x30) {
      DAT_0202f4b4._0_2_ = uVar1;
    }
    DAT_0202f4b4._0_2_ = (ushort)DAT_0202f4b4 + 1;
    if ((ushort)DAT_0202f4b4 == 0x3c) {
      DAT_0202f4b4._0_2_ = uVar1;
    }
    DAT_0202f4b8._0_2_ = (ushort)DAT_0202f4b8 + 1;
    if ((ushort)DAT_0202f4b8 == 0xb7) {
      DAT_0202f4b8._0_2_ = uVar1;
      DAT_0202f4b8._2_2_ = uVar1;
    }
  }
  return in_lr;
}

