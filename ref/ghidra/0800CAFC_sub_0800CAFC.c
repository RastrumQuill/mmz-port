// sub_0800CAFC at 0x0800CAFC (thumb)

undefined4 sub_0800CAFC(int param_1)

{
  undefined4 in_lr;
  
  sub_0800696C();
  sub_08001904(0x5c,0);
  sub_08001904(0x5d,0);
  sub_08001904(0x5e,0);
  if (*(char *)(param_1 + 0xe) == '\x02') {
    sub_08001904(0x5f,0);
  }
  DAT_02004f70 = 0x3f44;
  DAT_02004f72 = 0xc08;
  return in_lr;
}

