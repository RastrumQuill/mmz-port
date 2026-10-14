// sub_0804A44C at 0x0804A44C (thumb)

undefined4 sub_0804A44C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(uint *)(param_1 + 0x58) = (uint)*(byte *)(param_1 + 0x12) * -0x40;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0xfffffef4;
    }
    else if ((*(int *)(param_1 + 0x4c) < 0x14a001) ||
            (iVar2 = sub_08008360(*(int *)(param_1 + 0x4c) + 0x1000,*(undefined4 *)(param_1 + 0x50))
            , iVar2 - *(int *)(param_1 + 0x50) < 0xa001)) {
      uVar3 = 0x8c;
    }
    else {
      uVar3 = 0x20c;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  if (*(char *)(param_1 + 0x10) == '\x06') {
    cVar1 = sub_080065AC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (cVar1 == '\0') {
      return in_lr;
    }
    uVar4 = sub_080065AC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  else {
    cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (cVar1 == '\0') {
      return in_lr;
    }
    uVar4 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  }
  if ((uVar4 & 0xf0) == 0) {
    uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

