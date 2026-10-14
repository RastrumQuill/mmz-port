// sub_080E9DC8 at 0x080E9DC8 (thumb)

undefined4 sub_080E9DC8(uint param_1)

{
  undefined4 in_lr;
  
  sub_080DE510(&DAT_0834c9e4 +
               (ushort)(&DAT_0834c47c)[*(ushort *)(&DAT_0834a1dc + (param_1 & 0xff) * 0xc)],1,0x12);
  return in_lr;
}

