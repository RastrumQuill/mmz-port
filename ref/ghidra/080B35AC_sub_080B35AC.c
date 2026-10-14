// sub_080B35AC at 0x080B35AC (thumb)

undefined4 sub_080B35AC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6d68)[*(byte *)(param_1 + 9)] + 4);
  sub_080B35CC();
  return in_lr;
}

