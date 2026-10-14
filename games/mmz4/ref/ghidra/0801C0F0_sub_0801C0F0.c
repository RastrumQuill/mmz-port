// sub_0801C0F0 at 0x0801C0F0 (thumb)

undefined4 sub_0801C0F0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  short *psVar3;
  undefined4 in_lr;
  
  puVar2 = (ushort *)(param_1 + 0x68);
  uVar1 = *puVar2;
  *puVar2 = uVar1 - 1;
  if ((ushort)(uVar1 - 1) < 0x40) {
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 4;
    if (*puVar2 == 0) {
      DAT_0202dad5 = DAT_0202dad5 + '\x01';
    }
  }
  else {
    psVar3 = (short *)(param_1 + 0x6a);
    if (-0x100 < *psVar3) {
      *psVar3 = *psVar3 + -4;
    }
  }
  if (*(ushort *)(param_1 + 0x68) < 4) {
    uVar1 = *(short *)(param_1 + 0x12) - 1;
  }
  else {
    if (7 < *(ushort *)(param_1 + 0x12)) {
      return in_lr;
    }
    uVar1 = *(ushort *)(param_1 + 0x12) + 1;
  }
  *(ushort *)(param_1 + 0x12) = uVar1;
  DAT_02000a42 = uVar1 >> 1 & 0x1f | 0x1000;
  return in_lr;
}

