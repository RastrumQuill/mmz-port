// sub_080D5B80 at 0x080D5B80 (thumb)

undefined4 sub_080D5B80(int param_1)

{
  undefined4 in_lr;
  
  if (param_1 - 1U < 0x51) {
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[*(ushort *)(&DAT_0834a1d8 + param_1 * 0xc)]
                 ,0x11,7);
  }
  return in_lr;
}

