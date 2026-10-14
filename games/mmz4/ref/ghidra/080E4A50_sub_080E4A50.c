// sub_080E4A50 at 0x080E4A50 (thumb)

undefined4 sub_080E4A50(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  pbVar1 = (byte *)(param_1 + 0x4a);
  *pbVar1 = *pbVar1 & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *pbVar1 = *pbVar1 & 0xef | 0x10;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_088658cc + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_080E4AE4(param_1);
  return in_lr;
}

