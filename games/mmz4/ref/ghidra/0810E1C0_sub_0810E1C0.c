// sub_0810E1C0 at 0x0810E1C0 (thumb)

undefined4 sub_0810E1C0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (((char)DAT_0202f394 == '\x01') && (*(char *)(param_1 + 4) != '\x01')) {
    if (*(char *)(param_1 + 6) == '\0') {
      iVar3 = DAT_0202f384 + (uint)*(byte *)(param_1 + 5) * 0x40 + 2;
      uVar1 = 0;
      do {
        sub_08000B30(&DAT_0886e0ac + (short)uVar1 * 0xc,iVar3,0xc);
        uVar2 = (int)(short)uVar1 + 1;
        iVar3 = iVar3 + 0x40;
        uVar1 = uVar2 & 0xffff;
      } while ((int)(uVar2 * 0x10000) >> 0x10 < 6);
    }
    else {
      iVar3 = DAT_0202f384 + (uint)*(byte *)(param_1 + 5) * 0x40 + 0x2e;
      uVar1 = 0;
      do {
        sub_08000B30(&DAT_0886e0f4 + (short)uVar1 * 0xc,iVar3,0xc);
        uVar2 = (int)(short)uVar1 + 1;
        iVar3 = iVar3 + 0x40;
        uVar1 = uVar2 & 0xffff;
      } while ((int)(uVar2 * 0x10000) >> 0x10 < 6);
    }
  }
  return in_lr;
}

