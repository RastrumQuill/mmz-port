// sub_08033358 at 0x08033358 (thumb)

undefined4 sub_08033358(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0xbc);
  if (iVar3 != iVar2) {
    *(bool *)(param_1 + 0x4c) = iVar2 < iVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (iVar2 < iVar3) << 4;
    if (iVar2 < iVar3) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  return in_lr;
}

