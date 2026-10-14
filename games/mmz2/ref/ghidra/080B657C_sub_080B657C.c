// sub_080B657C at 0x080B657C (thumb)

undefined4 sub_080B657C(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined *)(param_1 + 0x12) = 0x3c;
  *(undefined *)(param_1 + 0x13) = 0x1e;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B65AC();
  return in_lr;
}

