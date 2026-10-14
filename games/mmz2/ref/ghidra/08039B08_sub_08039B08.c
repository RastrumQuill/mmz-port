// sub_08039B08 at 0x08039B08 (thumb)

undefined4 sub_08039B08(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
  bVar1 = *(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_083363e0 + (bVar1 & 1) * 2));
  sub_08039B60(param_1);
  return in_lr;
}

