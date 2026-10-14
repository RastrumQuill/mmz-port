// sub_08066CE8 at 0x08066CE8 (thumb)

undefined4 sub_08066CE8(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined uVar8;
  char cVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar2 = DAT_0202dbf0;
  sub_0801CFF0(param_1);
  bVar1 = (byte)DAT_0202e918;
  if ((DAT_0202e918 & 8) != 0) {
    return in_lr;
  }
  iVar10 = *(int *)(param_1 + 0x54);
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) != iVar10 < *(int *)(DAT_0202dbf0 + 0x54)) {
    *(undefined *)(param_1 + 0xd) = 0x28;
    *(byte *)(param_1 + 0xe) = bVar1 & 8;
    return in_lr;
  }
  pcVar3 = (char *)(param_1 + 0xda);
  if (*pcVar3 != '\0') {
    *(char *)(param_1 + 0xd) = *pcVar3;
    *(undefined *)(param_1 + 0xe) = 0;
    *pcVar3 = '\0';
    return in_lr;
  }
  pcVar4 = (char *)(param_1 + 0xd9);
  if (*pcVar4 != '\x04') {
    if ((*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0xbc) + 0x3000) &&
       (iVar10 < *(int *)(param_1 + 0xbc) + 0x6000)) {
      *pcVar4 = '\x04';
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if ((*(int *)(param_1 + 0xc0) + -0x3000 < *(int *)(DAT_0202dbf0 + 0x54)) &&
       (*(int *)(param_1 + 0xc0) + -0x6000 < iVar10)) {
      *pcVar4 = '\x04';
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  iVar5 = iVar10 - *(int *)(DAT_0202dbf0 + 0x54);
  if (iVar5 < 0) {
    iVar5 = *(int *)(DAT_0202dbf0 + 0x54) - iVar10;
  }
  iVar5 = iVar5 >> 8;
  iVar10 = 2;
  if ((0xf < *(short *)(param_1 + 0xa4)) && (iVar10 = 0, *(short *)(param_1 + 0xa4) < 0x20)) {
    iVar10 = 1;
  }
  pcVar6 = (char *)(param_1 + 0xdb);
  if (*pcVar6 != '\0') {
    *pcVar6 = '\0';
    if (iVar10 == 0) {
      uVar7 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar7 & 0x7fffffff;
      if ((uVar7 * 2 >> 0x11 & 0x1f) < 8) {
        *(undefined *)(param_1 + 0xd) = 0x1a;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
    }
    else if (iVar10 == 1) {
      uVar7 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar7 & 0x7fffffff;
      if ((uVar7 * 2 >> 0x11 & 0x1f) < 10) {
        uVar8 = 0x1a;
        goto LAB_080670e4;
      }
    }
    else {
      uVar7 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar7 & 0x7fffffff;
      if ((uVar7 * 2 >> 0x11 & 0x1f) < 0xc) {
        uVar8 = 0x1a;
        goto LAB_080670e4;
      }
    }
  }
  do {
    uVar7 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar7 & 0x7fffffff;
    uVar7 = uVar7 * 2 >> 0x11 & 0x1f;
    if (*(int *)(iVar2 + 0xec) == 0) {
      if (iVar5 < 100) {
        if (iVar10 == 0) {
          if (uVar7 < 5) goto LAB_08067076;
          if (0xc < uVar7) {
            if (uVar7 < 0x18) goto LAB_08067042;
            goto LAB_08067088;
          }
        }
        else if (iVar10 == 1) {
          if (uVar7 < 5) {
LAB_08067076:
            *(undefined *)(param_1 + 0xd) = 4;
            goto LAB_08067090;
          }
          if (0xb < uVar7) {
            if (0x16 < uVar7) goto LAB_08066f12;
            uVar8 = 0xd;
            goto LAB_0806708e;
          }
        }
        else {
          if (uVar7 < 5) goto LAB_08067076;
          if (0xb < uVar7) {
            if (uVar7 < 0x15) goto LAB_08067042;
LAB_08066fc8:
            if (0x19 < uVar7) goto LAB_0806708c;
            goto LAB_08067088;
          }
        }
      }
      else {
        if (0xb3 < iVar5) {
          if (iVar10 == 0) {
            if (uVar7 < 10) goto LAB_08067076;
            if (uVar7 < 0x18) goto LAB_0806707e;
          }
          else if (iVar10 == 1) {
            if (uVar7 < 8) goto LAB_08067076;
            if (uVar7 < 0x14) goto LAB_0806707e;
            if (0x18 < uVar7) goto LAB_0806706c;
          }
          else {
            if (uVar7 < 7) goto LAB_08067076;
            if (uVar7 < 0x12) goto LAB_0806707e;
            if (0x16 < uVar7) {
LAB_0806708c:
              uVar8 = 0x23;
              goto LAB_0806708e;
            }
          }
          goto LAB_08067088;
        }
        if (iVar10 == 0) {
          if (uVar7 < 8) goto LAB_08067076;
          if (0x11 < uVar7) {
            if (uVar7 < 0x19) goto LAB_08067042;
            goto LAB_08067088;
          }
        }
        else if (iVar10 == 1) {
          if (uVar7 < 7) goto LAB_08067076;
          if (0xe < uVar7) {
            if (0x14 < uVar7) goto LAB_08066f2e;
            uVar8 = 0xd;
            goto LAB_0806708e;
          }
        }
        else {
          if (uVar7 < 6) goto LAB_08067076;
          if (0xd < uVar7) {
            if (uVar7 < 0x14) goto LAB_08067042;
            if (0x17 < uVar7) goto LAB_0806708c;
            goto LAB_08067088;
          }
        }
      }
      goto LAB_0806707e;
    }
    if (iVar5 < 100) {
      if (iVar10 == 0) {
        if (uVar7 < 5) goto LAB_08067076;
        if (uVar7 < 10) goto LAB_0806707e;
        if (uVar7 < 0xf) {
          uVar8 = 0xd;
          goto LAB_0806708e;
        }
        if (0x18 < uVar7) goto LAB_08067088;
LAB_08066f5a:
        *(undefined *)(param_1 + 0xd) = 0x14;
      }
      else {
        if (iVar10 == 1) {
          if (uVar7 < 6) {
LAB_0806707e:
            *(undefined *)(param_1 + 0xd) = 6;
            goto LAB_08067090;
          }
          if (uVar7 < 0xb) {
LAB_08067042:
            *(undefined *)(param_1 + 0xd) = 0xd;
            goto LAB_08067090;
          }
          if (uVar7 < 0x15) {
            uVar8 = 0x14;
            goto LAB_0806708e;
          }
LAB_08066f12:
          if (0x1b < uVar7) {
LAB_0806706c:
            *(undefined *)(param_1 + 0xd) = 0x23;
            goto LAB_08067090;
          }
        }
        else {
          if (uVar7 < 4) goto LAB_0806707e;
          if (uVar7 < 8) goto LAB_08067042;
          if (uVar7 < 0x12) {
            uVar8 = 0x14;
            goto LAB_0806708e;
          }
LAB_08066f2e:
          if (0x19 < uVar7) goto LAB_0806706c;
        }
LAB_08067088:
        *(undefined *)(param_1 + 0xd) = 0x17;
      }
    }
    else {
      if (0xb3 < iVar5) {
        if (iVar10 == 0) {
          if (uVar7 < 8) goto LAB_08067076;
          if (0x11 < uVar7) {
            if (0x15 < uVar7) goto LAB_08067088;
LAB_08066fc2:
            *(undefined *)(param_1 + 0xd) = 0x14;
            goto LAB_08067090;
          }
        }
        else if (iVar10 == 1) {
          if (uVar7 < 5) goto LAB_08067076;
          if (0xd < uVar7) {
            if (0x11 < uVar7) goto LAB_08066f12;
            uVar8 = 0x14;
            goto LAB_0806708e;
          }
        }
        else {
          if (uVar7 < 5) goto LAB_08067076;
          if (0xc < uVar7) {
            if (0x10 < uVar7) goto LAB_08066fc8;
            goto LAB_08066fc2;
          }
        }
        goto LAB_0806707e;
      }
      if (iVar10 == 0) {
        if (uVar7 < 5) goto LAB_08067076;
        if (uVar7 < 0xb) goto LAB_0806707e;
        if (0xf < uVar7) {
          if (uVar7 < 0x16) goto LAB_08066f5a;
          goto LAB_08067088;
        }
        uVar8 = 0xd;
      }
      else if (iVar10 == 1) {
        if (uVar7 < 4) goto LAB_08067076;
        if (uVar7 < 9) goto LAB_0806707e;
        if (uVar7 < 0xd) goto LAB_08067042;
        if (0x11 < uVar7) goto LAB_08066f12;
        uVar8 = 0x14;
      }
      else {
        if (uVar7 < 4) goto LAB_08067076;
        if (uVar7 < 8) goto LAB_0806707e;
        if (uVar7 < 0xb) goto LAB_08067042;
        if (0xf < uVar7) goto LAB_08066f2e;
        uVar8 = 0x14;
      }
LAB_0806708e:
      *(undefined *)(param_1 + 0xd) = uVar8;
    }
LAB_08067090:
  } while (((((DAT_0202cac0 & 0x10) == 0) ||
            (cVar9 = *(char *)(param_1 + 0xd), (DAT_0202e8b4 & 4) != 0)) &&
           (cVar9 = *(char *)(param_1 + 0xd), cVar9 == '#')) || (cVar9 == *pcVar4));
  *pcVar4 = cVar9;
  *(undefined *)(param_1 + 0xe) = 0;
  *pcVar6 = *pcVar6 + '\x01';
  cVar9 = *(char *)(param_1 + 0xd);
  if ((cVar9 != '\x06') && (cVar9 != '#')) {
    return in_lr;
  }
  *pcVar3 = cVar9;
  uVar8 = 4;
LAB_080670e4:
  *(undefined *)(param_1 + 0xd) = uVar8;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

