// sub_080B506C at 0x080B506C (thumb)

undefined4 sub_080B506C(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x3204);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  pbVar1 = (byte *)(param_1 + 0x4a);
  *pbVar1 = *pbVar1 & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
  *(undefined *)(param_1 + 0x4d) = 0;
  *pbVar1 = *pbVar1 & 0xdf;
  *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0x7d);
  *(undefined4 *)(param_1 + 0x5c) = 0x100;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B4F4C(param_1);
  return in_lr;
}

