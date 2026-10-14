// sub_080BA84C at 0x080BA84C (thumb)

undefined4 sub_080BA84C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0x50) = 0x4800;
  sub_080B8AA4(param_1);
  sub_080033F0(param_1 + 0x6c,4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080BA89C(param_1);
  return in_lr;
}

