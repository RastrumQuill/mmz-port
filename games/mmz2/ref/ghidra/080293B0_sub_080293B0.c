// sub_080293B0 at 0x080293B0 (thumb)

undefined4 sub_080293B0(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x182) < 100) {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar1 = sub_080EF150(iVar3 * (uint)*(byte *)(param_1 + 0x182),100);
    iVar3 = iVar3 - iVar1;
  }
  else {
    iVar3 = 0;
  }
  iVar1 = 0;
  if (DAT_03003910 != 0) {
    iVar1 = *(int *)(DAT_03003910 + 0x2c);
  }
  iVar1 = *(int *)(iVar1 + 0x54);
  iVar4 = iVar1 - *(int *)(param_1 + 0x54);
  if (iVar4 == 0) {
    bVar2 = (bool)(*(byte *)(param_1 + 10) >> 4 & 1);
  }
  else {
    bVar2 = 0 < iVar4;
    *(bool *)(param_1 + 0x4c) = bVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
    if (bVar2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  if ((uint)(iVar3 * 2) < (uint)(iVar4 + iVar3)) {
    if (bVar2 == false) {
      iVar3 = -iVar3;
    }
    iVar1 = *(int *)(param_1 + 0x54) + iVar3;
  }
  else {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  return in_lr;
}

