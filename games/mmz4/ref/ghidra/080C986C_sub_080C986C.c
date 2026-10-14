// sub_080C986C at 0x080C986C (thumb)

undefined4 sub_080C986C(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_08128884(param_1,*(undefined4 *)(&DAT_08862d2c + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_080C98B4(param_1);
  return in_lr;
}

