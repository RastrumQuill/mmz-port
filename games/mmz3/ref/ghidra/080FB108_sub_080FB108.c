// sub_080FB108 at 0x080FB108 (thumb)

longlong sub_080FB108(int param_1)

{
  uint in_lr;
  
  DAT_02002464 = *(undefined4 *)(param_1 + 0xdf4);
  sub_08008500();
  return (ulonglong)in_lr << 0x20;
}

