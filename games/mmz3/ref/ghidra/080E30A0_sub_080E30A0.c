// sub_080E30A0 at 0x080E30A0 (thumb)

undefined4 sub_080E30A0(int param_1)

{
  undefined4 in_lr;
  
  sub_080177F4();
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
  sub_080E30CC(param_1);
  return in_lr;
}

