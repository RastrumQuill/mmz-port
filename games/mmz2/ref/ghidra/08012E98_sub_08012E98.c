// sub_08012E98 at 0x08012E98 (thumb)

undefined4 sub_08012E98(int *param_1)

{
  int **ppiVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int **ppiVar11;
  undefined4 in_lr;
  
  uVar10 = (uint)DAT_0202eba0;
  cVar3 = sub_080EF118(param_1,*(undefined4 *)(&DAT_083215b8 + uVar10 * 4));
  iVar2 = DAT_0202eba8;
  iVar5 = DAT_0202eba4;
  if (((DAT_0202ebbb & 1) != 0) && (DAT_0202ebae == '\0')) {
    DAT_0202ebae = 0;
    ppiVar11 = (int **)DAT_0202eb94;
    while (ppiVar1 = ppiVar11, ppiVar1 != (int **)0x0) {
      ppiVar11 = (int **)*ppiVar1;
      iVar4 = (int)ppiVar1[1];
      if ((iVar4 != 0) &&
         ((*(byte *)((uint)*(ushort *)(*(short *)(ppiVar1 + 2) * 8 + iVar2 + 6) * 8 + iVar5 + 5) & 1
          ) != 0)) {
        if ((*(ushort *)((int)ppiVar1 + 10) & 1) != 0) {
          *(uint *)(&DAT_0202e990 + ((int)((uint)*(ushort *)(ppiVar1 + 2) << 0x10) >> 0x15) * 4) =
               *(uint *)(&DAT_0202e990 + ((int)((uint)*(ushort *)(ppiVar1 + 2) << 0x10) >> 0x15) * 4
                        ) | 1 << (*(ushort *)(ppiVar1 + 2) & 0x1f);
        }
        sub_080134C0(iVar4);
        sub_080136DC(ppiVar1);
      }
    }
    DAT_0202ebae = '\x01';
  }
  if ((((DAT_0202ebbb & 0x20) != 0) && (DAT_0202ebaf == '\0')) &&
     (*(short *)(&DAT_08321600 + uVar10 * 4) != 0)) {
    sub_08013978(uVar10);
    ppiVar11 = (int **)DAT_0202eb94;
    while (ppiVar1 = ppiVar11, ppiVar1 != (int **)0x0) {
      ppiVar11 = (int **)*ppiVar1;
      iVar4 = (int)ppiVar1[1];
      if ((iVar4 != 0) &&
         (*(short *)((uint)*(ushort *)(*(short *)(ppiVar1 + 2) * 8 + iVar2 + 6) * 8 + iVar5 + 6) !=
          0)) {
        if (*(byte *)(iVar4 + 0xc) < 2) {
          sub_080134C0(iVar4);
          iVar4 = sub_08013308(3,0x52);
          if (iVar4 != 0) {
            *(char *)(iVar4 + 0x10) =
                 *(char *)((uint)*(ushort *)(*(short *)(ppiVar1 + 2) * 8 + iVar2 + 6) * 8 + iVar5 +
                          6) + -1;
            *(undefined *)(iVar4 + 0x11) = 0;
            iVar7 = (int)ppiVar1[1];
            *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
            *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar7 + 0x58);
          }
          ppiVar1[1] = (int *)iVar4;
        }
        else {
          sub_080134C0(iVar4);
          ppiVar1[1] = (int *)0x0;
        }
      }
    }
    DAT_0202ebaf = '\x01';
  }
  if (DAT_0202eba1 != cVar3) {
    sub_08013734(uVar10,cVar3);
  }
  iVar9 = *param_1 >> 0xc;
  iVar4 = param_1[1];
  uVar10 = (uint)DAT_0202ebac;
  iVar7 = iVar9 + -0xc;
  piVar8 = (int *)(uVar10 * 8 + iVar2);
  if (iVar7 < *piVar8) {
    do {
      piVar8 = piVar8 + -2;
      uVar10 = uVar10 - 1;
    } while (iVar7 < *piVar8);
    if (iVar7 < *(int *)(uVar10 * 8 + iVar2)) goto LAB_0801309a;
  }
  do {
    uVar10 = uVar10 + 1;
  } while (*(int *)(uVar10 * 8 + iVar2) <= iVar9 + -0xc);
LAB_0801309a:
  DAT_0202ebac = (ushort)uVar10;
  if ((DAT_0202eb9e & 1) == 0) {
    piVar8 = (int *)(uVar10 * 8 + iVar2);
    iVar7 = *piVar8;
    while (iVar7 < iVar9 + 0xc) {
      if ((((((int)*(short *)(piVar8 + 1) - (iVar4 >> 0xc)) + 10U < 0x14) &&
           ((*(uint *)(&DAT_0202e990 + ((int)uVar10 >> 5) * 4) & 1 << (uVar10 & 0x1f)) != 0)) &&
          ((DAT_0202ebae == '\0' ||
           ((*(byte *)((uint)*(ushort *)((int)piVar8 + 6) * 8 + iVar5 + 5) & 1) == 0)))) &&
         (((DAT_0202eb9c != 1 ||
           ((*(byte *)((uint)*(ushort *)((int)piVar8 + 6) * 8 + iVar5 + 5) & 2) == 0)) &&
          (iVar7 = sub_080136A0(), iVar7 != 0)))) {
        if ((DAT_0202ebaf == '\0') ||
           (*(short *)((uint)*(ushort *)((int)piVar8 + 6) * 8 + iVar5 + 6) == 0)) {
          iVar6 = (uint)*(ushort *)((int)piVar8 + 6) * 8 + iVar5;
          iVar6 = sub_08013308(*(undefined *)(iVar6 + 1),*(undefined *)(iVar6 + 2));
          if (iVar6 == 0) goto LAB_08013194;
          *(undefined *)(iVar6 + 0x10) =
               *(undefined *)((uint)*(ushort *)((int)piVar8 + 6) * 8 + iVar5 + 3);
          *(undefined *)(iVar6 + 0x11) =
               *(undefined *)((uint)*(ushort *)((int)piVar8 + 6) * 8 + iVar5 + 4);
        }
        else {
          iVar6 = sub_08013308(3,0x52);
          if (iVar6 == 0) {
LAB_08013194:
            sub_080136DC(iVar7);
            goto LAB_080131ec;
          }
          *(char *)(iVar6 + 0x10) =
               *(char *)((uint)*(ushort *)((int)piVar8 + 6) * 8 + iVar5 + 6) + -1;
          *(undefined *)(iVar6 + 0x11) = 0;
        }
        *(int *)(iVar6 + 0x54) = *piVar8 * 0x1000 + 0x800;
        *(int *)(iVar6 + 0x58) = *(short *)(piVar8 + 1) * 0x1000 + 0x7ff;
        *(int *)(iVar7 + 4) = iVar6;
        *(short *)(iVar7 + 8) = (short)uVar10;
        *(ushort *)(iVar7 + 10) = (ushort)*(byte *)((uint)*(ushort *)((int)piVar8 + 6) * 8 + iVar5);
        *(uint *)(&DAT_0202e990 + ((int)uVar10 >> 5) * 4) =
             *(uint *)(&DAT_0202e990 + ((int)uVar10 >> 5) * 4) & ~(1 << (uVar10 & 0x1f));
      }
LAB_080131ec:
      piVar8 = piVar8 + 2;
      uVar10 = uVar10 + 1;
      iVar7 = *piVar8;
    }
    iVar4 = *param_1;
    iVar5 = param_1[1];
    ppiVar11 = (int **)DAT_0202eb94;
    while (ppiVar1 = ppiVar11, ppiVar1 != (int **)0x0) {
      ppiVar11 = (int **)*ppiVar1;
      iVar9 = (int)ppiVar1[1];
      iVar7 = iVar5 >> 0xc;
      if (iVar9 == 0) {
        iVar9 = (int)*(short *)(ppiVar1 + 2);
        if (((iVar9 < (int)(uint)DAT_0202ebac) || ((int)uVar10 <= iVar9)) ||
           (0x13 < (*(short *)(iVar9 * 8 + iVar2 + 4) - iVar7) + 10U)) {
          if ((*(ushort *)((int)ppiVar1 + 10) & 1) != 0) {
            *(uint *)(&DAT_0202e990 + ((int)((uint)*(ushort *)(ppiVar1 + 2) << 0x10) >> 0x15) * 4) =
                 *(uint *)(&DAT_0202e990 +
                          ((int)((uint)*(ushort *)(ppiVar1 + 2) << 0x10) >> 0x15) * 4) |
                 1 << (*(ushort *)(ppiVar1 + 2) & 0x1f);
          }
          sub_080136DC(ppiVar1);
        }
      }
      else if (*(byte *)(iVar9 + 0xc) < 2) {
        if ((((*(ushort *)((int)ppiVar1 + 10) & 0xc) == 0) &&
            ((0x19fff < (*(int *)(iVar9 + 0x54) - iVar4) + 0xd000U ||
             (0x17fff < (*(int *)(iVar9 + 0x58) - iVar5) + 0xc000U)))) &&
           ((iVar6 = (int)*(short *)(ppiVar1 + 2), iVar6 < (int)(uint)DAT_0202ebac ||
            (((int)uVar10 <= iVar6 || (0x13 < (*(short *)(iVar6 * 8 + iVar2 + 4) - iVar7) + 10U)))))
           ) {
          sub_080134C0(iVar9);
          ppiVar1[1] = (int *)0x0;
          *(ushort *)((int)ppiVar1 + 10) = *(ushort *)((int)ppiVar1 + 10) | 1;
        }
      }
      else {
        ppiVar1[1] = (int *)0x0;
      }
    }
  }
  return in_lr;
}

