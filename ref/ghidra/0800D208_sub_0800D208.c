// sub_0800D208 at 0x0800D208 (thumb)

undefined4 sub_0800D208(int param_1)

{
  undefined4 in_lr;
  
  sub_0800696C();
  sub_08001904(0x4b,0);
  sub_08001904(0x4c,0);
  sub_08001904(0x53,0);
  if ((DAT_02022adf & 0x40) != 0) {
    sub_08001904(0x4a,0);
    sub_08001574(&DAT_087decfc,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  }
  return in_lr;
}

