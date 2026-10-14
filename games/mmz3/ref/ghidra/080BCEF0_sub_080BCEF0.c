// sub_080BCEF0 at 0x080BCEF0 (thumb)

undefined4 sub_080BCEF0(int param_1)

{
  undefined4 in_lr;
  
  sub_080048A0(param_1 + 0x34,0x80bd0dd);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 3;
  *(undefined *)(param_1 + 0x77) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080BCF40(param_1);
  return in_lr;
}

