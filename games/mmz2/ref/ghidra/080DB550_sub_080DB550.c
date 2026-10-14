// sub_080DB550 at 0x080DB550 (thumb)

undefined4 sub_080DB550(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0x58) = 0x6800;
  sub_08012580(param_1);
  sub_080DB62C(param_1);
  return in_lr;
}

