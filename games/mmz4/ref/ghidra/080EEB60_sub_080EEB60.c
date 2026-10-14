// sub_080EEB60 at 0x080EEB60 (thumb)

undefined4 sub_080EEB60(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CD28(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined *)(param_1 + 0x4c) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  *(undefined *)(param_1 + 0x24) = 0xd0;
  DAT_0202e0c0 = 0x33c;
  DAT_0202dec0 = 5;
  sub_08001D30(&DAT_08c44500,0x12780);
  sub_08002208(&DAT_08c4450c,(DAT_0202dec0 - 4) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080ED1D8(param_1);
  return in_lr;
}

