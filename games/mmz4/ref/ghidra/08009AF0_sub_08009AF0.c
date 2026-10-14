// sub_08009AF0 at 0x08009AF0 (thumb)

undefined4 sub_08009AF0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    (&DAT_02000a04)[uVar1] =
         (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) | 0x44;
    *(undefined4 *)(&DAT_02000a0c + uVar1 * 2) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    sub_081284E4(&DAT_08b36e78,((ushort)(&DAT_02000a04)[uVar1] & 0x1f00) * 8 + 0x6000000,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return in_lr;
}

