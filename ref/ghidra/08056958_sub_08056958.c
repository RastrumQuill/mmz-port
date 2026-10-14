// sub_08056958 at 0x08056958 (thumb)

undefined4 sub_08056958(int param_1)

{
  byte bVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x40);
  if ((*(ushort *)(iVar4 + 0x90) & 8) != 0) {
    sVar3 = 0;
    bVar1 = *(byte *)(param_1 + 0x23) & 0xf;
    if ((*(byte *)(param_1 + 0x23) & 0xf) == 0) {
      sVar3 = 3;
    }
    if ((*(ushort *)(param_1 + 0x1c) & 0x400) != 0) {
      sVar3 = 5;
    }
    if ((*(ushort *)(param_1 + 0x1c) & 0x800) != 0) {
      sVar3 = 9;
    }
    if (bVar1 == 1) {
      sVar3 = 3;
    }
    if (bVar1 == 2) {
      sVar3 = 5;
    }
    if (bVar1 == 3) {
      sVar3 = 5;
    }
    if (0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(iVar4 + 0x4c)) {
      sVar3 = -sVar3;
    }
    psVar2 = (short *)(*(int *)(iVar4 + 0x20) + 0xc2);
    *psVar2 = *psVar2 + sVar3 * 0x100;
  }
  return in_lr;
}

