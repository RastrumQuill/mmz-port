// sub_080E4BBC at 0x080E4BBC (thumb)

undefined4 sub_080E4BBC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0x22) = 1;
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836e5c0 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_080E4C1C(param_1);
  return in_lr;
}

