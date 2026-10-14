// sub_0804D808 at 0x0804D808 (thumb)

undefined4 sub_0804D808(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    uVar4 = (uint)bVar1;
    *(uint *)(param_1 + 0x54) = uVar4 * 0x280 + -0x140;
    *(bool *)(param_1 + 0x44) = bVar1;
    if (uVar4 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined4 *)(param_1 + 0xc0) = 0x3000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x6ff < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  if ((0 < *(int *)(param_1 + 0x58)) &&
     (iVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)),
     iVar3 < *(int *)(param_1 + 0x50))) {
    *(int *)(param_1 + 0x50) = iVar3;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) - iVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = sub_08008120(*(int *)(param_1 + 0x4c) + -0x800,*(int *)(param_1 + 0x50) + -0x400);
    if (iVar3 < 1) goto LAB_0804d914;
  }
  else {
    iVar3 = sub_08007EE0(*(int *)(param_1 + 0x4c) + 0x800,*(int *)(param_1 + 0x50) + -0x400);
    if (-1 < iVar3) goto LAB_0804d914;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
LAB_0804d914:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

