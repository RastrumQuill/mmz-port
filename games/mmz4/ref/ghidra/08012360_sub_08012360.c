// sub_08012360 at 0x08012360 (thumb)

undefined4 sub_08012360(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if ((DAT_0202cac0 & 0xf) == 3) {
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    (&DAT_02000a0c)[uVar1 * 2] =
         ((short)*(undefined4 *)(param_1 + 0x34) * 2 + (*(ushort *)(param_1 + 0x10) >> 8)) -
         (short)*(undefined4 *)(param_1 + 0x3c);
    (&DAT_02000a0e)[uVar1 * 2] =
         ((short)uVar2 * 2 + (*(ushort *)(param_1 + 0x12) >> 8)) - (short)uVar3;
  }
  return in_lr;
}

