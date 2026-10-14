// sub_08107F58 at 0x08107F58 (thumb)

undefined4 sub_08107F58(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if (*(char *)(param_1 + 0x11) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12);
    bVar2 = cVar1 - 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if ((byte)(cVar1 - 1U) < 0x3c) {
      if ((bVar2 & 2) == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
  }
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) || (*(int *)(param_1 + 0xb8) == 0)) {
    if ((*(byte *)(param_1 + 0x11) < 2) &&
       ((*(char *)(param_1 + 0x12) == '\0' ||
        (uVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54), 0x8000 < uVar4)))) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08868f54)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
    if (*(char *)(param_1 + 0xd) == '\0') {
      piVar5 = (int *)(param_1 + 0xb4);
      if ((*(int *)(param_1 + 0x58) < *piVar5) ||
         (sVar3 = sub_081082AC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58)), sVar3 == 0
         )) {
        sVar3 = sub_081082AC(*(undefined4 *)(param_1 + 0x54),*piVar5);
        if ((sVar3 != 0) &&
           (iVar7 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*piVar5),
           iVar7 < *(int *)(param_1 + 0x58) + -0x700)) {
          iVar7 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*piVar5);
          *piVar5 = iVar7;
        }
      }
      else {
        uVar6 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar6;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      iVar7 = *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
      if (0x6ff < iVar7) {
        return in_lr;
      }
      *(int *)(param_1 + 0x60) = iVar7 + 0x40;
      return in_lr;
    }
    iVar7 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar9 = *(int *)(param_1 + 0x58);
    if (iVar7 < iVar9) {
      *(int *)(param_1 + 0x58) = iVar7;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else if (iVar9 < iVar7) {
      iVar8 = *(int *)(param_1 + 0x60);
      if (iVar8 == 0) {
        if (iVar7 <= iVar9 + 0x700) {
          *(int *)(param_1 + 0x58) = iVar7;
          goto LAB_08108216;
        }
        *(undefined4 *)(param_1 + 0x60) = 0x40;
        iVar9 = iVar9 + 0x40;
      }
      else {
        if (iVar8 < 0x700) {
          *(int *)(param_1 + 0x60) = iVar8 + 0x40;
        }
        iVar9 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      }
      *(int *)(param_1 + 0x58) = iVar9;
    }
LAB_08108216:
    iVar7 = sub_08008AA4(*(int *)(param_1 + 0x54) + -0x400,*(int *)(param_1 + 0x58) + 0x400);
    if ((iVar7 == 0) &&
       (iVar7 = sub_08008AA4(*(int *)(param_1 + 0x54) + 0x400,*(int *)(param_1 + 0x58) + 0x400),
       iVar7 == 0)) {
      return in_lr;
    }
    sVar3 = sub_081082AC(*(int *)(param_1 + 0x54) + iVar7,*(int *)(param_1 + 0x58) + -0x400);
    if (sVar3 != 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    piVar5 = &DAT_0202dc30;
LAB_08108052:
    if ((DAT_0202e8b9 & 8) != 0) {
      *piVar5 = *piVar5 + 0x10;
    }
    *piVar5 = *piVar5 + 0x10;
    goto LAB_081080ca;
  }
  if (cVar1 == '\x01') {
    if ((DAT_0202e8b9 & 8) != 0) {
      DAT_0202dc30 = DAT_0202dc30 + 0x20;
    }
    DAT_0202dc30 = DAT_0202dc30 + 0x20;
    goto LAB_081080ca;
  }
  if (cVar1 == '\x02') {
    if ((DAT_0202e8b9 & 8) != 0) {
      DAT_0202dc30 = DAT_0202dc30 + 0x100;
    }
    DAT_0202dc30 = DAT_0202dc30 + 0x100;
    goto LAB_081080ca;
  }
  if (cVar1 == '\x03') {
    if ((DAT_0202e8b9 & 8) != 0) {
      DAT_0202dc0c = DAT_0202dc0c + 4;
    }
    DAT_0202dc0c = DAT_0202dc0c + 4;
    goto LAB_081080ca;
  }
  if (cVar1 == '\x04') {
    piVar5 = &DAT_0202dc0c;
    goto LAB_08108052;
  }
  if (cVar1 != '\x05') {
    if (cVar1 == '\a') {
      *(undefined *)(DAT_0202dbf0 + 0xbc) = 0;
    }
    else if (cVar1 == '\b') {
      *(undefined *)(DAT_0202dbf0 + 0xbd) = 0;
    }
    goto LAB_081080ca;
  }
  if ((DAT_0202e8b9 & 8) == 0) {
LAB_0810808a:
    if (*DAT_0202e8e0 < 9) {
      *DAT_0202e8e0 = *DAT_0202e8e0 + 1;
    }
  }
  else if (*DAT_0202e8e0 < 9) {
    *DAT_0202e8e0 = *DAT_0202e8e0 + 1;
    goto LAB_0810808a;
  }
  sub_08002B10(6);
LAB_081080ca:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08868f54)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

