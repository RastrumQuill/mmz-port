// sub_0800D4B4 at 0x0800D4B4 (thumb)

undefined4 sub_0800D4B4(char param_1)

{
  undefined4 in_lr;
  
  if (param_1 == '\0') {
    sub_080086AC(0xf,7,0xc2);
    sub_080086AC(0x10,7,0xc3);
    sub_080086AC(0xf,8,0xc0);
    sub_080086AC(0x10,8,0xc1);
  }
  else if (param_1 == '\x01') {
    sub_080086AC(0x17,6,0xc2);
    sub_080086AC(0x18,6,199);
    sub_080086AC(0x17,7,0xc4);
    sub_080086AC(0x18,7,0xc5);
  }
  else if (param_1 == '\x02') {
    sub_080086AC(0x1b,2,0xc2);
    sub_080086AC(0x1c,2,0xc3);
    sub_080086AC(0x1b,3,200);
    sub_080086AC(0x1c,3,0xc9);
  }
  else if (param_1 == '\x03') {
    sub_080086AC(0x13,2,0xc2);
    sub_080086AC(0x14,2,0xc3);
    sub_080086AC(0x13,3,0xca);
    sub_080086AC(0x14,3,0xcb);
  }
  return in_lr;
}

