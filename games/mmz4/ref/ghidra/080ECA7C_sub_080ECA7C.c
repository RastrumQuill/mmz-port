// sub_080ECA7C at 0x080ECA7C (thumb)

undefined4 sub_080ECA7C(int param_1)

{
  undefined4 in_lr;
  
  sub_08001D30(&DAT_08c45108,(DAT_0202e1f4 - 0x1e0) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c45114,(DAT_0202dff4 - 10) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801CF00(param_1,0xda00);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  *(undefined *)(param_1 + 0x25) = 0x1f;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080EC90C(param_1);
  return in_lr;
}

