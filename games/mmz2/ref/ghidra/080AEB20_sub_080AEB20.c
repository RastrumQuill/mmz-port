// sub_080AEB20 at 0x080AEB20 (thumb)

undefined4 sub_080AEB20(int param_1)

{
  undefined4 in_lr;
  
  sub_08012580();
  sub_080127E4(param_1,0x9305);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080AEB60(param_1);
  return in_lr;
}

