// sub_080B7228 at 0x080B7228 (thumb)

undefined4 sub_080B7228(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 0x10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x20) + 0x17a) =
       *(byte *)(*(int *)(param_1 + 0x20) + 0x17a) |
       (&DAT_082b832a)[(uint)*(byte *)(param_1 + 0x11) * 4];
  if (*(char *)(param_1 + 0x10) == '\x1c') {
    DAT_02022ae0 = DAT_02022ae0 | 0x20;
  }
  sub_080B4434(*(undefined4 *)(param_1 + 0x20),param_1);
  DAT_02022878 = 0;
  return in_lr;
}

