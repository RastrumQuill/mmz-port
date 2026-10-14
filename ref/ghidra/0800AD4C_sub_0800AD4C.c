// sub_0800AD4C at 0x0800AD4C (thumb)

undefined4 sub_0800AD4C(int param_1)

{
  undefined4 in_lr;
  
  sub_0800696C();
  if ((DAT_02022adf & 0x40) != 0) {
    sub_08001904(0x6f,0);
    sub_08001574(&DAT_087de80c,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  }
  return in_lr;
}

