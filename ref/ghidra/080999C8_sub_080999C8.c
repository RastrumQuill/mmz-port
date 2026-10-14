// sub_080999C8 at 0x080999C8 (thumb)

undefined4 sub_080999C8(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] >> 2;
  *(int *)(param_1 + 0x58) = (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] >> 2;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 1;
  return in_lr;
}

