// sub_080B7A44 at 0x080B7A44 (thumb)

undefined4 sub_080B7A44(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  sub_080B7A0C();
  return in_lr;
}

