// sub_0809AA14 at 0x0809AA14 (thumb)

undefined4 sub_0809AA14(int param_1)

{
  undefined4 in_lr;
  
  sub_08001FA8(param_1 + 0x2c,0x809ab1d);
  *(int *)(param_1 + 0x34) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0x58) = 0x14;
  *(undefined4 *)(param_1 + 0x54) = 0x14;
  DAT_030017a0 = 0xffff;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0809AA80(param_1);
  return in_lr;
}

