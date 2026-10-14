// sub_08053D4C at 0x08053D4C (thumb)

undefined4 sub_08053D4C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x2c00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08054FBC(param_1);
  if ((DAT_0202e918 & 8) == 0) {
    sub_08054FFC(param_1);
  }
  return in_lr;
}

