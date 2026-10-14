// sub_0800CC50 at 0x0800CC50 (thumb)

undefined4 sub_0800CC50(int param_1)

{
  undefined4 in_lr;
  
  sub_0800696C();
  if ((DAT_02022adf & 0x40) != 0) {
    sub_08001904(0x25,0);
    sub_08001574(&DAT_087de9b0,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  }
  return in_lr;
}

