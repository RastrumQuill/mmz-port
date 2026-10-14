// sub_080B64B0 at 0x080B64B0 (thumb)

undefined4 sub_080B64B0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    DAT_02022888 = DAT_02022888 + 0x20;
  }
  else {
    DAT_02022888 = DAT_02022888 + 0x100;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 8);
  sub_080B64F8(param_1);
  return in_lr;
}

