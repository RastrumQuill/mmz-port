// sub_08002030 at 0x08002030 (thumb)

undefined4 sub_08002030(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_lr;
  
  sub_08001FA8(param_1,0x800259d);
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined *)(param_1 + 0x18) = 0;
  *(undefined *)(param_1 + 0x19) = 0;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 3 | 8;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xd3 | 0x13;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xc1;
  *(ushort *)(param_1 + 0x12) = *(ushort *)(param_1 + 0x12) & 0xfe00;
  *(undefined *)(param_1 + 0x10) = 0;
  return in_lr;
}

