// sub_080BD540 at 0x080BD540 (thumb)

undefined4 sub_080BD540(int param_1)

{
  undefined4 in_lr;
  
  sub_08003430(param_1 + 0x34,0x80bd685);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  sub_08002638(&DAT_08433854,(DAT_0202e6b2 - 8) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433860,(DAT_0202e4b2 - 0xe) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x9400;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080BD5EC(param_1);
  return in_lr;
}

