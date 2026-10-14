// sub_080E8208 at 0x080E8208 (thumb)

undefined4 sub_080E8208(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x10) < 5) && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

