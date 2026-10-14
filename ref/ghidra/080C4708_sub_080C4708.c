// sub_080C4708 at 0x080C4708 (thumb)

undefined4 sub_080C4708(ushort *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  pbVar1 = &DAT_082cc230;
  do {
    *param_1 = (ushort)*pbVar1 + (ushort)pbVar1[1] * 0x20 & 0x3ff |
               (ushort)(((param_2 & 0xf) << 0x18) >> 0xc);
    param_1 = param_1 + 1;
    pbVar1 = pbVar1 + 2;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  return in_lr;
}

