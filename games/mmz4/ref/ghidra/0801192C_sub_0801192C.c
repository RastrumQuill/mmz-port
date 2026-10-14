// sub_0801192C at 0x0801192C (thumb)

undefined4 sub_0801192C(int param_1)

{
  ushort uVar1;
  short *psVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  puVar3 = (ushort *)(param_1 + 0x68);
  uVar1 = *puVar3;
  *puVar3 = uVar1 - 1;
  if ((ushort)(uVar1 - 1) < 0x40) {
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + -4;
    if (*puVar3 == 0) {
      DAT_0202dad4 = 4;
    }
  }
  else {
    psVar2 = (short *)(param_1 + 0x6a);
    if (*psVar2 < 0x100) {
      *psVar2 = *psVar2 + 4;
    }
  }
  if (*(ushort *)(param_1 + 0x68) < 4) {
    uVar1 = *(short *)(param_1 + 0x12) - 1;
    *(ushort *)(param_1 + 0x12) = uVar1;
  }
  else {
    if (7 < *(ushort *)(param_1 + 0x12)) {
      return in_lr;
    }
    uVar1 = *(ushort *)(param_1 + 0x12) + 1;
    *(ushort *)(param_1 + 0x12) = uVar1;
  }
  DAT_02000a42 = uVar1 >> 1 & 0x1f | 0x1000;
  return in_lr;
}

