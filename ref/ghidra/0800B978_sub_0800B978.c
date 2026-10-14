// sub_0800B978 at 0x0800B978 (thumb)

undefined4 sub_0800B978(void)

{
  undefined4 in_lr;
  
  DAT_0202265c = 1;
  DAT_02022660 = 1;
  DAT_02022664 = 1;
  DAT_0202266c = 0xffffffff;
  if ((DAT_02022ae1 & 0x80) != 0) {
    sub_080067C4(0x144,0x17,&DAT_082981be);
    sub_080067C4(0x144,0x18,&DAT_082981d0);
    sub_080067C4(0x144,0x19,&DAT_082981e2);
    sub_080067C4(0x144,0x1a,&DAT_082981f4);
    sub_080067C4(0x144,0x1b,&DAT_08298206);
    sub_080067C4(0x144,0x1c,&DAT_08298218);
    sub_080067C4(0x144,0x1d,&DAT_0829822a);
  }
  DAT_02022aee = 0;
  DAT_02022670._0_2_ = 0xffff;
  DAT_02022670._2_2_ = 0xffff;
  return in_lr;
}

