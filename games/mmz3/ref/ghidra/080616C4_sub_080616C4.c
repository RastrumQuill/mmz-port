// sub_080616C4 at 0x080616C4 (thumb)

undefined4 sub_080616C4(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 0xc0) + 1 & 0xff;
  *(ushort *)(param_1 + 0xc0) = (ushort)uVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + (short)(&DAT_080fe64c)[uVar1] * 4;
  uVar1 = *(ushort *)(param_1 + 0xc2) + 2 & 0xff;
  *(ushort *)(param_1 + 0xc2) = (ushort)uVar1;
  iVar2 = *(int *)(param_1 + 100) + (short)(&DAT_080fe64c)[uVar1] * 8;
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x60) =
       *(int *)(param_1 + 0x60) + ((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60)) * 8 >> 8);
  *(int *)(param_1 + 0x5c) = iVar2;
  return in_lr;
}

