// sub_0800E02C at 0x0800E02C (thumb)

undefined4 sub_0800E02C(int *param_1)

{
  byte bVar1;
  int **ppiVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int **ppiVar14;
  uint uVar15;
  undefined4 in_lr;
  
  uVar15 = DAT_0200520c & 0x7f;
  if (DAT_02022ab4 != uVar15) {
    uVar11 = DAT_02022ab0 >> uVar15 * 2;
    piVar10 = DAT_02022aa4;
    if (DAT_02022aa4 != (int *)0x0) {
      do {
        piVar13 = (int *)*piVar10;
        iVar9 = piVar10[1];
        if ((iVar9 != 0) && (*(byte *)(iVar9 + 0xc) < 2)) {
          sub_0800E758(iVar9);
        }
        piVar10 = piVar13;
      } while (piVar13 != (int *)0x0);
    }
    sub_0800E8D4();
    puVar5 = &DAT_02022920;
    do {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + -1;
    } while (0x202289f < (int)puVar5);
    DAT_02022ac0 = 1;
    DAT_02022ab8 = *(int *)(&DAT_0829b404 + uVar15 * 4);
    DAT_02022abc = *(int *)(&DAT_0829b434 + (uVar11 & 3) * 4 + uVar15 * 0xc);
    DAT_02022ab4 = (byte)uVar15;
    DAT_02022ab5 = -1;
  }
  cVar4 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_0829b508 + uVar15 * 4));
  iVar3 = DAT_02022abc;
  iVar9 = DAT_02022ab8;
  if (((DAT_02022adf & 0x80) != 0) && (DAT_02022ac2 == '\0')) {
    DAT_02022ac2 = 0;
    ppiVar14 = (int **)DAT_02022aa4;
    while (ppiVar2 = ppiVar14, ppiVar2 != (int **)0x0) {
      ppiVar14 = (int **)*ppiVar2;
      iVar6 = (int)ppiVar2[1];
      if ((iVar6 != 0) &&
         (*(char *)((uint)*(ushort *)(*(short *)(ppiVar2 + 2) * 8 + iVar3 + 6) * 8 + iVar9 + 5) !=
          '\0')) {
        if ((*(ushort *)((int)ppiVar2 + 10) & 1) != 0) {
          (&DAT_020228a0)[(int)((uint)*(ushort *)(ppiVar2 + 2) << 0x10) >> 0x15] =
               (&DAT_020228a0)[(int)((uint)*(ushort *)(ppiVar2 + 2) << 0x10) >> 0x15] |
               1 << (*(ushort *)(ppiVar2 + 2) & 0x1f);
        }
        sub_0800E758(iVar6);
        sub_0800E950(ppiVar2);
      }
    }
    DAT_02022ac2 = '\x01';
  }
  if ((((DAT_02022ae0 & 0x10) != 0) &&
      (uVar11 = DAT_02022ab0 >> uVar15 * 2 & 3, DAT_02022ac3 == '\0')) &&
     (*(short *)(&DAT_0829b538 + (uVar15 * 3 + uVar11) * 4) != 0)) {
    sub_0800ED1C(uVar15,uVar11);
    ppiVar14 = (int **)DAT_02022aa4;
    while (ppiVar2 = ppiVar14, ppiVar2 != (int **)0x0) {
      ppiVar14 = (int **)*ppiVar2;
      iVar6 = (int)ppiVar2[1];
      if ((iVar6 != 0) &&
         (*(short *)((uint)*(ushort *)(*(short *)(ppiVar2 + 2) * 8 + iVar3 + 6) * 8 + iVar9 + 6) !=
          0)) {
        if (*(byte *)(iVar6 + 0xc) < 2) {
          sub_0800E758(iVar6);
          iVar6 = sub_0800E554(3,0x39);
          if (iVar6 != 0) {
            *(char *)(iVar6 + 0x10) =
                 *(char *)((uint)*(ushort *)(*(short *)(ppiVar2 + 2) * 8 + iVar3 + 6) * 8 + iVar9 +
                          6) + -1;
            *(undefined *)(iVar6 + 0x11) = 0;
            iVar8 = (int)ppiVar2[1];
            *(undefined4 *)(iVar6 + 0x4c) = *(undefined4 *)(iVar8 + 0x4c);
            *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(iVar8 + 0x50);
          }
          ppiVar2[1] = (int *)iVar6;
        }
        else {
          sub_0800E758(iVar6);
          ppiVar2[1] = (int *)0x0;
        }
      }
    }
    DAT_02022ac3 = '\x01';
  }
  if (DAT_02022ab5 != cVar4) {
    sub_0800E9A8(uVar15,DAT_02022ab0 >> (uVar15 << 1) & 3,cVar4);
  }
  iVar12 = *param_1 >> 0xc;
  iVar6 = param_1[1];
  uVar15 = (uint)DAT_02022ac0;
  iVar8 = iVar12 + -0xc;
  piVar10 = (int *)(uVar15 * 8 + iVar3);
  if (iVar8 < *piVar10) {
    do {
      piVar10 = piVar10 + -2;
      uVar15 = uVar15 - 1;
    } while (iVar8 < *piVar10);
    if (iVar8 < *(int *)(uVar15 * 8 + iVar3)) goto LAB_0800e30a;
  }
  do {
    uVar15 = uVar15 + 1;
  } while (*(int *)(uVar15 * 8 + iVar3) <= iVar12 + -0xc);
LAB_0800e30a:
  DAT_02022ac0 = (ushort)uVar15;
  piVar10 = (int *)(uVar15 * 8 + iVar3);
  iVar8 = *piVar10;
  do {
    if (iVar12 + 0xc <= iVar8) {
      iVar6 = *param_1;
      iVar9 = param_1[1];
      ppiVar14 = (int **)DAT_02022aa4;
      while (ppiVar2 = ppiVar14, ppiVar2 != (int **)0x0) {
        ppiVar14 = (int **)*ppiVar2;
        iVar12 = (int)ppiVar2[1];
        iVar8 = iVar9 >> 0xc;
        if (iVar12 == 0) {
          iVar12 = (int)*(short *)(ppiVar2 + 2);
          if (((iVar12 < (int)(uint)DAT_02022ac0) || ((int)uVar15 <= iVar12)) ||
             (0x13 < (*(short *)(iVar12 * 8 + iVar3 + 4) - iVar8) + 10U)) {
            if ((*(ushort *)((int)ppiVar2 + 10) & 1) != 0) {
              (&DAT_020228a0)[(int)((uint)*(ushort *)(ppiVar2 + 2) << 0x10) >> 0x15] =
                   (&DAT_020228a0)[(int)((uint)*(ushort *)(ppiVar2 + 2) << 0x10) >> 0x15] |
                   1 << (*(ushort *)(ppiVar2 + 2) & 0x1f);
            }
            sub_0800E950(ppiVar2);
          }
        }
        else if (*(char *)(iVar12 + 0xc) == '\x04') {
          ppiVar2[1] = (int *)0x0;
        }
        else if ((((*(ushort *)((int)ppiVar2 + 10) & 0xc) == 0) &&
                 ((0x19fff < (*(int *)(iVar12 + 0x4c) - iVar6) + 0xd000U ||
                  (0x17fff < (*(int *)(iVar12 + 0x50) - iVar9) + 0xc000U)))) &&
                ((iVar7 = (int)*(short *)(ppiVar2 + 2), iVar7 < (int)(uint)DAT_02022ac0 ||
                 (((int)uVar15 <= iVar7 ||
                  (0x13 < (*(short *)(iVar7 * 8 + iVar3 + 4) - iVar8) + 10U)))))) {
          sub_0800E758(iVar12);
          ppiVar2[1] = (int *)0x0;
          *(ushort *)((int)ppiVar2 + 10) = *(ushort *)((int)ppiVar2 + 10) | 1;
        }
      }
      return in_lr;
    }
    if ((((((int)*(short *)(piVar10 + 1) - (iVar6 >> 0xc)) + 10U < 0x14) &&
         (((&DAT_020228a0)[(int)uVar15 >> 5] & 1 << (uVar15 & 0x1f)) != 0)) &&
        ((bVar1 = (byte)DAT_02022aae, (DAT_02022aae & 1) == 0 &&
         ((DAT_02022ac2 == '\0' ||
          (*(char *)((uint)*(ushort *)((int)piVar10 + 6) * 8 + iVar9 + 5) == '\0')))))) &&
       (iVar8 = sub_0800E918(), iVar8 != 0)) {
      if ((DAT_02022ac3 == '\0') ||
         (*(short *)((uint)*(ushort *)((int)piVar10 + 6) * 8 + iVar9 + 6) == 0)) {
        iVar7 = (uint)*(ushort *)((int)piVar10 + 6) * 8 + iVar9;
        iVar7 = sub_0800E554(*(undefined *)(iVar7 + 1),*(undefined *)(iVar7 + 2));
        if (iVar7 == 0) goto LAB_0800e3e0;
        *(undefined *)(iVar7 + 0x10) =
             *(undefined *)((uint)*(ushort *)((int)piVar10 + 6) * 8 + iVar9 + 3);
        *(undefined *)(iVar7 + 0x11) =
             *(undefined *)((uint)*(ushort *)((int)piVar10 + 6) * 8 + iVar9 + 4);
      }
      else {
        iVar7 = sub_0800E554(3,0x39);
        if (iVar7 == 0) {
LAB_0800e3e0:
          sub_0800E950(iVar8);
          goto LAB_0800e438;
        }
        *(char *)(iVar7 + 0x10) =
             *(char *)((uint)*(ushort *)((int)piVar10 + 6) * 8 + iVar9 + 6) + -1;
        *(byte *)(iVar7 + 0x11) = bVar1 & 1;
      }
      *(int *)(iVar7 + 0x4c) = *piVar10 * 0x1000 + 0x800;
      *(int *)(iVar7 + 0x50) = *(short *)(piVar10 + 1) * 0x1000 + 0x7ff;
      *(int *)(iVar8 + 4) = iVar7;
      *(short *)(iVar8 + 8) = (short)uVar15;
      *(ushort *)(iVar8 + 10) = (ushort)*(byte *)((uint)*(ushort *)((int)piVar10 + 6) * 8 + iVar9);
      (&DAT_020228a0)[(int)uVar15 >> 5] =
           (&DAT_020228a0)[(int)uVar15 >> 5] & ~(1 << (uVar15 & 0x1f));
    }
LAB_0800e438:
    piVar10 = piVar10 + 2;
    uVar15 = uVar15 + 1;
    iVar8 = *piVar10;
  } while( true );
}

