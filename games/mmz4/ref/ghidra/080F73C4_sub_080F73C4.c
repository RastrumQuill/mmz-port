// sub_080F73C4 at 0x080F73C4 (thumb)

undefined4 sub_080F73C4(int param_1)

{
  undefined4 in_lr;
  
  sub_080E8F60(*(undefined4 *)(param_1 + 0xb4));
  sub_080E8F60(*(undefined4 *)(param_1 + 0xb8));
  sub_080E8F60(*(undefined4 *)(param_1 + 0x5c));
  sub_080E8F60(*(undefined4 *)(param_1 + 0x60));
  sub_080E8F60(*(undefined4 *)(param_1 + 100));
  sub_080E8F60(*(undefined4 *)(param_1 + 0x68));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

