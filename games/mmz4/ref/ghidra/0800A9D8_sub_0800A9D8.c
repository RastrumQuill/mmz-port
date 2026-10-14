// sub_0800A9D8 at 0x0800A9D8 (thumb)

undefined4 sub_0800A9D8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  uVar1 = *(int *)(param_1 + 0x5c) << 0x10;
  if (DAT_0202cab2 != 0) {
    sub_081284E4(&DAT_08b37e88,((ushort)(&DAT_02000a04)[uVar1 >> 0x14] & 0x1f00) * 8 + 0x6000000,
                 0x200);
    local_20[0] = 0;
    sub_081284E4(local_20,&DAT_06000800 + ((ushort)(&DAT_02000a04)[uVar1 >> 0x14] & 0x1f00) * 8,
                 0x1000200);
  }
  uVar1 = uVar1 >> 0x14;
  (&DAT_02000a0c)[uVar1 * 2] = (short)*(undefined4 *)(param_1 + 0x34);
  (&DAT_02000a0e)[uVar1 * 2] = (short)*(undefined4 *)(param_1 + 0x38);
  return in_lr;
}

