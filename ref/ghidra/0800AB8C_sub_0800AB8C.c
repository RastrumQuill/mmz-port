// sub_0800AB8C at 0x0800AB8C (thumb)

undefined4 sub_0800AB8C(int param_1)

{
  undefined4 in_lr;
  
  sub_0800696C();
  sub_08001904(0xb,0);
  if ((DAT_02022adf & 0x40) != 0) {
    sub_08001904(0x6f,0);
    sub_08001574(&DAT_087de80c,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  }
  return in_lr;
}

