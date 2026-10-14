// sub_080E62BC at 0x080E62BC (thumb)

undefined4 sub_080E62BC(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_08128884(param_1,*(undefined4 *)(&DAT_08865a74 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_080E6308(param_1);
  return in_lr;
}

