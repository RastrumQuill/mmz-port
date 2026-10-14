// sub_080AE88C at 0x080AE88C (thumb)

undefined4 sub_080AE88C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x04') {
    sub_080AE3DC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),3);
  }
  else {
    sub_080AE3DC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),2);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

