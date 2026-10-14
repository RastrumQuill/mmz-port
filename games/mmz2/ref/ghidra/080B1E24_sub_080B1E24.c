// sub_080B1E24 at 0x080B1E24 (thumb)

undefined4 sub_080B1E24(int param_1)

{
  undefined4 in_lr;
  
  sub_08003430(param_1 + 0x34,0x80b2559);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 3;
  *(undefined *)(param_1 + 0x7c) = 0;
  *(undefined *)(param_1 + 0x7d) = 0;
  *(undefined *)(param_1 + 0x7e) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x2000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B1E88(param_1);
  return in_lr;
}

