// sub_0803EAA4 at 0x0803EAA4 (thumb)

void sub_0803EAA4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xc0) + 1 & 0xff;
  *(ushort *)(param_1 + 0xc0) = (ushort)uVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + (short)(&DAT_080fe64c)[uVar1] * 8;
  return;
}

