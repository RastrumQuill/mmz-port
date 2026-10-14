// sub_080E1CD4 at 0x080E1CD4 (thumb)

undefined4 sub_080E1CD4(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CFF0();
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080E1D08(param_1);
  }
  return in_lr;
}

