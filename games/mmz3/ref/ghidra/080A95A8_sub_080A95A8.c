// sub_080A95A8 at 0x080A95A8 (thumb)

undefined4 sub_080A95A8(int param_1)

{
  undefined4 in_lr;
  
  if (1 < *(byte *)(param_1 + 0x10)) {
    DAT_02002410 = DAT_02002410 & 0xbfff;
    DAT_0200241e = DAT_0200241e | 0xfe;
    DAT_03002ac0 = 0;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

