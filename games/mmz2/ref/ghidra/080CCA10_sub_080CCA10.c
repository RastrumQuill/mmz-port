// sub_080CCA10 at 0x080CCA10 (thumb)

undefined4 sub_080CCA10(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar6 = *(uint *)(param_1 + 0x8c);
    if ((uVar6 & 0x200) != 0) {
      if ((uVar6 & 0x10000) == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = (byte)(-(uVar6 & 0x8000) >> 0x1f);
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(byte *)(param_1 + 0xd) = bVar5;
      *(undefined *)(param_1 + 0xe) = 0;
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      sub_080CCCE4(param_1);
      return in_lr;
    }
    goto LAB_080cccc0;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  bVar5 = *(byte *)(param_1 + 0xd);
  if (bVar5 == 1) {
    cVar1 = sub_080CD02C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (cVar1 == '\0') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
      cVar1 = sub_080CD02C(*(undefined4 *)(param_1 + 0x54));
      if (cVar1 == '\0') {
        iVar4 = *(int *)(param_1 + 0x68) + 0x40;
        *(int *)(param_1 + 0x68) = iVar4;
        if (0x700 < iVar4) {
          *(undefined4 *)(param_1 + 0x68) = 0x700;
        }
        goto LAB_080cccc0;
      }
      uVar3 = sub_080CD148(param_1);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      sub_08015518(1,param_1 + 0x54);
    }
    sub_080032EC(0x41);
    goto LAB_080ccb62;
  }
  if (bVar5 < 2) {
    if (bVar5 != 0) goto LAB_080cccc0;
    cVar1 = sub_080CD02C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x5c) != 0) {
        if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
          sub_080CD1B0(param_1);
        }
        if (*(int *)(param_1 + 0x5c) < 0) {
          iVar4 = *(int *)(param_1 + 0x58) + 0x800;
          sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0x7ff,iVar4);
          if ((sVar2 == 0) &&
             (sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + -0x1800,iVar4), sVar2 == 0)) {
            *(undefined *)(param_1 + 0xd) = 2;
            *(undefined4 *)(param_1 + 100) = 0xffffff80;
          }
        }
        else {
          iVar4 = *(int *)(param_1 + 0x58) + 0x800;
          sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + -0x800,iVar4);
          if ((sVar2 == 0) &&
             (sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0x17ff,iVar4), sVar2 == 0)) {
            *(undefined *)(param_1 + 0xd) = 2;
            *(undefined4 *)(param_1 + 100) = 0x80;
          }
        }
      }
      goto LAB_080cccc0;
    }
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar4 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0xff);
      iVar4 = iVar4 + -0x17ff;
LAB_080cca7c:
      *(int *)(param_1 + 0x54) = iVar4;
    }
    else if (0 < *(int *)(param_1 + 0x5c)) {
      iVar4 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0xff);
      iVar4 = iVar4 + 0x1800;
      goto LAB_080cca7c;
    }
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar5 != 2) goto LAB_080cccc0;
    cVar1 = sub_080CD02C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 100) < 0) {
        cVar1 = sub_080CCFA4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (cVar1 != '\0') {
LAB_080ccb62:
          *(undefined *)(param_1 + 0xd) = 0;
          goto LAB_080cccc0;
        }
        iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
        *(int *)(param_1 + 0x54) = iVar4;
        cVar1 = sub_080CCFA4(iVar4,*(undefined4 *)(param_1 + 0x58));
        if (cVar1 != '\0') {
          iVar4 = sub_080CD06C(param_1);
          *(int *)(param_1 + 0x54) = iVar4 + 0x1800;
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + -1;
          *(undefined4 *)(param_1 + 0x68) = 0;
          goto LAB_080cccc0;
        }
      }
      else {
        cVar1 = sub_080CCFE8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (cVar1 != '\0') goto LAB_080ccb62;
        iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
        *(int *)(param_1 + 0x54) = iVar4;
        cVar1 = sub_080CCFE8(iVar4,*(undefined4 *)(param_1 + 0x58));
        if (cVar1 != '\0') {
          iVar4 = sub_080CD0D8(param_1);
          *(int *)(param_1 + 0x54) = iVar4 + -0x17ff;
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + -1;
          *(undefined4 *)(param_1 + 0x68) = 0;
          goto LAB_080cccc0;
        }
      }
      if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
        sub_080CD1B0(param_1);
      }
      goto LAB_080cccc0;
    }
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar4 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0xff);
      iVar4 = iVar4 + -0x17ff;
LAB_080ccbb8:
      *(int *)(param_1 + 0x54) = iVar4;
    }
    else if (0 < *(int *)(param_1 + 0x5c)) {
      iVar4 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0xff);
      iVar4 = iVar4 + 0x1800;
      goto LAB_080ccbb8;
    }
    cVar1 = *(char *)(param_1 + 0xd) + -1;
  }
  *(char *)(param_1 + 0xd) = cVar1;
  *(undefined4 *)(param_1 + 0x68) = 0;
LAB_080cccc0:
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58);
  return in_lr;
}

