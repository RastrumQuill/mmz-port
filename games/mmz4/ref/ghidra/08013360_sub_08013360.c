// sub_08013360 at 0x08013360 (thumb)

undefined4 sub_08013360(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
  (&DAT_02000a0c)[uVar1 * 2] =
       (short)*(undefined4 *)(param_1 + 0x34) + (*(ushort *)(param_1 + 0x10) >> 3);
  (&DAT_02000a0e)[uVar1 * 2] = (short)((uint)(*(int *)(param_1 + 0x38) * 7) >> 3);
  return in_lr;
}

