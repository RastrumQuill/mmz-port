// sub_0800B258 at 0x0800B258 (thumb)

undefined4 sub_0800B258(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_020017d4 >> 8 == 2) && ((DAT_020017d4 & 0xff) == 0)) {
    uVar1 = 0;
    if (0xa0 < DAT_0202e023) {
      do {
        uVar1 = uVar1 + 1 & 0xffff;
      } while ((byte)(&DAT_08315c9c)[uVar1 * 2] < DAT_0202e023);
    }
    sub_080027AC(&UNK_087fb208 + (uint)(byte)(&DAT_08315c9d)[uVar1 * 2] * 0x14,0x4000);
    sub_08002AEC(&UNK_087fb214 + (uint)(byte)(&DAT_08315c9d)[uVar1 * 2] * 0x14,0);
  }
  return in_lr;
}

