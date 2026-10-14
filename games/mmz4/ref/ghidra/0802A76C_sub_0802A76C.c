// sub_0802A76C at 0x0802A76C (thumb)

undefined4 sub_0802A76C(ushort param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)sub_08000A70(2);
  if (psVar1 != (short *)0x0) {
    *psVar1 = 0x6106 - (param_1 & 0xff);
    sub_08001F1C(psVar1,(DAT_02000a06 & 0x1f00) * 8 + 0x362,2);
  }
  return in_lr;
}

