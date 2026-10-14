// sub_08027408 at 0x08027408 (thumb)

undefined4 sub_08027408(void)

{
  undefined4 in_lr;
  
  if (((DAT_0202ea78 != 0xffffffff) && (0xefff < DAT_0202ea30 - 0x69000U)) && (DAT_0202ea78 != 0x93)
     ) {
    if (DAT_0202ea78 != 0xffffffff) {
      sub_08002A98(DAT_0202ea78 & 0xffff);
      DAT_0202ea78 = 0xffffffff;
    }
    sub_08002A88(0x93);
    DAT_0202ea78 = 0x93;
  }
  return in_lr;
}

