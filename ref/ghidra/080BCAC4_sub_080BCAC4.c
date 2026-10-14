// sub_080BCAC4 at 0x080BCAC4 (thumb)

undefined4 sub_080BCAC4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (((char)DAT_02023664 == '\x01') && (*(char *)(param_1 + 4) != '\x01')) {
    if (*(char *)(param_1 + 6) == '\0') {
      iVar3 = DAT_02023654 + (uint)*(byte *)(param_1 + 5) * 0x40 + 2;
      uVar1 = 0;
      do {
        FUN_080006d8(&DAT_082bb274 + (short)uVar1 * 0x10,iVar3,0x10);
        uVar2 = (int)(short)uVar1 + 1;
        iVar3 = iVar3 + 0x40;
        uVar1 = uVar2 & 0xffff;
      } while ((int)(uVar2 * 0x10000) >> 0x10 < 8);
    }
    else {
      iVar3 = DAT_02023654 + (uint)*(byte *)(param_1 + 5) * 0x40 + 0x2a;
      uVar1 = 0;
      do {
        FUN_080006d8(&DAT_082bb2f4 + (short)uVar1 * 0x10,iVar3,0x10);
        uVar2 = (int)(short)uVar1 + 1;
        iVar3 = iVar3 + 0x40;
        uVar1 = uVar2 & 0xffff;
      } while ((int)(uVar2 * 0x10000) >> 0x10 < 8);
    }
  }
  return in_lr;
}

