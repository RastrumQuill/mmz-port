// sub_080AF97C at 0x080AF97C (thumb)

undefined4 sub_080AF97C(int param_1)

{
  undefined4 in_lr;
  
  sub_080128D4();
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x78) + (DAT_0202d008 - *(int *)(param_1 + 0x7c));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

