// sub_080155AC at 0x080155AC (thumb)

longlong sub_080155AC(void)

{
  uint in_lr;
  
  sub_080014E8(&DAT_08500000,(DAT_02023010 - 0x10) * 0x20 + 0x10000);
  sub_0800179C(&DAT_0850000c,(DAT_020230c0 - 0xe) * 0x20 + 0x200);
  sub_080159B0();
  return (ulonglong)in_lr << 0x20;
}

