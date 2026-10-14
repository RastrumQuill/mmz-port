// sub_080B9BF8 at 0x080B9BF8 (thumb)

undefined4 sub_080B9BF8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0x50) =
       *(undefined4 *)(&DAT_082b8834 + (uint)*(byte *)(param_1 + 0x10) * 8);
  sub_080B8AA4(param_1);
  sub_080B9C44(param_1);
  return in_lr;
}

