// sub_080B43AC at 0x080B43AC (thumb)

undefined4 sub_080B43AC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x04') {
    sub_080B3EFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),3);
  }
  else {
    sub_080B3EFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),2);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

