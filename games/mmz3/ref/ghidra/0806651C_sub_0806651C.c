// sub_0806651C at 0x0806651C (thumb)

undefined4 sub_0806651C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0806659c:
    if (*(int *)(param_1 + 100) < 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(undefined *)(param_1 + 0xbc) = 0;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(undefined *)(param_1 + 0xbc) = 1;
    }
    sub_08017700(param_1,0x400);
    *(undefined *)(param_1 + 0xbd) = 0;
    sub_08007390(param_1 + 0x74,&DAT_0836252c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0xbc) == '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        uVar2 = 0xffffff00;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        uVar2 = 0x100;
      }
      *(undefined4 *)(param_1 + 100) = uVar2;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0806659c;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  piVar5 = (int *)(param_1 + 0xb8);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  *piVar5 = *piVar5 + iVar3;
  sub_080177F4(param_1);
  if (*piVar5 < 0x5401) {
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar3 = (*(int *)(param_1 + 100) - iVar4) * 0x10;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar3 = ((*(int *)(param_1 + 100) >> 2) - iVar4) * 0x20;
  }
  *(int *)(param_1 + 0x5c) = iVar4 + (iVar3 >> 8);
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar3 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x58) + 0x1000);
    if (iVar3 == 0) {
      iVar3 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x58) + -0x1000);
      goto LAB_080666bc;
    }
  }
  else {
    iVar3 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + 0x1000);
    if (iVar3 == 0) {
      iVar3 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + -0x1000);
LAB_080666bc:
      if (iVar3 == 0) goto LAB_080666c8;
    }
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
LAB_080666c8:
  if (0x5fff < *piVar5) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

