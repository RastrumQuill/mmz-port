// sub_08056828 at 0x08056828 (thumb)

undefined4 sub_08056828(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (((*(ushort *)(iVar1 + 0x90) & 8) != 0) && (*(short *)(*(int *)(iVar1 + 0x20) + 0xc2) == 0)) {
    iVar6 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(iVar1 + 0x4c);
    *(int *)(iVar1 + 0xb8) = iVar6;
    iVar2 = 0;
    bVar5 = *(byte *)(param_1 + 0x23) & 0xf;
    if ((*(byte *)(param_1 + 0x23) & 0xf) == 0) {
      iVar2 = 8;
    }
    if ((*(ushort *)(param_1 + 0x1c) & 0x400) != 0) {
      iVar2 = 0x33;
    }
    if ((*(ushort *)(param_1 + 0x1c) & 0x800) != 0) {
      iVar2 = 0x3c;
    }
    if (bVar5 == 1) {
      iVar2 = 0x3c;
    }
    if (bVar5 == 2) {
      iVar2 = 0x18;
    }
    if (bVar5 == 3) {
      iVar2 = 0x18;
    }
    if (0 < iVar6) {
      iVar2 = -iVar2;
    }
    piVar3 = (int *)(iVar1 + 0xbc);
    iVar2 = *piVar3 + iVar2 * 0x100;
    *piVar3 = iVar2;
    iVar6 = 0x3b00;
    if ((0x3b00 < iVar2) || (iVar6 = -0x3b00, iVar2 < -0x3b00)) {
      *piVar3 = iVar6;
      puVar4 = (uint *)(*(int *)(iVar1 + 0x20) + 0xbc);
      *puVar4 = *puVar4 | 0x30;
    }
  }
  return in_lr;
}

