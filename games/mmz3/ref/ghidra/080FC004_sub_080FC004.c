// sub_080FC004 at 0x080FC004 (thumb)

longlong sub_080FC004(int param_1)

{
  uint in_lr;
  
  DAT_0200246c = *(undefined4 *)(param_1 + 0xe08);
  sub_08008500();
  return (ulonglong)in_lr << 0x20;
}

