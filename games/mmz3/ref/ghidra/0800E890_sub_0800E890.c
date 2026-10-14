// sub_0800E890 at 0x0800E890 (thumb)

undefined4 sub_0800E890(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_02002c54 >> 8 == 6) && ((DAT_02002c54 & 0xff) == 0)) {
    uVar1 = sub_080FE460(DAT_0202f4a9,5);
    sub_08003AB0(&UNK_087d64cc + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_080FE460(DAT_0202f4a9,5);
    sub_08003E14(&UNK_087d64d8 + (uVar1 & 0xff) * 0x14,0);
  }
  if ((DAT_02002c56 >> 8 == 6) && ((DAT_02002c56 & 0xff) == 1)) {
    sub_08003AB0(&UNK_087d642c + ((int)((uint)(byte)DAT_0202f4aa << 0x18) >> 0x19) * 0x14,0x4000);
    sub_08003E14(&UNK_087d6438 + ((int)((uint)(byte)DAT_0202f4aa << 0x18) >> 0x19) * 0x14,0);
  }
  if ((DAT_02002c54 >> 8 == 6) && ((DAT_02002c54 & 0xff) == 3)) {
    sub_08003AB0(&UNK_087d651c + (uint)(DAT_0202f4aa._1_1_ >> 2) * 0x14,0x4000);
    sub_08003E14(&UNK_087d6528 + (uint)(DAT_0202f4aa._1_1_ >> 2) * 0x14,0);
  }
  if ((DAT_02002c56 >> 8 == 6) && ((DAT_02002c56 & 0xff) == 6)) {
    uVar1 = sub_080FE460((undefined)DAT_0202f4b0,0xc);
    sub_08003AB0(&UNK_087d65bc + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_080FE460((undefined)DAT_0202f4b0,0xc);
    sub_08003E14(&UNK_087d65c8 + (uVar1 & 0xff) * 0x14,0);
  }
  return in_lr;
}

