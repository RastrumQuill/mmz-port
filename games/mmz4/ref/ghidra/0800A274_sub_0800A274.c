// sub_0800A274 at 0x0800A274 (thumb)

undefined4 sub_0800A274(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
  (&DAT_02000a0c)[uVar1 * 2] = (short)*(undefined4 *)(param_1 + 0x34);
  (&DAT_02000a0e)[uVar1 * 2] = *(ushort *)(param_1 + 0x10) >> 2;
  uVar1 = sub_08128A9C(*(ushort *)(param_1 + 0x12) >> 3,6);
  sub_08001EA4(&UNK_08fa43c4 + (uint)(byte)(&DAT_08829c10)[uVar1 & 0xffff] * 0x14,0x4000);
  uVar1 = sub_08128A9C(*(ushort *)(param_1 + 0x12) >> 3,6);
  sub_08002208(&UNK_08fa43d0 + (uint)(byte)(&DAT_08829c10)[uVar1 & 0xffff] * 0x14,0);
  return in_lr;
}

