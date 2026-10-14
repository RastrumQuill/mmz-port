// sub_08052564 at 0x08052564 (thumb)

undefined4 sub_08052564(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    cVar1 = *(char *)(param_1 + 0x13);
    if (cVar1 != '\0') {
      cVar1 = '\x01';
    }
    *(char *)(param_1 + 0x12) = cVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar4;
  iVar2 = *(int *)(param_1 + 0x54) * 0xfa;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar2 >> 8;
  iVar2 = sub_0800869C(iVar4,*(undefined4 *)(param_1 + 0x50));
  iVar2 = iVar2 + 0x800;
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar1 != '\0') {
    iVar4 = *(int *)(param_1 + 0x50) - iVar2;
    if (iVar4 < 0) {
      iVar4 = iVar2 - *(int *)(param_1 + 0x50);
    }
    if (0x1000 < iVar4) {
      *(undefined *)(param_1 + 0x12) = 1;
    }
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (iVar2 < *(int *)(param_1 + 0x50)) {
      iVar4 = -0x100;
    }
    else {
      iVar4 = 0x100;
    }
    iVar4 = *(int *)(param_1 + 0x50) + iVar4;
    *(int *)(param_1 + 0x50) = iVar4;
    iVar3 = iVar4 - iVar2;
    if (iVar3 < 0) {
      iVar3 = iVar2 - iVar4;
    }
    if (iVar3 < 0x400) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x100;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

