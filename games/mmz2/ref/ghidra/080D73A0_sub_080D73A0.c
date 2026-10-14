// sub_080D73A0 at 0x080D73A0 (thumb)

undefined4 sub_080D73A0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    DAT_0202e180 = DAT_0202e180 + 0x20;
  }
  else {
    DAT_0202e180 = DAT_0202e180 + 0x100;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 8);
  sub_080D73E8(param_1);
  return in_lr;
}

