// sub_080BA7B8 at 0x080BA7B8 (thumb)

undefined4 sub_080BA7B8(int param_1)

{
  undefined4 in_lr;
  
  sub_0801749C();
  *(undefined4 *)(param_1 + 0x7c) = 0x100;
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 0x7c);
  *(undefined *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 6;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

