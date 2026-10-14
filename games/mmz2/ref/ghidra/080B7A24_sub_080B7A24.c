// sub_080B7A24 at 0x080B7A24 (thumb)

undefined4 sub_080B7A24(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B79F4();
  return in_lr;
}

