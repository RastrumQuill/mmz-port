// sub_08017DF0 at 0x08017DF0 (thumb)

/* WARNING: Type propagation algorithm not settling */

undefined4 sub_08017DF0(int *param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  undefined uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int **ppiVar13;
  int **ppiVar14;
  undefined4 in_lr;
  
  uVar5 = (uint)DAT_020300e0;
  cVar3 = sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08344204 + uVar5 * 4));
  iVar2 = DAT_020300e8;
  iVar8 = DAT_020300e4;
  if (((DAT_02030104 & 0x10) == 0) || ((DAT_02030108 & 0x40) != 0)) {
    if (DAT_020300f8 != '\0') {
      DAT_020300f8 = '\0';
      ppiVar14 = (int **)DAT_020300d4;
      while (ppiVar13 = ppiVar14, DAT_020300f9 != '\0') {
        if (ppiVar13 == (int **)0x0) {
          if (DAT_020300f9 != '\0') {
            sub_08019138();
            DAT_020300f9 = '\0';
            sub_080189E0(uVar5,cVar3);
          }
          break;
        }
        ppiVar14 = (int **)*ppiVar13;
        iVar6 = (int)ppiVar13[1];
        if ((iVar6 != 0) &&
           (*(char *)((uint)*(ushort *)(*(short *)(ppiVar13 + 2) * 8 + iVar2 + 6) * 8 + iVar8 + 7)
            != '\0')) {
          if (*(byte *)(iVar6 + 0xc) < 2) {
            sub_080186C4(iVar6);
            iVar6 = (uint)*(ushort *)(*(short *)(ppiVar13 + 2) * 8 + iVar2 + 6) * 8 + iVar8;
            iVar6 = sub_0801850C(*(undefined *)(iVar6 + 1),*(undefined *)(iVar6 + 2));
            if (iVar6 == 0) {
              sub_08018988(ppiVar13);
            }
            else {
              *(undefined *)(iVar6 + 0x10) =
                   *(undefined *)
                    ((uint)*(ushort *)(*(short *)(ppiVar13 + 2) * 8 + iVar2 + 6) * 8 + iVar8 + 3);
              *(undefined *)(iVar6 + 0x11) =
                   *(undefined *)
                    ((uint)*(ushort *)(*(short *)(ppiVar13 + 2) * 8 + iVar2 + 6) * 8 + iVar8 + 4);
              if ((DAT_02030108 & 0x40) == 0) {
                *(int *)(iVar6 + 0x54) =
                     *(int *)(*(short *)(ppiVar13 + 2) * 8 + iVar2) * 0x1000 + 0x800;
                iVar7 = *(short *)(*(short *)(ppiVar13 + 2) * 8 + iVar2 + 4) * 0x1000 + 0x7ff;
              }
              else {
                iVar7 = (int)ppiVar13[1];
                *(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
                iVar7 = *(int *)(iVar7 + 0x58);
              }
              *(int *)(iVar6 + 0x58) = iVar7;
              ppiVar13[1] = (int *)iVar6;
            }
          }
          else {
            sub_080186C4(iVar6);
            ppiVar13[1] = (int *)0x0;
          }
        }
      }
    }
  }
  else if (DAT_020300f8 == '\0') {
    DAT_020300f8 = '\x01';
    uVar11 = 0;
    if (DAT_02002470 != 0x32da) {
      uVar11 = (-DAT_02002470 | DAT_02002470) >> 0x1f;
    }
    DAT_020300f9 = (char)uVar11;
    iVar6 = DAT_020300d4;
    if (uVar11 != 0) {
      sub_08018EA8(uVar5,cVar3);
      iVar6 = DAT_020300d4;
    }
    while (iVar7 = iVar6, DAT_020300f9 != '\0') {
      if (iVar7 == 0) {
        if (DAT_020300f9 != '\0') {
          sub_08018FB8();
        }
        break;
      }
      iVar6 = *(int *)iVar7;
      iVar10 = *(int *)(iVar7 + 4);
      if ((iVar10 != 0) &&
         (*(char *)((uint)*(ushort *)(*(short *)(iVar7 + 8) * 8 + iVar2 + 6) * 8 + iVar8 + 7) !=
          '\0')) {
        if (*(byte *)(iVar10 + 0xc) < 2) {
          sub_080186C4(iVar10);
          iVar10 = sub_0801850C(3,*(char *)((uint)*(ushort *)(*(short *)(iVar7 + 8) * 8 + iVar2 + 6)
                                            * 8 + iVar8 + 7) + '\x1d');
          if (iVar10 != 0) {
            *(undefined *)(iVar10 + 0x10) = 0;
            *(undefined *)(iVar10 + 0x11) = 0;
            iVar9 = *(int *)(iVar7 + 4);
            *(undefined4 *)(iVar10 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
            *(undefined4 *)(iVar10 + 0x58) = *(undefined4 *)(iVar9 + 0x58);
          }
          *(int *)(iVar7 + 4) = iVar10;
        }
        else {
          sub_080186C4(iVar10);
          *(undefined4 *)(iVar7 + 4) = 0;
        }
      }
    }
  }
  if (((DAT_02030108 & 2) != 0) && (DAT_020300f6 == '\0')) {
    DAT_020300f6 = 0;
    ppiVar14 = (int **)DAT_020300d4;
    while (ppiVar13 = ppiVar14, ppiVar13 != (int **)0x0) {
      ppiVar14 = (int **)*ppiVar13;
      iVar6 = (int)ppiVar13[1];
      if ((iVar6 != 0) &&
         ((*(byte *)((uint)*(ushort *)(*(short *)(ppiVar13 + 2) * 8 + iVar2 + 6) * 8 + iVar8 + 5) &
          1) != 0)) {
        if ((*(ushort *)((int)ppiVar13 + 10) & 1) != 0) {
          *(uint *)(&DAT_0202fe10 + ((int)((uint)*(ushort *)(ppiVar13 + 2) << 0x10) >> 0x15) * 4) =
               *(uint *)(&DAT_0202fe10 +
                        ((int)((uint)*(ushort *)(ppiVar13 + 2) << 0x10) >> 0x15) * 4) |
               1 << (*(ushort *)(ppiVar13 + 2) & 0x1f);
        }
        sub_080186C4(iVar6);
        sub_08018988(ppiVar13);
      }
    }
    DAT_020300f6 = '\x01';
  }
  if (((DAT_02030108 & 0x40) != 0) && (DAT_020300f7 == '\0')) {
    sub_08018D98(uVar5,cVar3);
    ppiVar14 = (int **)DAT_020300d4;
    while (ppiVar13 = ppiVar14, ppiVar13 != (int **)0x0) {
      ppiVar14 = (int **)*ppiVar13;
      iVar6 = (int)ppiVar13[1];
      if ((iVar6 != 0) &&
         (*(char *)((uint)*(ushort *)(*(short *)(ppiVar13 + 2) * 8 + iVar2 + 6) * 8 + iVar8 + 6) !=
          '\0')) {
        if (*(byte *)(iVar6 + 0xc) < 2) {
          sub_080186C4(iVar6);
          iVar6 = sub_0801850C(3,0x30);
          if (iVar6 != 0) {
            *(char *)(iVar6 + 0x10) =
                 *(char *)((uint)*(ushort *)(*(short *)(ppiVar13 + 2) * 8 + iVar2 + 6) * 8 + iVar8 +
                          6) + -1;
            *(undefined *)(iVar6 + 0x11) = 0;
            iVar7 = (int)ppiVar13[1];
            *(undefined4 *)(iVar6 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
            *(undefined4 *)(iVar6 + 0x58) = *(undefined4 *)(iVar7 + 0x58);
          }
          ppiVar13[1] = (int *)iVar6;
        }
        else {
          sub_080186C4(iVar6);
          ppiVar13[1] = (int *)0x0;
        }
      }
    }
    DAT_020300f7 = '\x01';
  }
  if (DAT_020300e1 != cVar3) {
    sub_080189E0(uVar5,cVar3);
  }
  iVar6 = *param_1 >> 0xc;
  iVar7 = param_1[1];
  uVar5 = (uint)DAT_020300f4;
  iVar10 = iVar6 + -0xc;
  piVar12 = (int *)(uVar5 * 8 + iVar2);
  if (iVar10 < *piVar12) {
    do {
      piVar12 = piVar12 + -2;
      uVar5 = uVar5 - 1;
    } while (iVar10 < *piVar12);
    if (iVar10 < *(int *)(uVar5 * 8 + iVar2)) goto LAB_080181fe;
  }
  do {
    uVar5 = uVar5 + 1;
  } while (*(int *)(uVar5 * 8 + iVar2) <= iVar6 + -0xc);
LAB_080181fe:
  DAT_020300f4 = (ushort)uVar5;
  if ((DAT_020300de & 1) == 0) {
    piVar12 = (int *)(uVar5 * 8 + iVar2);
    iVar10 = *piVar12;
    while (iVar10 < iVar6 + 0xc) {
      if (((((((int)*(short *)(piVar12 + 1) - (iVar7 >> 0xc)) + 10U < 0x14) &&
            ((*(uint *)(&DAT_0202fe10 + ((int)uVar5 >> 5) * 4) & 1 << (uVar5 & 0x1f)) != 0)) &&
           (iVar10 = *(short *)(piVar12 + 1) * 0x1000, DAT_020300ec <= iVar10)) &&
          ((iVar10 - DAT_020300f0 == 0 || iVar10 < DAT_020300f0 &&
           ((DAT_020300f6 == '\0' ||
            ((*(byte *)((uint)*(ushort *)((int)piVar12 + 6) * 8 + iVar8 + 5) & 1) == 0)))))) &&
         (((DAT_020300dc != 1 ||
           ((*(byte *)((uint)*(ushort *)((int)piVar12 + 6) * 8 + iVar8 + 5) & 2) == 0)) &&
          (iVar10 = sub_0801894C(), iVar10 != 0)))) {
        if ((DAT_020300f7 == '\0') ||
           (*(char *)((uint)*(ushort *)((int)piVar12 + 6) * 8 + iVar8 + 6) == '\0')) {
          if ((DAT_020300f9 == '\0') ||
             (cVar3 = *(char *)((uint)*(ushort *)((int)piVar12 + 6) * 8 + iVar8 + 7), cVar3 == '\0')
             ) {
            iVar9 = (uint)*(ushort *)((int)piVar12 + 6) * 8 + iVar8;
            iVar9 = sub_0801850C(*(undefined *)(iVar9 + 1),*(undefined *)(iVar9 + 2));
            if (iVar9 != 0) {
              *(undefined *)(iVar9 + 0x10) =
                   *(undefined *)((uint)*(ushort *)((int)piVar12 + 6) * 8 + iVar8 + 3);
              uVar4 = *(undefined *)((uint)*(ushort *)((int)piVar12 + 6) * 8 + iVar8 + 4);
              goto LAB_08018366;
            }
          }
          else {
            iVar9 = sub_0801850C(3,cVar3 + '\x1d');
            if (iVar9 != 0) {
              uVar4 = 0;
              *(undefined *)(iVar9 + 0x10) = 0;
LAB_08018366:
              *(undefined *)(iVar9 + 0x11) = uVar4;
              goto LAB_08018368;
            }
          }
LAB_0801834c:
          sub_08018988(iVar10);
        }
        else {
          iVar9 = sub_0801850C(3,0x30);
          if (iVar9 == 0) goto LAB_0801834c;
          *(char *)(iVar9 + 0x10) =
               *(char *)((uint)*(ushort *)((int)piVar12 + 6) * 8 + iVar8 + 6) + -1;
          *(undefined *)(iVar9 + 0x11) = 0;
LAB_08018368:
          *(int *)(iVar9 + 0x54) = *piVar12 * 0x1000 + 0x800;
          *(int *)(iVar9 + 0x58) = *(short *)(piVar12 + 1) * 0x1000 + 0x7ff;
          *(int *)(iVar10 + 4) = iVar9;
          *(short *)(iVar10 + 8) = (short)uVar5;
          *(ushort *)(iVar10 + 10) =
               (ushort)*(byte *)((uint)*(ushort *)((int)piVar12 + 6) * 8 + iVar8);
          *(uint *)(&DAT_0202fe10 + ((int)uVar5 >> 5) * 4) =
               *(uint *)(&DAT_0202fe10 + ((int)uVar5 >> 5) * 4) & ~(1 << (uVar5 & 0x1f));
        }
      }
      piVar12 = piVar12 + 2;
      uVar5 = uVar5 + 1;
      iVar10 = *piVar12;
    }
    iVar6 = *param_1;
    iVar8 = param_1[1];
    ppiVar14 = (int **)DAT_020300d4;
    while (ppiVar13 = ppiVar14, ppiVar13 != (int **)0x0) {
      ppiVar14 = (int **)*ppiVar13;
      iVar10 = (int)ppiVar13[1];
      iVar7 = iVar8 >> 0xc;
      if (iVar10 == 0) {
LAB_080183f8:
        iVar10 = (int)*(short *)(ppiVar13 + 2);
        if (((iVar10 < (int)(uint)DAT_020300f4) || ((int)uVar5 <= iVar10)) ||
           (0x13 < (*(short *)(iVar10 * 8 + iVar2 + 4) - iVar7) + 10U)) {
          if ((*(ushort *)((int)ppiVar13 + 10) & 1) != 0) {
            *(uint *)(&DAT_0202fe10 + ((int)((uint)*(ushort *)(ppiVar13 + 2) << 0x10) >> 0x15) * 4)
                 = *(uint *)(&DAT_0202fe10 +
                            ((int)((uint)*(ushort *)(ppiVar13 + 2) << 0x10) >> 0x15) * 4) |
                   1 << (*(ushort *)(ppiVar13 + 2) & 0x1f);
          }
          sub_08018988(ppiVar13);
        }
      }
      else {
        uVar1 = *(ushort *)((int)ppiVar13 + 10);
        if ((uVar1 & 0x10) != 0) {
          if (2 < *(byte *)(iVar10 + 0xc)) {
            ppiVar13[1] = (int *)0x0;
          }
          goto LAB_080183f8;
        }
        if (*(byte *)(iVar10 + 0xc) < 3) {
          if (*(byte *)(iVar10 + 0xc) < 2) {
            if ((((uVar1 & 0xc) == 0) &&
                ((0x19fff < (*(int *)(iVar10 + 0x54) - iVar6) + 0xd000U ||
                 (0x17fff < (*(int *)(iVar10 + 0x58) - iVar8) + 0xc000U)))) &&
               ((iVar9 = (int)*(short *)(ppiVar13 + 2), iVar9 < (int)(uint)DAT_020300f4 ||
                (((int)uVar5 <= iVar9 || (0x13 < (*(short *)(iVar9 * 8 + iVar2 + 4) - iVar7) + 10U))
                )))) {
              sub_080186C4(iVar10);
              *(ushort *)((int)ppiVar13 + 10) = *(ushort *)((int)ppiVar13 + 10) | 0x11;
              ppiVar13[1] = (int *)0x0;
            }
          }
          else {
            if ((uVar1 & 4) != 0) {
              *(ushort *)((int)ppiVar13 + 10) = uVar1 | 1;
            }
            *(ushort *)((int)ppiVar13 + 10) = *(ushort *)((int)ppiVar13 + 10) | 0x10;
          }
        }
        else {
          if ((uVar1 & 4) != 0) {
            *(ushort *)((int)ppiVar13 + 10) = uVar1 | 1;
          }
          *(ushort *)((int)ppiVar13 + 10) = *(ushort *)((int)ppiVar13 + 10) | 0x10;
          ppiVar13[1] = (int *)0x0;
        }
      }
    }
  }
  return in_lr;
}

