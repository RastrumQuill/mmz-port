// sub_080DB9D8 at 0x080DB9D8 (thumb)

undefined4 sub_080DB9D8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0x58) = 0x5000;
  sub_08012580(param_1);
  sub_080DBA64(param_1);
  return in_lr;
}

