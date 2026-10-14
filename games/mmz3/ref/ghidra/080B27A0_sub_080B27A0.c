// sub_080B27A0 at 0x080B27A0 (thumb)

undefined4 sub_080B27A0(int param_1)

{
  undefined4 in_lr;
  
  sub_080177F4();
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

