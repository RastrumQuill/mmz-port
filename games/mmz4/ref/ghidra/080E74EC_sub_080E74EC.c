// sub_080E74EC at 0x080E74EC (thumb)

undefined4 sub_080E74EC(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_08128884(param_1,*(undefined4 *)(&DAT_08865c34 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_080E7538(param_1);
  return in_lr;
}

