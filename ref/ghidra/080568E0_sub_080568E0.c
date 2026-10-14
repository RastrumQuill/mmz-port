// sub_080568E0 at 0x080568E0 (thumb)

undefined4 sub_080568E0(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x40);
  if ((*(ushort *)(iVar3 + 0x90) & 8) != 0) {
    sVar2 = 0;
    bVar1 = *(byte *)(param_1 + 0x23) & 0xf;
    if ((*(byte *)(param_1 + 0x23) & 0xf) == 0) {
      sVar2 = 3;
    }
    if ((*(ushort *)(param_1 + 0x1c) & 0x400) != 0) {
      sVar2 = 5;
    }
    if ((*(ushort *)(param_1 + 0x1c) & 0x800) != 0) {
      sVar2 = 9;
    }
    if (bVar1 == 1) {
      sVar2 = 3;
    }
    if (bVar1 == 2) {
      sVar2 = 5;
    }
    if (bVar1 == 3) {
      sVar2 = 5;
    }
    if (0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(iVar3 + 0x4c)) {
      sVar2 = -sVar2;
    }
    *(short *)(iVar3 + 0xc2) = *(short *)(iVar3 + 0xc2) + sVar2 * 0x100;
  }
  return in_lr;
}

