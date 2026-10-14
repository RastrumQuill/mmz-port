// sub_080D8BAC at 0x080D8BAC (thumb)

undefined4 sub_080D8BAC(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08864c2c + (uint)*(byte *)(param_1 + 0x11) * 4));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D8BF8(param_1);
  return in_lr;
}

