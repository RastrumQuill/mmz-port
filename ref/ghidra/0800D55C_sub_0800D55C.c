// sub_0800D55C at 0x0800D55C (thumb)

undefined4 sub_0800D55C(int param_1)

{
  undefined4 in_lr;
  
  sub_0800696C();
  if ((DAT_02022adf & 0x40) != 0) {
    sub_08001904(0x71,0);
    sub_08001574(&DAT_087dee08,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  }
  return in_lr;
}

