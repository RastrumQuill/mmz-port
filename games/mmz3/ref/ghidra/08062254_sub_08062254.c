// sub_08062254 at 0x08062254 (thumb)

undefined4 sub_08062254(int param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 8) != 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x20000) == 0) {
      sVar2 = *(short *)(param_1 + 0xba) + 0x800;
      *(short *)(param_1 + 0xba) = sVar2;
      sVar1 = (ushort)*(byte *)(param_1 + 0xc0) << 0xc;
    }
    else {
      sVar2 = *(short *)(param_1 + 0xba) + 0x4000;
      *(short *)(param_1 + 0xba) = sVar2;
      sVar1 = (ushort)*(byte *)(param_1 + 0xc0) << 0xf;
    }
    psVar3 = (short *)(param_1 + 0xba);
    *psVar3 = sVar2 - sVar1;
    if (*psVar3 < -0x4000) {
      *psVar3 = -0x4000;
    }
    else if (0x4000 < *psVar3) {
      *psVar3 = 0x4000;
    }
  }
  return in_lr;
}

