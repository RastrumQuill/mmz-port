// sub_0800DA58 at 0x0800DA58 (thumb)

undefined4 sub_0800DA58(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = FUN_080fe2f8((int)DAT_0202f4a9 << 1,3);
  sub_08003AB0(&UNK_087d5cc0 + iVar1 * 0x14,0x4000);
  iVar1 = FUN_080fe2f8((int)DAT_0202f4a9 << 1,3);
  sub_08003E14(&UNK_087d5ccc + iVar1 * 0x14,0);
  uVar2 = sub_080FE460((undefined)DAT_0202f4aa,9);
  sub_08003AB0(&UNK_087d5d10 + (uVar2 & 0xff) * 0x14,0x4000);
  uVar2 = sub_080FE460((undefined)DAT_0202f4aa,9);
  sub_08003E14(&UNK_087d5d1c + (uVar2 & 0xff) * 0x14,0);
  if (((DAT_02002c56 >> 8 == 4) && ((DAT_02002c56 & 0xff) == 4)) &&
     ((*(uint *)(DAT_02030160 + 0x14) & 0x40) != 0)) {
    sub_08003AB0(&DAT_087d615c,0x4000);
    sub_08003E14(&DAT_087d6168,0);
  }
  return in_lr;
}

