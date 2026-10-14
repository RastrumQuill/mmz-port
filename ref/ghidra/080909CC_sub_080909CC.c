// sub_080909CC at 0x080909CC (thumb)

undefined4 sub_080909CC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_08088120();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080033F0(param_1 + 0x6c,*(char *)(param_1 + 0x11) + *(char *)(param_1 + 0x13) * '\x04');
  *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x12) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  }
  *(undefined *)(param_1 + 0x12) = 0x3c;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(uint *)(param_1 + 0x58) = (uint)*(byte *)(param_1 + 0x11) * 0x80 + -0x500;
  sub_0809097C(param_1);
  return in_lr;
}

