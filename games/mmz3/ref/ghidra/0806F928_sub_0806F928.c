// sub_0806F928 at 0x0806F928 (thumb)

undefined4 sub_0806F928(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = (*(int *)(param_1 + 0x58) + 0x2800) - *(int *)(DAT_0202f5c0 + 0x58);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0x1501);
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar3 = 0xfffffd80;
      }
      else {
        uVar3 = 0x280;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (0x3ff < iVar5) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    goto LAB_0806fa0c;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_0806fa0c;
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0x1500);
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar3 = 0xffffff80;
      }
      else {
        uVar3 = 0x80;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (0x3ff < iVar5) goto LAB_0806fa0c;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    if (bVar1 != 2) goto LAB_0806fa0c;
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0x1503);
      *(undefined *)(param_1 + 0x12) = 0x40;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_0806fa0c;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  *(undefined *)(param_1 + 0xe) = 0;
LAB_0806fa0c:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0xd) != '\x02') {
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar4 = -0xa00;
    }
    else {
      iVar4 = 0xa00;
    }
    iVar5 = sub_0800A2CC(iVar5 + iVar4,*(undefined4 *)(param_1 + 0x58));
    iVar5 = *(int *)(param_1 + 0x58) - iVar5;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < 0x801) {
      if (*(char *)(param_1 + 0x11) != '\x01') {
        return in_lr;
      }
      iVar5 = *(int *)(param_1 + 0x5c);
      if (iVar5 < 1) {
        if (*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54) < 0x3001) {
          return in_lr;
        }
      }
      else if (-0x3001 < *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54)) {
        return in_lr;
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x5c);
    }
    *(int *)(param_1 + 0x5c) = -iVar5;
  }
  return in_lr;
}

