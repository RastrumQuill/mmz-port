// sub_08009F4C at 0x08009F4C (thumb)

undefined4 sub_08009F4C(void)

{
  undefined4 in_lr;
  
  if (((char)DAT_0202265c == '\0') && ((DAT_02022ad5 & 2) != 0)) {
    sub_08006878(0x10,0,0xab);
    sub_08006878(0x10,1,0xac);
    sub_08006878(0x10,2,0xad);
    sub_08006878(0x10,3,0xae);
    sub_08006878(0x11,0,0x51);
    sub_08006878(0x11,1,0x52);
    sub_08006878(0x12,0,0x4f);
    sub_08006878(0x12,1,0x50);
    DAT_0202265c._0_1_ = '\x01';
  }
  return in_lr;
}

