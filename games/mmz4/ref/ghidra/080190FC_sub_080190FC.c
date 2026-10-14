// sub_080190FC at 0x080190FC (thumb)

undefined4 sub_080190FC(void)

{
  undefined4 in_lr;
  
  if (DAT_0202dad4 != 0) {
    if (DAT_0202dad4 < 7) {
      sub_08001EA4(&DAT_08fa4a40 + (uint)DAT_0202dad4 * 0x14,0x4000);
      sub_08002208(&DAT_08fa4a4c + (uint)DAT_0202dad4 * 0x14,0);
    }
    else {
      sub_08001EA4(&DAT_08fa4ab8,0x4000);
      sub_08002208(&DAT_08fa4ac4,0);
    }
  }
  return in_lr;
}

