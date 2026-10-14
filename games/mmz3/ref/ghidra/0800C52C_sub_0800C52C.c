// sub_0800C52C at 0x0800C52C (thumb)

undefined4 sub_0800C52C(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_02002c54 >> 8 == 2) && ((DAT_02002c54 & 0xff) == 0)) {
    uVar1 = sub_080FE460(DAT_0202f4a9,9);
    sub_08003AB0(&UNK_087d5a2c + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_080FE460(DAT_0202f4a9,9);
    sub_08003E14(&UNK_087d5a38 + (uVar1 & 0xff) * 0x14,0);
  }
  if ((DAT_02002c56 >> 8 == 2) && ((DAT_02002c56 & 0xff) == 2)) {
    sub_08003AB0(&UNK_087d5a90 + (uint)((byte)DAT_0202f4aa >> 2) * 0x14,0x4000);
    sub_08003E14(&UNK_087d5a9c + (uint)((byte)DAT_0202f4aa >> 2) * 0x14,0);
  }
  if ((DAT_02002c54 >> 8 == 2) && ((DAT_02002c54 & 0xff) == 3)) {
    uVar1 = sub_080FE460(DAT_0202f4a9,9);
    sub_08003AB0(&UNK_087d5a2c + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_080FE460(DAT_0202f4a9,9);
    sub_08003E14(&UNK_087d5a38 + (uVar1 & 0xff) * 0x14,0);
  }
  if ((DAT_02002c56 >> 8 == 2) && ((DAT_02002c56 & 0xff) == 4)) {
    uVar1 = sub_080FE460((byte)DAT_0202f4aa,9);
    sub_08003AB0(&UNK_087d5ae0 + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_080FE460((byte)DAT_0202f4aa,9);
    sub_08003E14(&UNK_087d5aec + (uVar1 & 0xff) * 0x14,0);
    sub_08003AB0(&UNK_087d5b44 + (uint)(DAT_0202f4aa._1_1_ >> 2) * 0x14,0x4000);
    sub_08003E14(&UNK_087d5b50 + (uint)(DAT_0202f4aa._1_1_ >> 2) * 0x14,0);
  }
  if ((DAT_02002c54 >> 8 == 2) && ((DAT_02002c54 & 0xff) == 5)) {
    sub_08003AB0(&UNK_087d5c20 + (uint)(DAT_0202f4a9 >> 3) * 0x14,0x4000);
    sub_08003E14(&UNK_087d5c2c + (uint)(DAT_0202f4a9 >> 3) * 0x14,0);
  }
  return in_lr;
}

