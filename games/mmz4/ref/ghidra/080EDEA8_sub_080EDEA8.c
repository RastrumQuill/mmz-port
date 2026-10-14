// sub_080EDEA8 at 0x080EDEA8 (thumb)

undefined4 sub_080EDEA8(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08866630,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  DAT_0202e0c0 = 0x36d;
  DAT_0202dec0 = 5;
  sub_08001D30(&DAT_08c44500,0x12da0);
  sub_08002208(&DAT_08c4450c,(DAT_0202dec0 - 4) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0x11);
  sub_080ED1D8(param_1);
  return in_lr;
}

