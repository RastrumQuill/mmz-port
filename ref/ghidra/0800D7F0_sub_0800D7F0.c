// sub_0800D7F0 at 0x0800D7F0 (thumb)

undefined4 sub_0800D7F0(void)

{
  undefined4 in_lr;
  
  if ((DAT_0202265c == 0) && ((DAT_02022adf & 2) != 0)) {
    sub_080067C4(0x187,0x12,&DAT_0829ab38);
    sub_080067C4(0x199,0x12,&DAT_0829ab60);
    DAT_0202265c = DAT_0202265c + 1;
  }
  return in_lr;
}

