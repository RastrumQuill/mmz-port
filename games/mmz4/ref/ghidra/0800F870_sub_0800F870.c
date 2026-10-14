// sub_0800F870 at 0x0800F870 (thumb)

undefined4 sub_0800F870(void)

{
  undefined4 in_lr;
  
  if ((DAT_0202e918 & 2) == 0) {
    if ((*(int *)(DAT_0202dbf0 + 0x54) - 0x1d001U < 0x11fff) &&
       (0x129000 < *(int *)(DAT_0202dbf0 + 0x58))) {
      DAT_0202ea5c = 0x128000;
      DAT_0202ea60 = 0x280000;
    }
    else {
      DAT_0202ea5c = 0xa000;
      DAT_0202ea60 = 0x280000;
    }
  }
  return in_lr;
}

