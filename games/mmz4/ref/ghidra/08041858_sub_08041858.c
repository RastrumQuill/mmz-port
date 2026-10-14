// sub_08041858 at 0x08041858 (thumb)

undefined4 sub_08041858(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CD28(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088524d8 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_080418AC(param_1);
  return in_lr;
}

