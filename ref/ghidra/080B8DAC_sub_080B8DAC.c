// sub_080B8DAC at 0x080B8DAC (thumb)

undefined4 sub_080B8DAC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0x50) =
       *(undefined4 *)(&DAT_082b86e0 + (uint)*(byte *)(param_1 + 0x11) * 8);
  sub_080B8AA4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080B8E98(param_1);
  return in_lr;
}

