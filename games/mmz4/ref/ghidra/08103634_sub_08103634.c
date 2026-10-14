// sub_08103634 at 0x08103634 (thumb)

undefined4 sub_08103634(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_08868aec;
  *(undefined2 *)(param_1 + 0x26) = 0xf;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  sub_0801CF00(param_1,0xdf01);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08103694(param_1);
  return in_lr;
}

