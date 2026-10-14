// sub_08049F8C at 0x08049F8C (thumb)

undefined4 sub_08049F8C(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,9);
    *(undefined *)(param_1 + 0xe) = 0;
    *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0xbc);
    if (*(char *)(param_1 + 0xbc) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  pbVar3 = (byte *)(param_1 + 0xbc);
  if (*pbVar3 == 0) {
    iVar5 = *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x4c) = iVar5 + -0x80;
    iVar5 = iVar5 + -0x900;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x4c) = iVar5 + 0x80;
    iVar5 = iVar5 + 0x900;
  }
  iVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x50) + 0x440 <= iVar4) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    return in_lr;
  }
  *(int *)(param_1 + 0x50) = iVar4;
  if (*(char *)(param_1 + 0x10) == '\x06') {
    cVar2 = sub_080065AC(iVar5);
    if ((cVar2 != '\0') && (cVar2 = sub_080065AC(iVar5,iVar4 + -0x800), cVar2 == '\0')) {
      iVar5 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x4c);
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xb8);
      }
      if (iVar5 < 0x2801) goto LAB_0804a0f2;
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    bVar1 = *pbVar3;
  }
  else {
    cVar2 = sub_080079CC(iVar5,iVar4 + 0xa00);
    if ((cVar2 != '\0') && (cVar2 = sub_080079CC(iVar5,iVar4 + -0x800), cVar2 == '\0')) {
      iVar5 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x4c);
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xb8);
      }
      if (iVar5 < 0x2801) goto LAB_0804a0f2;
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    bVar1 = *pbVar3;
  }
  *pbVar3 = bVar1 ^ 1;
LAB_0804a0f2:
  if (*(char *)(param_1 + 0x10) != '\x05') {
    if (((*(int *)(DAT_0202286c + 0x4c) <= *(int *)(param_1 + 0x4c) !=
          (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) &&
        ((((*(int *)(DAT_0202286c + 0x50) >> 8) - (*(int *)(param_1 + 0x50) >> 8)) + 0x50U & 0xffff)
         < 0xa1)) &&
       ((((*(int *)(DAT_0202286c + 0x4c) >> 8) - (*(int *)(param_1 + 0x4c) >> 8)) + 0x6eU & 0xffff)
        < 0xdd)) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

