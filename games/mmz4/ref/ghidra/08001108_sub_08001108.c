// sub_08001108 at 0x08001108 (thumb)

undefined4 sub_08001108(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_04000006;
  if ((uVar1 < 0xa0) || (uVar1 == 0xe3)) {
    *DAT_03001714 = *DAT_0300171c;
    DAT_0300171c = DAT_0300171c + 1;
  }
  return in_lr;
}

