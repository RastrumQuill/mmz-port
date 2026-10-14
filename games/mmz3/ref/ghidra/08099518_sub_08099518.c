// sub_08099518 at 0x08099518 (thumb)

undefined4 sub_08099518(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_08099588:
    iVar5 = *(int *)(param_1 + 0x5c) +
            ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c)) * 0x1c >> 8);
    *(int *)(param_1 + 0x5c) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    iVar5 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar5 = *(int *)(param_1 + 0x54) + 0xa00;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x54) + -0xa00;
    }
    iVar5 = sub_08009B28(iVar5,*(undefined4 *)(param_1 + 0x58));
    if (iVar5 != 0) {
      *(char *)(param_1 + 0xbb) = *(char *)(param_1 + 0xbb) + '\x01';
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    iVar5 = sub_08025794(*(undefined4 *)(param_1 + 0xbc));
    if (iVar5 != 0) {
      *(undefined *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    return in_lr;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xd50a);
    sub_08007390(param_1 + 0x74,&DAT_08366e08);
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffa00;
      uVar4 = 0xffffff40;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x600;
      uVar4 = 0xc0;
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x1a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08099588;
  }
  if (bVar1 == 2) {
    sub_08017700(param_1,0xd50b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (bVar1 != 3) {
    return in_lr;
  }
  iVar5 = *(int *)(param_1 + 0x5c) +
          ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c)) * 0x1c >> 8);
  *(int *)(param_1 + 0x5c) = iVar5;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar5 = *(int *)(param_1 + 0x54);
    iVar6 = 0xa00;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54);
    iVar6 = -0xa00;
  }
  iVar5 = sub_08009B28(iVar5 + iVar6);
  if (iVar5 != 0) {
    *(char *)(param_1 + 0xbb) = *(char *)(param_1 + 0xbb) + '\x01';
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  piVar7 = (int *)(param_1 + 0xbc);
  iVar5 = sub_08025794(*piVar7);
  if (iVar5 != 0) {
    *(undefined *)(param_1 + 0xc0) = 0;
    *piVar7 = 0;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if (*piVar7 == 0) {
    if (1 < *(short *)(param_1 + 0xa4)) {
LAB_08099754:
      uVar3 = 1;
LAB_08099756:
      *(undefined *)(param_1 + 0xd) = uVar3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else if (*(char *)(param_1 + 0xc0) == '\x01') {
    if (1 < *(short *)(param_1 + 0xa4)) {
      uVar3 = 7;
      goto LAB_08099756;
    }
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xc0) == '\x02') {
      if (1 < *(short *)(param_1 + 0xa4)) {
        uVar3 = 9;
        goto LAB_08099756;
      }
      *(undefined *)(param_1 + 0xf) = 0;
      bVar1 = *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 2;
      goto LAB_08099746;
    }
    if (1 < *(short *)(param_1 + 0xa4)) goto LAB_08099754;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  bVar1 = *(byte *)(param_1 + 9);
  *(undefined4 *)(param_1 + 0xc) = 2;
LAB_08099746:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)bVar1 * 4) + 8);
  return in_lr;
}

