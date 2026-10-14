// sub_0800D70C at 0x0800D70C (thumb)

undefined4 sub_0800D70C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  uVar1 = *(uint *)(param_1 + 0x5c) << 0x10;
  if (DAT_0202dad5 != '\0') {
    DAT_02000a00 = DAT_02000a00 & ~(ushort)((*(uint *)(param_1 + 0x5c) & 0xffff) << 8);
  }
  if (DAT_0202cab2 != 0) {
    local_20[0] = 0;
    sub_081284E4(local_20,((ushort)(&DAT_02000a04)[uVar1 >> 0x14] & 0x1f00) * 8 + 0x6000000,
                 0x1000200);
    sub_081284E4(&DAT_08b605f0,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar1 >> 0x14] & 0x1f00) * 8
                 ,0x200);
  }
  uVar1 = uVar1 >> 0x14;
  (&DAT_02000a0c)[uVar1 * 2] =
       (short)*(undefined4 *)(param_1 + 0x4c) +
       (short)((uint)(*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34)) >> 8);
  (&DAT_02000a0e)[uVar1 * 2] =
       (short)*(undefined4 *)(param_1 + 0x50) +
       (short)((uint)(*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38)) >> 8);
  return in_lr;
}

