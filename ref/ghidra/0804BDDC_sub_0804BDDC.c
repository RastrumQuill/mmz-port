// sub_0804BDDC at 0x0804BDDC (thumb)

undefined4 sub_0804BDDC(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(DAT_0202286c + 0x4c);
  iVar5 = iVar4 - *(int *)(param_1 + 0x4c);
  *(bool *)(param_1 + 0x44) = 0 < iVar5;
  if (iVar4 == *(int *)(param_1 + 0x4c) || iVar5 < 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x58);
  puVar6 = (uint *)(param_1 + 0xbc);
  *puVar6 = *puVar6 + *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar4;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if ((0 < *(int *)(param_1 + 0x58)) || (0x7fff < *puVar6)) {
    cVar3 = sub_080079CC(*(int *)(param_1 + 0x4c) + -0x800,iVar4 + 0x3000);
    if ((cVar3 == '\0') &&
       (cVar3 = sub_080079CC(*(int *)(param_1 + 0x4c) + 0x800,*(int *)(param_1 + 0x50) + 0x3000),
       cVar3 == '\0')) {
      iVar4 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0x50);
      if (iVar4 < 0) {
        iVar4 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0xc4);
      }
      if (iVar4 < 0x6001) {
        return in_lr;
      }
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 7;
    *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
    return in_lr;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    if (iVar4 < *(int *)(DAT_0202286c + 0x50) + -0x2000) {
      bVar1 = *(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if (bVar1) goto LAB_0804beec;
      }
      else if (!bVar1) {
LAB_0804beec:
        *(undefined *)(param_1 + 0xd) = 5;
        sub_080033F0(param_1 + 0x6c,6);
        goto LAB_0804bf00;
      }
    }
    *(undefined *)(param_1 + 0xd) = 7;
  }
LAB_0804bf00:
  cVar3 = sub_080065AC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x2000);
  if (cVar3 == '\0') {
    return in_lr;
  }
  *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0x12) = 0;
  if (*(int *)(param_1 + 0x50) < *(int *)(DAT_0202286c + 0x50) + -0x2000) {
    bVar1 = *(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (bVar1) goto LAB_0804bf54;
    }
    else if (!bVar1) {
LAB_0804bf54:
      *(undefined *)(param_1 + 0xd) = 5;
      sub_080033F0(param_1 + 0x6c,6);
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xd) = 7;
  return in_lr;
}

