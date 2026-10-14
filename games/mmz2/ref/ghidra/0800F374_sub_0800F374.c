// sub_0800F374 at 0x0800F374 (thumb)

undefined4 sub_0800F374(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_020017d4 >> 8 == 10) && ((DAT_020017d4 & 0xff) == 3)) {
    uVar1 = sub_080EF2B8(DAT_0202e023,9);
    sub_080027AC(&UNK_087fb0f0 + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_080EF2B8(DAT_0202e023,9);
    sub_08002AEC(&UNK_087fb0fc + (uVar1 & 0xff) * 0x14,0);
  }
  if ((DAT_020017d6 >> 8 == 10) && ((DAT_020017d6 & 0xff) == 5)) {
    uVar1 = sub_080EF2B8(DAT_0202e023,9);
    sub_080027AC(&UNK_087fb35c + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_080EF2B8(DAT_0202e023,9);
    sub_08002AEC(&UNK_087fb368 + (uVar1 & 0xff) * 0x14,0);
  }
  return in_lr;
}

