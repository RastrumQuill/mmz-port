// sub_080BA39C at 0x080BA39C (thumb)

undefined4 sub_080BA39C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0834710c)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  sub_080BA3E4(param_1);
  return in_lr;
}

