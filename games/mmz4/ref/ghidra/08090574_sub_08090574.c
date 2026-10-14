// sub_08090574 at 0x08090574 (thumb)

undefined4 sub_08090574(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (bVar1 = *(byte *)(param_1 + 0xd), 2 < bVar1)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08090660(param_1);
    return in_lr;
  }
  if (bVar1 == 0) {
    if (*(int *)(DAT_0202dbf0 + 0x58) <= *(int *)(param_1 + 0x58)) {
      return in_lr;
    }
    if (0xa000 < (*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x5000U) {
      return in_lr;
    }
    if (0xf000 < (*(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x7800U) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0x12) = 0x40;
    return in_lr;
  }
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 >> 1 & 1) == 0) {
      iVar4 = *(int *)(param_1 + 0xb4) + 0x100;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xb4);
    }
    *(int *)(param_1 + 0x54) = iVar4;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x60) = 0;
    cVar2 = '\x01';
  }
  else {
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar4 + 0x1000);
    if (sVar3 == 0) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xd);
  }
  *(char *)(param_1 + 0xd) = cVar2 + '\x01';
  return in_lr;
}

