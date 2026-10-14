// sub_080B2DF0 at 0x080B2DF0 (thumb)

undefined4 sub_080B2DF0(int param_1)

{
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 2;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080B2E3C(param_1);
  return in_lr;
}

