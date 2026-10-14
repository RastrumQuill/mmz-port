// sub_08004230 at 0x08004230 (thumb)

undefined4 sub_08004230(int param_1)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = param_1 * 0x10000 + 0x10000U >> 0x10;
  iVar2 = 0;
  if (DAT_02002260 != uVar3) {
    puVar1 = &DAT_02002260;
    do {
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 1;
      if (0xf < iVar2) break;
    } while (*puVar1 != uVar3);
  }
  if (iVar2 != 0x10) {
    (&DAT_02002260)[iVar2] = 0;
  }
  return in_lr;
}

