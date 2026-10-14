// sub_0800E1BC at 0x0800E1BC (thumb)

undefined4 sub_0800E1BC(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_020017d4 >> 8 == 7) && ((DAT_020017d4 & 0xff) == 3)) {
    sub_08002AEC(&DAT_0874a5dc,0);
  }
  if ((DAT_020017d4 >> 8 == 7) && ((DAT_020017d4 & 0xff) == 0)) {
    uVar1 = 0;
    if (0xa0 < DAT_0202e021) {
      do {
        uVar1 = uVar1 + 1 & 0xffff;
      } while ((byte)(&DAT_0831ab0c)[uVar1 * 2] < DAT_0202e021);
    }
    sub_080027AC(&UNK_087fb208 + (uint)(byte)(&DAT_0831ab0d)[uVar1 * 2] * 0x14,0x4000);
    sub_08002AEC(&UNK_087fb214 + (uint)(byte)(&DAT_0831ab0d)[uVar1 * 2] * 0x14,0);
  }
  return in_lr;
}

