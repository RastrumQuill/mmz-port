// sub_0800CC04 at 0x0800CC04 (thumb)

undefined4 sub_0800CC04(int param_1)

{
  undefined4 in_lr;
  
  sub_0800696C();
  if ((DAT_02022adf & 0x40) != 0) {
    sub_08001904(0x20,0);
    sub_08001574(&DAT_087de9a4,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  }
  return in_lr;
}

