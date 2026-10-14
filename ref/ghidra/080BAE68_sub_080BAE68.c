// sub_080BAE68 at 0x080BAE68 (thumb)

undefined4 sub_080BAE68(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 4);
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8be8 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

