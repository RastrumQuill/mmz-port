// sub_0800EEF8 at 0x0800EEF8 (thumb)

undefined4 sub_0800EEF8(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_020017d4 >> 8 == 9) && ((DAT_020017d4 & 0xff) == 5)) {
    uVar1 = sub_080EF2B8(DAT_0202e030._3_1_,3);
    sub_080027AC(&UNK_087fb03c + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_080EF2B8(DAT_0202e030._3_1_,3);
    sub_08002AEC(&UNK_087fb048 + (uVar1 & 0xff) * 0x14,0);
  }
  return in_lr;
}

