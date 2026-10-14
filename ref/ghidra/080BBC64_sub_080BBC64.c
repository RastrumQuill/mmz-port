// sub_080BBC64 at 0x080BBC64 (thumb)

undefined4 sub_080BBC64(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080B8AA4(param_1);
  sub_080033F0(param_1 + 0x6c,(&DAT_082b8f30)[(uint)*(byte *)(param_1 + 0x10) * 2]);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080BBCBC(param_1);
  return in_lr;
}

