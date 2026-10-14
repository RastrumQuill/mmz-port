// sub_080B5550 at 0x080B5550 (thumb)

undefined4 sub_080B5550(int param_1)

{
  undefined4 in_lr;
  
  sub_080048A0(param_1 + 0x34,0x80b5621);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 3;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080B51A8(param_1);
  return in_lr;
}

