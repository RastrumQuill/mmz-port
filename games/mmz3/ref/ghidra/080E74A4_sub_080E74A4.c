// sub_080E74A4 at 0x080E74A4 (thumb)

undefined4 sub_080E74A4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836e928 + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_080E7510(param_1);
  return in_lr;
}

