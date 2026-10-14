// sub_080C4050 at 0x080C4050 (thumb)

undefined4 sub_080C4050(int param_1)

{
  undefined4 in_lr;
  
  sub_080BC0AC(&UNK_082b932a +
               (ushort)(&DAT_082b8f3c)
                       [*(ushort *)(&DAT_082cc178 + ((uint)(param_1 << 0x18) >> 0x17))],1,0x12);
  return in_lr;
}

