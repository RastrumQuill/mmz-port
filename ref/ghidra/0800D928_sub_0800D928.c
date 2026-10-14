// sub_0800D928 at 0x0800D928 (thumb)

undefined4 sub_0800D928(int param_1)

{
  undefined4 in_lr;
  
  sub_0800696C();
  DAT_02021648 = 0x3c000;
  if ((DAT_02022adf & 0x40) != 0) {
    sub_08001904(0x72,0);
    sub_08001574(&DAT_087df1d4,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  }
  return in_lr;
}

