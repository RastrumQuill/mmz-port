// sub_080C4080 at 0x080C4080 (thumb)

undefined4 sub_080C4080(uint param_1)

{
  undefined4 in_lr;
  
  sub_080BC0AC(&UNK_082b932a +
               (ushort)(&DAT_082b8f3c)[*(ushort *)(&DAT_082b6eac + (param_1 & 0xff) * 0xc)],1,0x12);
  return in_lr;
}

