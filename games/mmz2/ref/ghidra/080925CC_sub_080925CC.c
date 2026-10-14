// sub_080925CC at 0x080925CC (thumb)

undefined4 sub_080925CC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_080127E4(param_1,0x8f01);
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar4 = 0xfffffd80;
      }
      else {
        uVar4 = 0x280;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(int *)(param_1 + 0x58) >> 8 != *(int *)(DAT_0202e130 + 0x58) >> 8) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    goto LAB_080926a0;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080926a0;
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_080127E4(param_1,0x8f00);
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar4 = 0xffffff80;
      }
      else {
        uVar4 = 0x80;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(int *)(param_1 + 0x58) >> 8 != *(int *)(DAT_0202e130 + 0x58) >> 8) goto LAB_080926a0;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  else {
    if (bVar1 != 2) goto LAB_080926a0;
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_080127E4(param_1,0x8f03);
      *(undefined *)(param_1 + 0x12) = 0x40;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_080926a0;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  *(undefined *)(param_1 + 0xe) = 0;
LAB_080926a0:
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xd) != '\x02') {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    uVar4 = sub_080093C4(iVar3,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar5 = -0xa00;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar5 = 0xa00;
    }
    iVar3 = sub_080093C4(iVar3 + iVar5);
    iVar3 = *(int *)(param_1 + 0x58) - iVar3;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < 0x801) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x5c);
      if (iVar3 < 1) {
        if (*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54) < 0x3001) {
          return in_lr;
        }
      }
      else if (-0x3001 < *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54)) {
        return in_lr;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x5c);
    }
    *(int *)(param_1 + 0x5c) = -iVar3;
  }
  return in_lr;
}

