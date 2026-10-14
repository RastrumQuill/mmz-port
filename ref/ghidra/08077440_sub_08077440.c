// sub_08077440 at 0x08077440 (thumb)

undefined4 sub_08077440(int param_1)

{
  undefined4 in_lr;
  
  sub_08076590();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082b1a10)[*(byte *)(param_1 + 0x10)];
  sub_08077494(param_1);
  return in_lr;
}

