// sub_0800D254 at 0x0800D254 (thumb)

undefined4 sub_0800D254(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_020017d4 >> 8 == 5) && ((DAT_020017d4 & 0xff) == 3)) {
    uVar1 = sub_080EF2B8(DAT_0202e021,9);
    sub_080027AC(&UNK_087fb0f0 + (uVar1 & 0xff) * 0x14,0x4000);
    uVar1 = sub_080EF2B8(DAT_0202e021,9);
    sub_08002AEC(&UNK_087fb0fc + (uVar1 & 0xff) * 0x14,0);
  }
  return in_lr;
}

