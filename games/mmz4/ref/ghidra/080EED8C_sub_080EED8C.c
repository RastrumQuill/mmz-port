// sub_080EED8C at 0x080EED8C (thumb)

undefined4 sub_080EED8C(int param_1)

{
  undefined4 in_lr;
  
  DAT_0202e138 = 0x36d;
  DAT_0202df38 = 5;
  sub_08001D30(&DAT_08c449b0,0x12da0);
  sub_08002208(&DAT_08c449bc,(DAT_0202df38 - 4) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080ED1D8(param_1);
  return in_lr;
}

