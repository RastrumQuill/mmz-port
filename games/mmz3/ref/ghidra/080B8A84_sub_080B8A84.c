// sub_080B8A84 at 0x080B8A84 (thumb)

undefined4 sub_080B8A84(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0836b274)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(undefined *)(param_1 + 0x22) = *(undefined *)(param_1 + 0x12);
  sub_080B8AD4(param_1);
  return in_lr;
}

