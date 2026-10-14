// sub_080E6C58 at 0x080E6C58 (thumb)

undefined4 sub_080E6C58(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(uint *)(param_1 + 0x54) = (*(byte *)(param_1 + 0x10) & 3) * 0x1800 + 0x11000;
  *(uint *)(param_1 + 0x58) = (uint)(*(byte *)(param_1 + 0x10) >> 2) * 0x1800 + 0x1c00;
  sub_080E6CD0();
  return in_lr;
}

