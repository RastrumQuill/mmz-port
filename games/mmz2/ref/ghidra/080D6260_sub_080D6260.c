// sub_080D6260 at 0x080D6260 (thumb)

undefined4 sub_080D6260(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0x233 + (param_2 >> 3));
  bVar1 = (byte)(1 << (param_2 & 7));
  *pbVar2 = *pbVar2 & ~bVar1;
  if ((&DAT_0834a1d5)[param_2 * 0xc] == '\0') {
    pbVar2 = (byte *)(param_1 + 0x23e + (param_2 >> 3));
    *pbVar2 = bVar1 | *pbVar2;
  }
  return in_lr;
}

