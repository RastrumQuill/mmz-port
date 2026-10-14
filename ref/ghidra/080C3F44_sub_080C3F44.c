// sub_080C3F44 at 0x080C3F44 (thumb)

undefined4 sub_080C3F44(uint param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_1 * 0x1000000 + 0xfb000000 >> 0x18 < 2) {
    uVar1 = 0x15d;
    if ((DAT_02022ad4 & 0x10) != 0) {
      uVar1 = 0x15f;
    }
  }
  else {
    uVar1 = (uint)*(ushort *)(&DAT_082cc144 + (param_1 & 0xff) * 2);
  }
  sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[uVar1],1,0x12);
  return in_lr;
}

