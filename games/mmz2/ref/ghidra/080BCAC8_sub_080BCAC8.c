// sub_080BCAC8 at 0x080BCAC8 (thumb)

undefined4 sub_080BCAC8(int param_1)

{
  undefined4 in_lr;
  
  sub_08002638(&DAT_08390f54,(DAT_02000f94 & 0xc) << 0xc);
  sub_08002AEC(&DAT_08390f60,0);
  DAT_02000fd0 = 0x3f41;
  DAT_02000fd2 = 0x1010;
  sub_08003430(param_1 + 0x34,0x80bcba9);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BCB48(param_1);
  return in_lr;
}

