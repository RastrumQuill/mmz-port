// sub_0800A870 at 0x0800A870 (thumb)

undefined4 sub_0800A870(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (DAT_02005208 == 4) {
    if (DAT_0202265c == 0) {
      uVar1 = *(uint *)(param_1 + 0x58) | *(uint *)(param_1 + 0x5c);
      (&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] = (ushort)uVar1 | 0x2044;
      sub_08004EA8((uVar1 & 0x1f00) * 8 + 0x6000000,*(undefined4 *)(param_1 + 0x20),0x80);
      DAT_02022668._0_1_ = '\0';
      DAT_02004f72 = 0x1000;
      DAT_0202265c = 1;
      DAT_0202266c._0_2_ = sub_08001EAC(0x50);
    }
    else {
      if ((short)DAT_0202266c == 0) {
        DAT_0202266c._0_2_ = sub_08001EAC(0x50);
      }
      (&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] =
           (ushort)*(undefined4 *)(param_1 + 0x58) | (ushort)*(undefined4 *)(param_1 + 0x5c) |
           0x2044;
      if (-1 < (char)DAT_02022668) {
        DAT_02022668._0_1_ = (char)DAT_02022668 + '\x01';
      }
    }
    if ((DAT_02022ae1 & 8) == 0) {
      if ((DAT_02022ae1 & 0x10) != 0) {
        sub_0801D07C(DAT_0202286c,0x80);
      }
    }
    else {
      sub_0801D07C(DAT_0202286c,0xffffff80);
    }
  }
  return in_lr;
}

