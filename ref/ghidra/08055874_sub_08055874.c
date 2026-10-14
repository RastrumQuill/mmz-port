// sub_08055874 at 0x08055874 (thumb)

undefined4 sub_08055874(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0xbc);
  if ((iVar4 != 0) && ((*(uint *)(iVar2 + 0xbc) & 0x20) == 0)) {
    if (iVar4 < 1) {
      iVar4 = iVar4 + 0x100;
    }
    else {
      iVar4 = iVar4 + -0x100;
    }
  }
  iVar5 = iVar4;
  if (iVar4 < 0) {
    iVar5 = -iVar4;
  }
  if (iVar5 < 8) {
    uVar3 = *(uint *)(iVar2 + 0xbc);
    if ((uVar3 & 0x10) != 0) {
      *(uint *)(iVar2 + 0xbc) = uVar3 & 0xffffffef | 0x40;
    }
  }
  *(int *)(param_1 + 0xbc) = iVar4;
  iVar5 = iVar4;
  if (iVar4 < 0) {
    iVar5 = -iVar4;
  }
  if (iVar5 < 0x100) {
    cVar1 = '\0';
  }
  else {
    iVar5 = (int)(((iVar4 >> 8 & 0xffU) - (uint)*(byte *)(param_1 + 0x12)) * 0x1000000) >> 0x18;
    iVar4 = iVar5;
    if (iVar5 < 0) {
      iVar4 = -iVar5;
    }
    if (0x7f < iVar4) {
      iVar5 = iVar5 + -0x100;
    }
    cVar1 = *(byte *)(param_1 + 0x12) + (char)(iVar5 >> 1);
  }
  *(char *)(param_1 + 0x12) = cVar1;
  *(char *)(param_1 + 0x1f) = cVar1;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
  *(int *)(param_1 + 0x50) = *(int *)(iVar2 + 0x50) + -0x900;
  return in_lr;
}

