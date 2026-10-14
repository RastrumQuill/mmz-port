// sub_080C5148 at 0x080C5148 (thumb)

undefined4 sub_080C5148(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb8) = 0;
  sub_0801CC9C(param_1);
  sub_080C52F0(param_1);
  return in_lr;
}

