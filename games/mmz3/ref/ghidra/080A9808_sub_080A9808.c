// sub_080A9808 at 0x080A9808 (thumb)

undefined4 sub_080A9808(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08017700(param_1,0x5f01);
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080A9590(param_1);
  return in_lr;
}

