// sub_080C3B80 at 0x080C3B80 (thumb)

undefined4 sub_080C3B80(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  sub_0801CC9C(param_1);
  sub_080C3C1C(param_1);
  return in_lr;
}

