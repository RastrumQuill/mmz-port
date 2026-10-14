// sub_080F9E30 at 0x080F9E30 (thumb)

longlong sub_080F9E30(int param_1)

{
  uint in_lr;
  
  if (DAT_02002458 < *(uint *)(param_1 + 0xdd4)) {
    DAT_02002458 = *(uint *)(param_1 + 0xdd4);
    sub_08008500();
  }
  DAT_02002410 = DAT_02002410 & 0xdfff;
  sub_08004230(0xd6);
  return (ulonglong)in_lr << 0x20;
}

