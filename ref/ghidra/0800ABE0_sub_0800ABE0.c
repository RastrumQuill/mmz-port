// sub_0800ABE0 at 0x0800ABE0 (thumb)

undefined4 sub_0800ABE0(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = sub_080C8AD0(*(int *)(param_1 + 0x34) + -0x10e0,0x1e);
  if ((char)bVar1 < '\0') {
    bVar1 = 0;
  }
  else if ('\a' < (char)bVar1) {
    bVar1 = 7;
  }
  sub_0800696C(param_1,param_2);
  sub_08001904(((int)((uint)bVar1 << 0x18) >> 8) + 0x40000U >> 0x10,0);
  if ((DAT_02022adf & 0x40) != 0) {
    sub_08001904(0x6f,0);
    sub_08001574(&DAT_087de80c,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  }
  return in_lr;
}

