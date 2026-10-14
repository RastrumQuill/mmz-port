// sub_08042A44 at 0x08042A44 (thumb)

undefined4 sub_08042A44(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885265c + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_08042A80(param_1);
  return in_lr;
}

