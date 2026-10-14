// sub_0801D5E0 at 0x0801D5E0 (thumb)

/* WARNING: Type propagation algorithm not settling */

undefined4 sub_0801D5E0(int *param_1)

{
  short sVar1;
  ushort uVar2;
  int **ppiVar3;
  int *piVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int **ppiVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  undefined4 in_lr;
  uint local_38;
  int local_34;
  
  uVar7 = (uint)DAT_0202e890;
  if (uVar7 == 4) {
    iVar9 = 0x7fffffff;
    iVar18 = FUN_081288bc(*param_1 + -0xf000,0x3c000);
    cVar6 = sub_08128884(param_1,0x801e541);
    piVar4 = DAT_0202e898;
    iVar11 = DAT_0202e894;
    local_38 = 1;
    sVar1 = *(short *)(DAT_0202e898 + 5);
    while (sVar1 != 0) {
      local_38 = local_38 + 1 & 0xff;
      sVar1 = *(short *)(DAT_0202e898 + local_38 * 3 + 2);
    }
    uVar7 = local_38 - 1 & 0xff;
    if (DAT_0202e891 != cVar6) {
      sub_0801E25C(4);
    }
    iVar21 = *param_1;
    uVar19 = 1;
    bVar5 = 0;
    iVar20 = sub_08128954(iVar21 + -0xf000,0x3c000);
    if (iVar20 + 0xf000 < 0x21000) {
      local_34 = 0xff;
    }
    else {
      local_34 = 0;
      if (0x39000 < iVar20 + 0xf000) {
        local_34 = 1;
      }
    }
    uVar17 = 1;
    if (uVar7 != 0) {
      do {
        iVar20 = piVar4[uVar17 * 3];
        if (((char)local_34 < '\0') && (0x2d0 < iVar20)) {
          iVar10 = -0x3c0;
LAB_0801d726:
          iVar20 = iVar20 + iVar10;
        }
        else if (('\0' < (char)local_34) && (piVar4[uVar17 * 3] < 0x2d1)) {
          iVar10 = 0x3c0;
          goto LAB_0801d726;
        }
        iVar20 = iVar20 + (iVar18 * 0x3c000 >> 8);
        iVar10 = iVar20 - (iVar21 + -0xc000 >> 8);
        if (-1 < iVar10) {
          if (iVar10 < 0x180) {
            bVar5 = bVar5 + 1;
          }
          if (iVar20 < iVar9) {
            iVar9 = iVar20;
            uVar19 = uVar17;
          }
        }
        uVar17 = uVar17 + 1 & 0xff;
      } while (uVar17 <= uVar7);
    }
    if ((DAT_0202e88e & 1) != 0) {
      return in_lr;
    }
    bVar16 = 0;
    if (bVar5 != 0) {
      piVar14 = piVar4 + uVar19 * 3;
      do {
        iVar9 = *piVar14;
        if ((local_34 * 0x1000000 < 0) && (0x2d0 < iVar9)) {
          iVar9 = iVar9 + -0x3c0;
        }
        else if ((0 < local_34 << 0x18) && (*piVar14 < 0x2d1)) {
          iVar9 = iVar9 + 0x3c0;
        }
        iVar21 = piVar14[1] * 0x100 + -1;
        if ((iVar21 - param_1[1]) + 0xa000U < 0x14000) {
          puVar8 = &DAT_0202e440 + ((int)uVar19 >> 5);
          uVar17 = 1 << (uVar19 & 0x1f);
          if ((((((*puVar8 & uVar17) != 0) && (DAT_0202e89c <= iVar21)) && (iVar21 <= DAT_0202e8a0))
              && ((DAT_0202e88c != 1 ||
                  ((*(byte *)((uint)*(ushort *)(piVar14 + 2) * 8 + iVar11 + 5) & 2) == 0)))) &&
             (iVar20 = sub_0801E1C4(), iVar20 != 0)) {
            iVar10 = (uint)*(ushort *)(piVar14 + 2) * 8 + iVar11;
            iVar10 = sub_0801DD7C(*(undefined *)(iVar10 + 1),*(undefined *)(iVar10 + 2));
            if (iVar10 == 0) {
              sub_0801E204(iVar20);
            }
            else {
              *(undefined *)(iVar10 + 0x10) =
                   *(undefined *)((uint)*(ushort *)(piVar14 + 2) * 8 + iVar11 + 3);
              *(undefined *)(iVar10 + 0x11) =
                   *(undefined *)((uint)*(ushort *)(piVar14 + 2) * 8 + iVar11 + 4);
              *(int *)(iVar10 + 0x54) = iVar9 * 0x100 + iVar18 * 0x3c000;
              *(int *)(iVar10 + 0x58) = iVar21;
              *(int *)(iVar20 + 4) = iVar10;
              *(short *)(iVar20 + 8) = (short)uVar19;
              *(ushort *)(iVar20 + 10) =
                   (ushort)*(byte *)((uint)*(ushort *)(piVar14 + 2) * 8 + iVar11);
              uVar13 = *(undefined4 *)(iVar10 + 0x58);
              *(undefined4 *)(iVar20 + 0xc) = *(undefined4 *)(iVar10 + 0x54);
              *(undefined4 *)(iVar20 + 0x10) = uVar13;
              *puVar8 = *puVar8 & ~uVar17;
            }
          }
        }
        bVar16 = bVar16 + 1;
        uVar19 = uVar19 + 1;
        if ((int)uVar7 < (int)uVar19) {
          uVar19 = 1;
          piVar14 = piVar4;
        }
        piVar14 = piVar14 + 3;
      } while (bVar16 < bVar5);
    }
    iVar11 = *param_1;
    iVar9 = param_1[1];
    ppiVar12 = (int **)DAT_0202e884;
joined_r0x0801d8ee:
    ppiVar3 = ppiVar12;
    if (ppiVar3 == (int **)0x0) {
      return in_lr;
    }
    ppiVar12 = (int **)*ppiVar3;
    iVar18 = (int)ppiVar3[1];
    if (iVar18 != 0) goto code_r0x0801d900;
    goto LAB_0801d9cc;
  }
  cVar6 = sub_08128884(param_1,*(undefined4 *)(&DAT_0883953c + uVar7 * 4));
  piVar4 = DAT_0202e898;
  iVar11 = DAT_0202e894;
  if (DAT_0202e891 != cVar6) {
    sub_0801E25C(uVar7);
  }
  iVar9 = *param_1 + -0xc000 >> 8;
  uVar7 = (uint)DAT_0202e8a4;
  piVar14 = piVar4 + uVar7 * 3;
  if (*piVar14 <= iVar9) goto LAB_0801dab4;
  do {
    piVar14 = piVar14 + -3;
    uVar7 = uVar7 - 1;
  } while (iVar9 < *piVar14);
  for (; piVar4[uVar7 * 3] <= iVar9; uVar7 = uVar7 + 1) {
LAB_0801dab4:
  }
  DAT_0202e8a4 = (ushort)uVar7;
  if ((DAT_0202e88e & 1) == 0) {
    iVar9 = *param_1 + 0xc000;
    iVar18 = param_1[1];
    piVar14 = piVar4 + uVar7 * 3;
    iVar21 = *piVar14 * 0x100;
    if (iVar9 != iVar21 && iVar9 + *piVar14 * -0x100 < 0 == SBORROW4(iVar9,iVar21)) {
      do {
        iVar20 = piVar14[1] * 0x100 + -1;
        if ((iVar20 - iVar18) + 0xa000U < 0x14000) {
          puVar8 = &DAT_0202e440 + ((int)uVar7 >> 5);
          uVar19 = 1 << (uVar7 & 0x1f);
          if (((((*puVar8 & uVar19) != 0) && (DAT_0202e89c <= iVar20)) && (iVar20 <= DAT_0202e8a0))
             && (((DAT_0202e88c != 1 ||
                  ((*(byte *)((uint)*(ushort *)(piVar14 + 2) * 8 + iVar11 + 5) & 2) == 0)) &&
                 (iVar10 = sub_0801E1C4(), iVar10 != 0)))) {
            iVar15 = (uint)*(ushort *)(piVar14 + 2) * 8 + iVar11;
            iVar15 = sub_0801DD7C(*(undefined *)(iVar15 + 1),*(undefined *)(iVar15 + 2));
            if (iVar15 == 0) {
              sub_0801E204(iVar10);
            }
            else {
              *(undefined *)(iVar15 + 0x10) =
                   *(undefined *)((uint)*(ushort *)(piVar14 + 2) * 8 + iVar11 + 3);
              *(undefined *)(iVar15 + 0x11) =
                   *(undefined *)((uint)*(ushort *)(piVar14 + 2) * 8 + iVar11 + 4);
              *(int *)(iVar15 + 0x54) = iVar21;
              *(int *)(iVar15 + 0x58) = iVar20;
              *(int *)(iVar10 + 4) = iVar15;
              *(short *)(iVar10 + 8) = (short)uVar7;
              *(ushort *)(iVar10 + 10) =
                   (ushort)*(byte *)((uint)*(ushort *)(piVar14 + 2) * 8 + iVar11);
              *puVar8 = *puVar8 & ~uVar19;
            }
          }
        }
        piVar14 = piVar14 + 3;
        uVar7 = uVar7 + 1;
        iVar21 = *piVar14 * 0x100;
      } while (iVar9 != iVar21 && iVar9 + *piVar14 * -0x100 < 0 == SBORROW4(iVar9,iVar21));
    }
    iVar9 = *param_1;
    iVar11 = param_1[1];
    ppiVar12 = (int **)DAT_0202e884;
joined_r0x0801dc06:
    ppiVar3 = ppiVar12;
    if (ppiVar3 != (int **)0x0) {
      ppiVar12 = (int **)*ppiVar3;
      iVar18 = (int)ppiVar3[1];
      if (iVar18 != 0) goto code_r0x0801dc1a;
      goto LAB_0801dcf8;
    }
  }
  return in_lr;
code_r0x0801d900:
  uVar2 = *(ushort *)((int)ppiVar3 + 10);
  if ((uVar2 & 0x10) == 0) {
    if (*(byte *)(iVar18 + 0xc) < 3) {
      if (*(byte *)(iVar18 + 0xc) < 2) {
        if ((((uVar2 & 0xc) == 0) &&
            ((0x19fff < (*(int *)(iVar18 + 0x54) - iVar11) + 0xd000U ||
             (0x17fff < (*(int *)(iVar18 + 0x58) - iVar9) + 0xc000U)))) &&
           ((0x19fff < (uint)((int)ppiVar3[3] + (0xd000 - iVar11)) ||
            (0x17fff < (uint)((int)ppiVar3[4] + (0xc000 - iVar9)))))) {
          sub_0801DF34(iVar18);
          *(ushort *)((int)ppiVar3 + 10) = *(ushort *)((int)ppiVar3 + 10) | 0x11;
          ppiVar3[1] = (int *)(uVar2 & 0xc);
        }
      }
      else {
        if ((uVar2 & 4) != 0) {
          *(ushort *)((int)ppiVar3 + 10) = uVar2 | 1;
        }
        *(ushort *)((int)ppiVar3 + 10) = *(ushort *)((int)ppiVar3 + 10) | 0x10;
      }
    }
    else {
      if ((uVar2 & 4) != 0) {
        *(ushort *)((int)ppiVar3 + 10) = uVar2 | 1;
      }
      *(ushort *)((int)ppiVar3 + 10) = *(ushort *)((int)ppiVar3 + 10) | 0x10;
      ppiVar3[1] = (int *)0x0;
    }
  }
  else if (2 < *(byte *)(iVar18 + 0xc)) {
    ppiVar3[1] = (int *)0x0;
  }
  if ((iVar18 == 0) || ((*(ushort *)((int)ppiVar3 + 10) & 0x10) != 0)) {
LAB_0801d9cc:
    if ((0x17fff < (uint)((int)ppiVar3[3] + (0xc000 - iVar11))) ||
       (0x13fff < (uint)((int)ppiVar3[4] + (0xa000 - iVar9)))) {
      if ((*(ushort *)((int)ppiVar3 + 10) & 1) != 0) {
        (&DAT_0202e440)[(int)((uint)*(ushort *)(ppiVar3 + 2) << 0x10) >> 0x15] =
             (&DAT_0202e440)[(int)((uint)*(ushort *)(ppiVar3 + 2) << 0x10) >> 0x15] |
             1 << (*(ushort *)(ppiVar3 + 2) & 0x1f);
      }
      sub_0801E204(ppiVar3);
    }
  }
  goto joined_r0x0801d8ee;
code_r0x0801dc1a:
  uVar2 = *(ushort *)((int)ppiVar3 + 10);
  if ((uVar2 & 0x10) == 0) {
    if (*(byte *)(iVar18 + 0xc) < 3) {
      if (*(byte *)(iVar18 + 0xc) < 2) {
        if (((uVar2 & 0xc) == 0) &&
           ((0x19fff < (*(int *)(iVar18 + 0x54) - iVar9) + 0xd000U ||
            (0x17fff < (*(int *)(iVar18 + 0x58) - iVar11) + 0xc000U)))) {
          iVar21 = (int)*(short *)(ppiVar3 + 2);
          if ((iVar21 < (int)(uint)DAT_0202e8a4) ||
             (((int)uVar7 <= iVar21 ||
              (0x17fff < (piVar4[iVar21 * 3 + 1] * 0x100 - iVar11) + 0xbfffU)))) {
            sub_0801DF34(iVar18);
            *(ushort *)((int)ppiVar3 + 10) = *(ushort *)((int)ppiVar3 + 10) | 0x11;
            ppiVar3[1] = (int *)0x0;
          }
        }
      }
      else {
        if ((uVar2 & 4) != 0) {
          *(ushort *)((int)ppiVar3 + 10) = uVar2 | 1;
        }
        *(ushort *)((int)ppiVar3 + 10) = *(ushort *)((int)ppiVar3 + 10) | 0x10;
      }
    }
    else {
      if ((uVar2 & 4) != 0) {
        *(ushort *)((int)ppiVar3 + 10) = uVar2 | 1;
      }
      *(ushort *)((int)ppiVar3 + 10) = *(ushort *)((int)ppiVar3 + 10) | 0x10;
      ppiVar3[1] = (int *)0x0;
    }
  }
  else if (2 < *(byte *)(iVar18 + 0xc)) {
    ppiVar3[1] = (int *)0x0;
  }
  if ((iVar18 == 0) || ((*(ushort *)((int)ppiVar3 + 10) & 0x10) != 0)) {
LAB_0801dcf8:
    iVar18 = (int)*(short *)(ppiVar3 + 2);
    if ((iVar18 < (int)(uint)DAT_0202e8a4) ||
       (((int)uVar7 <= iVar18 || (0x13fff < (piVar4[iVar18 * 3 + 1] * 0x100 - iVar11) + 0x9fffU))))
    {
      if ((*(ushort *)((int)ppiVar3 + 10) & 1) != 0) {
        (&DAT_0202e440)[(int)((uint)*(ushort *)(ppiVar3 + 2) << 0x10) >> 0x15] =
             (&DAT_0202e440)[(int)((uint)*(ushort *)(ppiVar3 + 2) << 0x10) >> 0x15] |
             1 << (*(ushort *)(ppiVar3 + 2) & 0x1f);
      }
      sub_0801E204(ppiVar3);
    }
  }
  goto joined_r0x0801dc06;
}

