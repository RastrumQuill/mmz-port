// sub_080132C0 at 0x080132C0 (thumb)

undefined4 sub_080132C0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
  (&DAT_02000a0c)[uVar1 * 2] =
       (*(ushort *)(param_1 + 0x68) >> 4) -
       ((short)*(undefined4 *)(param_1 + 0x6c) - (short)*(undefined4 *)(param_1 + 0x34));
  (&DAT_02000a0e)[uVar1 * 2] = (short)((uint)(*(int *)(param_1 + 0x38) * 3) >> 2);
  return in_lr;
}

