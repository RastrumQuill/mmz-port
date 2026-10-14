// sub_080C9708 at 0x080C9708 (thumb)

undefined4 sub_080C9708(int param_1)

{
  undefined4 in_lr;
  
  sub_080048A0(param_1 + 0x34,0x80c97ed);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_080C9754(param_1);
  return in_lr;
}

