// sub_08011CE4 at 0x08011CE4 (thumb)

undefined4 sub_08011CE4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((DAT_0202cac0 & 0xf) == 3) {
    uVar2 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    (&DAT_02000a0c)[uVar2 * 2] =
         (*(ushort *)(param_1 + 0x68) >> 4) -
         ((short)*(undefined4 *)(param_1 + 0x6c) - (short)*(undefined4 *)(param_1 + 0x34));
    (&DAT_02000a0e)[uVar2 * 2] =
         (short)*(undefined4 *)(param_1 + 0x50) +
         (short)((uint)(*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38)) >> 8);
    iVar1 = *(int *)(param_1 + 0x70) - (uint)(ushort)(&DAT_02000a0e)[uVar2 * 2];
    if (iVar1 < 0x100) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0xff;
    }
    DAT_02000a5a = (ushort)iVar1 & 0xff;
  }
  return in_lr;
}

