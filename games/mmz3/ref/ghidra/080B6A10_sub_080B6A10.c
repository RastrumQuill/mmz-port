// sub_080B6A10 at 0x080B6A10 (thumb)

undefined4 sub_080B6A10(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0836b070)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_080176EC(param_1);
  }
  sub_080B6A64(param_1);
  return in_lr;
}

