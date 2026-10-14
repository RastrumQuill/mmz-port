// sub_08094DA0 at 0x08094DA0 (thumb)

undefined4 sub_08094DA0(int param_1)

{
  undefined4 in_lr;
  
  sub_08001FA8(param_1 + 0x2c,0x8094eb9);
  *(int *)(param_1 + 0x34) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0x54) = 0x14;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08094DF8(param_1);
  return in_lr;
}

