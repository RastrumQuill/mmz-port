// sub_08021170 at 0x08021170 (thumb)

undefined4 sub_08021170(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x11e) < 100) {
    iVar4 = *(int *)(param_1 + 0x54);
    iVar1 = sub_080C8AD0(iVar4 * (uint)*(byte *)(param_1 + 0x11e),100);
    iVar4 = iVar4 - iVar1;
  }
  else {
    iVar4 = 0;
  }
  iVar1 = 0;
  if (DAT_02004fc4 != 0) {
    iVar1 = *(int *)(DAT_02004fc4 + 0x40);
  }
  iVar3 = *(int *)(iVar1 + 0x4c);
  iVar1 = iVar3 - *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  }
  else {
    uVar2 = (uint)(0 < iVar1);
    *(bool *)(param_1 + 0x44) = 0 < iVar1;
    if (uVar2 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  if ((uint)(iVar4 * 2) < (uint)(iVar1 + iVar4)) {
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uVar2 * 2 + -1) * iVar4;
  }
  else {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    *(int *)(param_1 + 0x4c) = iVar3;
  }
  return in_lr;
}

