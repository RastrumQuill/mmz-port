// sub_0803D7E4 at 0x0803D7E4 (thumb)

undefined4 sub_0803D7E4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar4 + 0x54) - (int)*(short *)(&DAT_08851cd4 + *(char *)(iVar4 + 0x71) * 4);
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x54) + (int)*(short *)(&DAT_08851cd4 + *(char *)(iVar4 + 0x71) * 4);
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar4 + 0x58) + (int)*(short *)(&DAT_08851cd6 + *(char *)(iVar4 + 0x71) * 4);
  return in_lr;
}

