// sub_08024CDC at 0x08024CDC (thumb)

undefined4 sub_08024CDC(ushort param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)sub_08001B60(2);
  if (psVar1 != (short *)0x0) {
    *psVar1 = 0x5166 - (param_1 & 0xff);
    sub_08003B28(psVar1,(DAT_020023c6 & 0x1f00) * 8 + 0x2e2,2);
  }
  return in_lr;
}

