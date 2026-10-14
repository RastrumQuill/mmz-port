// sub_080D4B4C at 0x080D4B4C (thumb)

undefined4 sub_080D4B4C(int param_1)

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
  
  sub_080128D4();
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
       (uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54), 0x8000 < uVar4)) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a09c)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    if (*(char *)(param_1 + 0xbc) != '\0') {
      *(char *)(param_1 + 0xbc) = '\0';
      return in_lr;
    }
    if (*(char *)(param_1 + 0xd) == '\0') {
      piVar5 = (int *)(param_1 + 0xb4);
      if ((*(int *)(param_1 + 0x58) < *piVar5) ||
         (sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58)), sVar3 == 0
         )) {
        sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*piVar5);
        if ((sVar3 != 0) &&
           (iVar7 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*piVar5),
           iVar7 < *(int *)(param_1 + 0x58) + -0x700)) {
          iVar7 = sub_0800958C(*(undefined4 *)(param_1 + 0x54),*piVar5);
          *piVar5 = iVar7;
        }
      }
      else {
        uVar6 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
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
    iVar7 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
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
          goto LAB_080d4e58;
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
LAB_080d4e58:
    iVar7 = sub_08009864(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    if ((DAT_0202ebbb & 0x80) != 0) {
      DAT_0202e180 = DAT_0202e180 + 0x10;
    }
    DAT_0202e180 = DAT_0202e180 + 0x10;
  }
  else if (cVar1 == '\x01') {
    if ((DAT_0202ebbb & 0x80) != 0) {
      DAT_0202e180 = DAT_0202e180 + 0x20;
    }
    DAT_0202e180 = DAT_0202e180 + 0x20;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        if ((DAT_0202ebbb & 0x80) != 0) {
          DAT_0202e150 = DAT_0202e150 + 4;
        }
        DAT_0202e150 = DAT_0202e150 + 4;
        goto LAB_080d4d04;
      }
      if (cVar1 == '\x04') {
        if ((DAT_0202ebbb & 0x80) != 0) {
          DAT_0202e150 = DAT_0202e150 + 0x10;
        }
        DAT_0202e150 = DAT_0202e150 + 0x10;
        goto LAB_080d4d04;
      }
      if (cVar1 == '\x05') {
        if ((DAT_0202ebbb & 0x80) != 0) {
          if (8 < *DAT_0202ebf0) goto LAB_080d4ce2;
          *DAT_0202ebf0 = *DAT_0202ebf0 + 1;
        }
        if (*DAT_0202ebf0 < 9) {
          *DAT_0202ebf0 = *DAT_0202ebf0 + 1;
        }
      }
      else if (cVar1 == '\x06') {
        if (*(char *)(*(int *)(param_1 + 0xb8) + 0x10) == DAT_02000ca4) {
          DAT_0202f8f0 = DAT_0202f8f0 + 1;
        }
      }
      else {
        if (cVar1 != '\a') {
          if (cVar1 == '\b') {
            sub_08022B7C(DAT_0202e130,1);
            sub_080032EC(6);
          }
          goto LAB_080d4d04;
        }
        sub_08022B7C(DAT_0202e130,0);
      }
LAB_080d4ce2:
      sub_080032EC(6);
      goto LAB_080d4d04;
    }
    if ((DAT_0202ebbb & 0x80) != 0) {
      DAT_0202e180 = DAT_0202e180 + 0x100;
    }
    DAT_0202e180 = DAT_0202e180 + 0x100;
  }
  if (DAT_0202ec14 != -1) {
    DAT_0202ec14 = DAT_0202ec14 + '\x01';
  }
LAB_080d4d04:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a09c)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

