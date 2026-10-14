// sub_0800CBAC at 0x0800CBAC (thumb)

undefined4 sub_0800CBAC(void)

{
  undefined4 in_lr;
  
  sub_0800696C();
  if ((DAT_02022adb & 0xfc) == 0xfc) {
    sub_08001904(0x3b,0);
    sub_08001904(0x46,0);
    sub_08001904(0x47,0);
  }
  else {
    sub_08001904(0x44,0);
    sub_08001904(0x45,0);
  }
  return in_lr;
}

