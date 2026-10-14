// sub_0806FA98 at 0x0806FA98 (thumb)

undefined4 sub_0806FA98(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0x1501);
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
        sub_08017700(param_1,0x1500);
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
LAB_0806fb76:
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0x1503);
      *(undefined *)(param_1 + 0x12) = 0x40;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_0806fb76;
    }
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0xd) == '\x02') {
    return in_lr;
  }
  iVar6 = 0;
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  if (*(int *)(param_1 + 0x60) < 1) {
    if (*(char *)(param_1 + 0x11) == '\x02') {
      if (DAT_020302c4 + -0x5000 <= iVar5) goto LAB_0806fbfe;
    }
    else {
      sVar3 = sub_08009A3C(*(int *)(param_1 + 0x54) + 0x100,iVar5 + -0xc00);
      if (sVar3 == 0) {
        uVar4 = *(undefined4 *)(param_1 + 0x54);
        iVar6 = *(int *)(param_1 + 0x58);
        iVar5 = -0xc00;
        goto LAB_0806fbf4;
      }
    }
  }
  else {
    sVar3 = sub_08009A3C(*(int *)(param_1 + 0x54) + 0x100,iVar5 + 0xc00);
    if (sVar3 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x54);
      iVar6 = *(int *)(param_1 + 0x58);
      iVar5 = 0xc00;
LAB_0806fbf4:
      iVar6 = sub_0800A4B4(uVar4,iVar6 + iVar5);
      iVar6 = *(int *)(param_1 + 0x54) - iVar6;
      goto LAB_0806fbfe;
    }
  }
  iVar6 = 0x1000;
LAB_0806fbfe:
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  if (iVar6 < 0x801) {
    if (*(char *)(param_1 + 0x11) != '\x01') {
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

