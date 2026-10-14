// sub_08011604 at 0x08011604 (thumb)

undefined4 sub_08011604(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if (*(ushort *)(param_1 + 0x10) < 0x20) {
    uVar1 = *(ushort *)(param_1 + 0x10) + 1;
    *(ushort *)(param_1 + 0x10) = uVar1;
    DAT_02000a42 = uVar1 >> 4 & 0x1f | 0x1000;
  }
  return in_lr;
}

