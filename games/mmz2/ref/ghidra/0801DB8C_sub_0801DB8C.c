// sub_0801DB8C at 0x0801DB8C (thumb)

undefined4 sub_0801DB8C(ushort param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)sub_080008C8(2);
  if (psVar1 != (short *)0x0) {
    *psVar1 = 0x21a6 - (param_1 & 0xff);
    sub_08002824(psVar1,(DAT_02000f96 & 0x1f00) * 8 + 0x328,2);
  }
  return in_lr;
}

