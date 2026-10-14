// sub_08021D7C at 0x08021D7C (thumb)

undefined4 sub_08021D7C(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 8) = param_2;
  DAT_020301b2 = DAT_020301b2 | 1;
  DAT_02002420 = 0;
  if (DAT_0202f5bc != 0) {
    DAT_02030108 = DAT_02030108 & 0xf7;
    sub_0800465C();
    DAT_0202f5bc = 0;
  }
  sub_08004768(0x25);
  sub_08004768(0x26);
  return in_lr;
}

