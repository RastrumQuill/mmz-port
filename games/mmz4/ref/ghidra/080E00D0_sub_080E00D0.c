// sub_080E00D0 at 0x080E00D0 (thumb)

undefined4 sub_080E00D0(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CFF0();
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080E014C(param_1);
  }
  return in_lr;
}

