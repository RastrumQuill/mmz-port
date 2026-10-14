// sub_0800F7F0 at 0x0800F7F0 (thumb)

undefined4 sub_0800F7F0(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF2B8(DAT_0202e020,9);
  sub_080027AC(&UNK_087fb244 + (uVar1 & 0xff) * 0x14,0x4000);
  uVar1 = sub_080EF2B8(DAT_0202e020,9);
  sub_08002AEC(&UNK_087fb250 + (uVar1 & 0xff) * 0x14,0);
  return in_lr;
}

