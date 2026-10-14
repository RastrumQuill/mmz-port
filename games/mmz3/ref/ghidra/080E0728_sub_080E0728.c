// sub_080E0728 at 0x080E0728 (thumb)

undefined4 sub_080E0728(int param_1)

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
  
  sub_080177F4();
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
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), 0x8000 < uVar4)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e1d8)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    if (*(char *)(param_1 + 0xd) == '\0') {
      piVar5 = (int *)(param_1 + 0xb4);
      if ((*(int *)(param_1 + 0x58) < *piVar5) ||
         (sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58)), sVar3 == 0
         )) {
        sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*piVar5);
        if ((sVar3 != 0) &&
           (iVar7 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*piVar5),
           iVar7 < *(int *)(param_1 + 0x58) + -0x700)) {
          iVar7 = sub_0800A2CC(*(undefined4 *)(param_1 + 0x54),*piVar5);
          *piVar5 = iVar7;
        }
      }
      else {
        uVar6 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
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
    iVar7 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
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
          goto LAB_080e09f6;
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
LAB_080e09f6:
    iVar7 = sub_0800A5A4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
    if (iVar7 == 0) {
      return in_lr;
    }
    sVar3 = sub_08009A3C(*(int *)(param_1 + 0x54) + iVar7,*(int *)(param_1 + 0x58) + -0x400);
    if (sVar3 != 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    piVar5 = &DAT_0202f600;
LAB_080e0822:
    if ((DAT_02030108 & 0x80) != 0) {
      *piVar5 = *piVar5 + 0x10;
    }
    *piVar5 = *piVar5 + 0x10;
    goto LAB_080e08b0;
  }
  if (cVar1 == '\x01') {
    if ((DAT_02030108 & 0x80) != 0) {
      DAT_0202f600 = DAT_0202f600 + 0x20;
    }
    DAT_0202f600 = DAT_0202f600 + 0x20;
    goto LAB_080e08b0;
  }
  if (cVar1 == '\x02') {
    if ((DAT_02030108 & 0x80) != 0) {
      DAT_0202f600 = DAT_0202f600 + 0x100;
    }
    DAT_0202f600 = DAT_0202f600 + 0x100;
    goto LAB_080e08b0;
  }
  if (cVar1 == '\x03') {
    if ((DAT_02030108 & 0x80) != 0) {
      DAT_0202f5dc = DAT_0202f5dc + 4;
    }
    DAT_0202f5dc = DAT_0202f5dc + 4;
    goto LAB_080e08b0;
  }
  if (cVar1 == '\x04') {
    piVar5 = &DAT_0202f5dc;
    goto LAB_080e0822;
  }
  if (cVar1 != '\x05') {
    if (cVar1 == '\a') {
      *(undefined *)(DAT_0202f5c0 + 0xbc) = 0;
      sub_080EA1C8(0x102,0x5a);
    }
    else if (cVar1 == '\b') {
      *(undefined *)(DAT_0202f5c0 + 0xbd) = 0;
      sub_080EA1C8(0x102,0x5a);
    }
    goto LAB_080e08b0;
  }
  if ((DAT_02030108 & 0x80) == 0) {
LAB_080e085a:
    if (*DAT_02030160 < 9) {
      *DAT_02030160 = *DAT_02030160 + 1;
    }
  }
  else if (*DAT_02030160 < 9) {
    *DAT_02030160 = *DAT_02030160 + 1;
    goto LAB_080e085a;
  }
  sub_0800471C(6);
LAB_080e08b0:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e1d8)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

