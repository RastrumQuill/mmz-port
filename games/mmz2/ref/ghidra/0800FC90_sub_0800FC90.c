// sub_0800FC90 at 0x0800FC90 (thumb)

undefined4 sub_0800FC90(int *param_1)

{
  undefined4 in_lr;
  
  if (0xd3000 < *param_1) {
    DAT_0202e01c = '\x01';
    if (DAT_0202e02c < 0x7e0) {
      DAT_0202e02c = 0x7e0;
    }
  }
  if (DAT_0202e01c != '\0') {
    if (DAT_0202e02c < 0x840) {
      DAT_0202e02c = DAT_0202e02c + 1;
    }
  }
  if (*param_1 < 0xb4000) {
    DAT_0202d004 = 0x7fffffff;
  }
  else {
    DAT_0202d004 = (DAT_0202e02c >> 1) * -0x100 + 0x54000;
  }
  sub_08002EA0(0x7e);
  sub_08002EA0(0x7f);
  sub_08002EA0(0x80);
  return in_lr;
}

