// sub_080DF1EC at 0x080DF1EC (thumb)

undefined4 sub_080DF1EC(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (((char)DAT_0202f664 == '\x01') && (*(char *)(param_1 + 4) != '\x01')) {
    if (*(char *)(param_1 + 6) == '\0') {
      iVar3 = DAT_0202f654 + (uint)*(byte *)(param_1 + 5) * 0x40 + 2;
      uVar1 = 0;
      do {
        sub_08000988(&DAT_0834f3bc + (short)uVar1 * 0xc,iVar3,0xc);
        uVar2 = (int)(short)uVar1 + 1;
        iVar3 = iVar3 + 0x40;
        uVar1 = uVar2 & 0xffff;
      } while ((int)(uVar2 * 0x10000) >> 0x10 < 6);
    }
    else {
      iVar3 = DAT_0202f654 + (uint)*(byte *)(param_1 + 5) * 0x40 + 0x2e;
      uVar1 = 0;
      do {
        sub_08000988(&DAT_0834f41c + (short)uVar1 * 0xc,iVar3,0xc);
        uVar2 = (int)(short)uVar1 + 1;
        iVar3 = iVar3 + 0x40;
        uVar1 = uVar2 & 0xffff;
      } while ((int)(uVar2 * 0x10000) >> 0x10 < 6);
    }
  }
  return in_lr;
}

