// sub_0800D420 at 0x0800D420 (thumb)

undefined4 sub_0800D420(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (DAT_0202265c == 0) {
      DAT_0202265c = sub_080A12F4(0x153800,0x11b800,0);
    }
    if (DAT_02022660 == 0) {
      DAT_02022660 = sub_080A12F4(0x14c800,0x125800,0);
    }
    if (DAT_02022664 == 0) {
      DAT_02022664 = sub_080A12F4(0x150800,0x125800,1);
    }
    if (DAT_02022668 == 0) {
      DAT_02022668 = sub_080A12F4(0x154800,0x12e800,0);
    }
    if (DAT_0202266c == 0) {
      DAT_0202266c = sub_080A12F4(0x152800,0x135800,1);
    }
    if (DAT_02022670 == 0) {
      DAT_02022670 = sub_080A12F4(0x151800,0x137800,0);
    }
    if (DAT_02022674 == 0) {
      DAT_02022674 = sub_080A12F4(0x150800,0x13d800,0);
    }
    if (DAT_02022678 == 0) {
      DAT_02022678 = sub_080A12F4(0x152800,0x142800,1);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

