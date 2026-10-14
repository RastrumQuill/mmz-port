// sub_080AFDAC at 0x080AFDAC (thumb)

undefined4 sub_080AFDAC(int param_1)

{
  undefined4 in_lr;
  
  sub_08003430(param_1 + 0x34,0x80afeed);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 3;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080AFD74(param_1);
  return in_lr;
}

