// sub_080B51BC at 0x080B51BC (thumb)

undefined4 sub_080B51BC(uint param_1)

{
  undefined4 in_lr;
  
  if ((param_1 & 0xff) - 1 < 0x4e) {
    sub_080BC0AC(&UNK_082b932a +
                 (ushort)(&DAT_082b8f3c)[*(ushort *)(&DAT_082b6ea8 + (param_1 & 0xff) * 0xc)],0x11,7
                );
  }
  return in_lr;
}

