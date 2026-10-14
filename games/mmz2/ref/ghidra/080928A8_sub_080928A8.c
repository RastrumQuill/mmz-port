// sub_080928A8 at 0x080928A8 (thumb)

undefined4 sub_080928A8(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_080127E4(param_1,0x8f01);
      if (*(int *)(param_1 + 0x60) < 1) {
        uVar4 = 0xfffffd80;
      }
      else {
        uVar4 = 0x280;
      }
      *(undefined4 *)(param_1 + 0x60) = uVar4;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (0xfff < iVar6) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0xe) == '\0') {
        sub_080127E4(param_1,0x8f00);
        if (*(int *)(param_1 + 0x60) < 1) {
          uVar4 = 0xffffff80;
        }
        else {
          uVar4 = 0x80;
        }
        *(undefined4 *)(param_1 + 0x60) = uVar4;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (iVar6 < 0x1000) {
        *(undefined *)(param_1 + 0xd) = 1;
LAB_08092986:
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_080127E4(param_1,0x8f03);
      *(undefined *)(param_1 + 0x12) = 0x40;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_08092986;
    }
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xd) == '\x02') {
    return in_lr;
  }
  iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar6;
  if (*(int *)(param_1 + 0x60) < 1) {
    sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0x100,iVar6 + -0xc00);
    if (sVar3 != 0) goto LAB_080929de;
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    iVar6 = *(int *)(param_1 + 0x58);
    iVar5 = -0xc00;
  }
  else {
    sVar3 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0x100,iVar6 + 0xc00);
    if (sVar3 != 0) {
LAB_080929de:
      iVar6 = 0x1000;
      goto LAB_080929f8;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    iVar6 = *(int *)(param_1 + 0x58);
    iVar5 = 0xc00;
  }
  iVar6 = sub_08009774(uVar4,iVar6 + iVar5);
  iVar6 = *(int *)(param_1 + 0x54) - iVar6;
LAB_080929f8:
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  if (iVar6 < 0x801) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      return in_lr;
    }
    iVar6 = *(int *)(param_1 + 0x60);
    if (iVar6 < 1) {
      if (*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58) < 0x3001) {
        return in_lr;
      }
    }
    else if (-0x3001 < *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58)) {
      return in_lr;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x60) = -iVar6;
  return in_lr;
}

