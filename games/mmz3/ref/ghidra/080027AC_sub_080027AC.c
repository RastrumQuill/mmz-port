// sub_080027AC at 0x080027AC (thumb)

undefined4 sub_080027AC(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  DAT_02000004 = DAT_04000208;
  DAT_04000208 = 0;
  if (DAT_020019a1 < 0x1e) {
    uVar1 = (uint)(byte)(DAT_020019a1 + DAT_020019a0);
    if (0x1d < uVar1) {
      uVar1 = uVar1 - 0x1e & 0xff;
    }
    uVar2 = 0;
    do {
      DAT_0200000a = DAT_0200000a | *param_1;
      (&DAT_020017c0)[uVar2 * 0x1e + uVar1] = *param_1;
      *param_1 = 0;
      param_1 = param_1 + 1;
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 8);
  }
  else {
    DAT_020017a4 = DAT_020017a4 | 1;
  }
  if (DAT_0200000a != 0) {
    DAT_020019a1 = DAT_020019a1 + 1;
    DAT_0200000a = 0;
  }
  DAT_04000208 = DAT_02000004;
  DAT_02001770 = DAT_020019a1;
  return in_lr;
}

