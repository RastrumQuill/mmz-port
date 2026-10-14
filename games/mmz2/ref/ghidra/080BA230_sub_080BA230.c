// sub_080BA230 at 0x080BA230 (thumb)

undefined4 sub_080BA230(int param_1)

{
  undefined4 in_lr;
  
  sub_080128D4();
  *(int *)(param_1 + 0x58) = DAT_0202d004 + -0x400;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

