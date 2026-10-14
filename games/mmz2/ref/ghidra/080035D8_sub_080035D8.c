// sub_080035D8 at 0x080035D8 (thumb)

undefined4 sub_080035D8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_lr;
  
  sub_08003430(param_1,0x8003bf9);
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf;
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0xfc00;
  *(undefined *)(param_1 + 0x18) = 0;
  *(undefined *)(param_1 + 0x19) = 0;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf3 | 8;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined2 *)(param_1 + 0x1c) = 0x100;
  *(undefined2 *)(param_1 + 0x1e) = 0x100;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 1;
  *(undefined *)(param_1 + 0x16) = 0;
  *(undefined *)(param_1 + 0x11) = 0x11;
  *(ushort *)(param_1 + 0x12) = *(ushort *)(param_1 + 0x12) & 0xfe00;
  *(undefined *)(param_1 + 0x10) = 0;
  return in_lr;
}

