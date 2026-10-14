// sub_080AF84C at 0x080AF84C (thumb)

undefined4 sub_080AF84C(int param_1)

{
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

