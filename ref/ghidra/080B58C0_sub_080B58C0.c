// sub_080B58C0 at 0x080B58C0 (thumb)

undefined4 sub_080B58C0(int param_1)

{
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 0xc4) == 0) {
    sub_08099D0C(param_1,2);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 0x10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  return in_lr;
}

