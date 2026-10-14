// sub_0805B910 at 0x0805B910 (thumb)

void sub_0805B910(int param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xc0) + 1 & 0xff;
  *(ushort *)(param_1 + 0xc0) = (ushort)uVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + (short)(&DAT_080fe64c)[uVar1] * 8;
  return;
}

