// sub_080390B8 at 0x080390B8 (thumb)

undefined4 sub_080390B8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 0x215);
  *(byte *)(param_1 + 0x12) = bVar1;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(undefined *)(param_1 + 0x13) = 0;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_083360b8 + (uint)bVar1 * 4));
  sub_0803910C(param_1);
  return in_lr;
}

