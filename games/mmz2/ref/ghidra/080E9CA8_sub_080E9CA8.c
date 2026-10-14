// sub_080E9CA8 at 0x080E9CA8 (thumb)

undefined4 sub_080E9CA8(uint param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_1 * 0x1000000 + 0xfb000000 >> 0x18 < 2) {
    uVar1 = 0x15f;
    if ((DAT_0202ebb4 & 0x10) == 0) {
      uVar1 = 0x161;
    }
  }
  else {
    uVar1 = (uint)*(ushort *)(&DAT_0835e5a0 + (param_1 & 0xff) * 2);
  }
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[uVar1],1,0x12);
  return in_lr;
}

