// sub_080BF1F4 at 0x080BF1F4 (thumb)

undefined4 sub_080BF1F4(int param_1)

{
  undefined4 in_lr;
  
  sub_08012A14();
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

