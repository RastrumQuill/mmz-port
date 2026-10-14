// sub_0804E4AC at 0x0804E4AC (thumb)

undefined4 sub_0804E4AC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) goto LAB_0804e56c;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      *(undefined *)(param_1 + 0xe) = 3;
    }
    else if (bVar1 != 3) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  if (bVar1 != 0) {
    return in_lr;
  }
  sub_08017700(param_1,0xab0a);
  sub_08007390(param_1 + 0x74,&DAT_0835fb90);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
LAB_0804e544:
      *(byte *)(param_1 + 10) = bVar1;
    }
    if (*(int *)(param_1 + 0x54) <= *(int *)(DAT_0202f5c0 + 0x54)) goto LAB_0804e55c;
    uVar3 = 0xfffffea0;
  }
  else {
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
      goto LAB_0804e544;
    }
LAB_0804e55c:
    uVar3 = 0x160;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined *)(param_1 + 0x12) = 0x60;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0804e56c:
  sub_080177F4(param_1);
  uVar5 = *(uint *)(param_1 + 0x70) & 0xffff00;
  if ((uVar5 == 0x10200) || (uVar5 == 0x10900)) {
    sub_0800471C(0xde);
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar4 = sub_08009F80(iVar4 + -0x6c00,*(undefined4 *)(param_1 + 0x58));
  }
  else {
    iVar4 = sub_08009E14(iVar4 + 0x6c00,*(undefined4 *)(param_1 + 0x58));
  }
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    *(undefined *)(param_1 + 0x12) = 1;
  }
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

