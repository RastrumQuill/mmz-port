// sub_080E3F48 at 0x080E3F48 (thumb)

undefined4 sub_080E3F48(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x7251) = 0;
  *(undefined *)(param_1 + 0x7250) = 0;
  *(undefined *)(param_1 + 0x7252) = 0;
  *(undefined *)(param_1 + 0x7253) = 0;
  *(undefined4 *)(param_1 + 0x7254) = 1;
  DAT_02036e98 = &DAT_02037cf0;
  DAT_02036e9c = &DAT_02037cf0;
  DAT_02036ea0 = &DAT_02037ff4;
  pbVar1 = (byte *)(param_1 + 0x7264);
  sub_080140D0(pbVar1);
  sub_08014130(param_1 + 0x72d4);
  sub_08030F20(param_1 + 0x7324,0,0);
  if ((*(char *)(param_1 + 0x1ee7) == '\0') || ((DAT_02000d10 & 0x200) == 0)) {
    sub_080148A4(*(undefined *)(param_1 + 0x7254));
    sub_080E0E64(param_1,0x300);
  }
  else {
    *(undefined *)(param_1 + 0x7253) = 1;
    *(undefined *)(param_1 + 0x7251) = 1;
    *(undefined *)(param_1 + 0x7340) = 8;
    *(ushort *)(param_1 + 0x7344) = *(ushort *)(param_1 + 0x7344) & 0xfffe | 0x100;
    *pbVar1 = *pbVar1 | 1;
    sub_080148A4(*(undefined *)(undefined4 *)(param_1 + 0x7254));
    sub_080E0E64(param_1,0xc00);
  }
  return in_lr;
}

