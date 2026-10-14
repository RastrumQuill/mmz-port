// sub_080DCE94 at 0x080DCE94 (thumb)

undefined4 sub_080DCE94(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CFF0();
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DC9FC(param_1);
  }
  return in_lr;
}

