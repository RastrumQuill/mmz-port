// sub_080FB994 at 0x080FB994 (thumb)

longlong sub_080FB994(int param_1)

{
  uint in_lr;
  
  DAT_02002468 = *(undefined4 *)(param_1 + 0xdf8);
  sub_08008500();
  return (ulonglong)in_lr << 0x20;
}

