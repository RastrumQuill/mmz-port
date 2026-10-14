// sub_0801CD30 at 0x0801CD30 (thumb)

longlong sub_0801CD30(void)

{
  uint in_lr;
  
  sub_08002638(&DAT_08432d00,(DAT_0202e590 - 0x10) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432d0c,(DAT_0202e390 - 0xe) * 0x20 + 0x200);
  sub_0801E060();
  return (ulonglong)in_lr << 0x20;
}

