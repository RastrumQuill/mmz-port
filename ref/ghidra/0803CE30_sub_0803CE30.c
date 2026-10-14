// sub_0803CE30 at 0x0803CE30 (thumb)

undefined4 sub_0803CE30(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,4);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    iVar6 = *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar6;
    if (*(int *)(param_1 + 0x4c) < iVar6) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    bVar1 = *(int *)(param_1 + 0x50) < *(int *)(DAT_0202286c + 0x50) + -0x3000;
    *(bool *)(param_1 + 0x13) = bVar1;
    *(undefined *)(param_1 + 0x12) = 0;
    if (bVar1) {
      uVar4 = 0x80;
    }
    else {
      uVar4 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    cVar7 = *(char *)(param_1 + 0x13);
    if (cVar7 == '\0') {
      iVar5 = *(int *)(param_1 + 0x58) + -8;
      *(int *)(param_1 + 0x58) = iVar5;
      iVar5 = *(int *)(param_1 + 0x50) + iVar5;
      *(int *)(param_1 + 0x50) = iVar5;
      iVar5 = iVar5 + 0x3000;
      iVar6 = *(int *)(DAT_0202286c + 0x50);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x58) + 8;
      *(int *)(param_1 + 0x58) = iVar6;
      iVar6 = *(int *)(param_1 + 0x50) + iVar6;
      *(int *)(param_1 + 0x50) = iVar6;
      iVar6 = iVar6 + 0x3000;
      iVar5 = *(int *)(DAT_0202286c + 0x50);
    }
    if ((iVar5 - iVar6 < 0x1000) || (0x40 < bVar2)) {
      *(byte *)(param_1 + 0x12) = bVar2 >> 2;
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    cVar7 = *(char *)(param_1 + 0x13);
    if (cVar7 == '\0') {
      iVar6 = *(int *)(param_1 + 0x58) + 0x20;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x58) + -0x20;
    }
    *(int *)(param_1 + 0x58) = iVar6;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  if ((cVar7 != '\0') && (*(int *)(param_1 + 0xbc) + 0xe000 < *(int *)(param_1 + 0x50))) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

