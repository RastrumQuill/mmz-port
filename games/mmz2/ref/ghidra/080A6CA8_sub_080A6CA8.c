// sub_080A6CA8 at 0x080A6CA8 (thumb)

undefined4 sub_080A6CA8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0834525c)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  *(undefined *)(param_1 + 0xb6) = 0;
  sub_080A6CF8(param_1);
  return in_lr;
}

