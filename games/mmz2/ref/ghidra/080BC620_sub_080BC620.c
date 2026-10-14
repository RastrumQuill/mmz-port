// sub_080BC620 at 0x080BC620 (thumb)

void sub_080BC620(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  return;
}

