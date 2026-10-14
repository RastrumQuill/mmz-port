// sub_080E97D4 at 0x080E97D4 (thumb)

undefined4 sub_080E97D4(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  short sVar2;
  short *psVar3;
  undefined4 in_lr;
  
  if (param_3 < 0x20) {
    psVar3 = (short *)(DAT_02030650 + (param_2 + param_3 * 0x20) * 2);
    while ((bVar1 = *param_1, bVar1 != 0 && (param_2 < 0x20))) {
      if (bVar1 < 0x61) {
        sVar2 = 0x3a0;
      }
      else if (bVar1 < 0xa0) {
        sVar2 = 0x380;
      }
      else {
        sVar2 = 0x2e0;
      }
      *psVar3 = sVar2 + (ushort)*param_1;
      param_1 = param_1 + 1;
      psVar3 = psVar3 + 1;
    }
  }
  return in_lr;
}

