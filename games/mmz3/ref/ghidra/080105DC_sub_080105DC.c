// sub_080105DC at 0x080105DC (thumb)

undefined4 sub_080105DC(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_02002c54 >> 8 == 8) && ((DAT_02002c54 & 0xff) == 2)) {
    uVar1 = 0;
    if (0xa0 < DAT_0202f4b4._1_1_) {
      do {
        uVar1 = uVar1 + 1 & 0xffff;
      } while ((byte)(&DAT_0833c900)[uVar1 * 2] < DAT_0202f4b4._1_1_);
    }
    sub_08003AB0(&UNK_087d6684 + (uint)(byte)(&DAT_0833c901)[uVar1 * 2] * 0x14,0x4000);
    sub_08003E14(&UNK_087d6690 + (uint)(byte)(&DAT_0833c901)[uVar1 * 2] * 0x14,0);
  }
  return in_lr;
}

