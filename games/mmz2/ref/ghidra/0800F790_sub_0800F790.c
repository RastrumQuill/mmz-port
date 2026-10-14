// sub_0800F790 at 0x0800F790 (thumb)

undefined4 sub_0800F790(void)

{
  undefined4 in_lr;
  
  DAT_0202e020 = DAT_0202e020 + '\x01';
  if (DAT_0202e020 == '-') {
    DAT_0202e020 = '\0';
  }
  if (DAT_0202e01c != '\0') {
    if (DAT_0202e030 < 0x3c0) {
      DAT_0202e030 = DAT_0202e030 + 1;
    }
  }
  sub_08002EA0(0x7e);
  sub_08002EA0(0x7f);
  sub_08002EA0(0x80);
  return in_lr;
}

