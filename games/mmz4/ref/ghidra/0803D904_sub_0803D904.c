// sub_0803D904 at 0x0803D904 (thumb)

undefined4 sub_0803D904(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  uVar4 = ~(uint)(*(byte *)(iVar5 + 10) >> 4) & 1;
  if (uVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar5 + 0x54);
    iVar3 = -0xe00;
  }
  else {
    iVar2 = *(int *)(iVar5 + 0x54);
    iVar3 = 0xe00;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x1300;
  return in_lr;
}

