// sub_08101B34 at 0x08101B34 (thumb)

undefined4 sub_08101B34(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  DAT_0202e1da = 0x1e0;
  DAT_0202dfda = 10;
  sub_08001D30(&DAT_08c45004,0xfc00);
  sub_08002208(&DAT_08c45010,(DAT_0202dfda - 4) * 0x20 + 0x200);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  sub_08101BC4(param_1);
  return in_lr;
}

