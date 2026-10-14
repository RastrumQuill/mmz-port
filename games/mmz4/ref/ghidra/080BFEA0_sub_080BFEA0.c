// sub_080BFEA0 at 0x080BFEA0 (thumb)

undefined4 sub_080BFEA0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xb4) == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    sub_08002B10(0x38);
    *(char *)(param_1 + 0xb4) = '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080BFEF8(param_1);
  }
  return in_lr;
}

