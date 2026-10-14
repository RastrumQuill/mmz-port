// sub_080933B0 at 0x080933B0 (thumb)

undefined4 sub_080933B0(int param_1)

{
  undefined4 in_lr;
  
  sub_08001FA8(param_1 + 0x2c,0x8093469);
  *(int *)(param_1 + 0x34) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080929E0(param_1);
  return in_lr;
}

