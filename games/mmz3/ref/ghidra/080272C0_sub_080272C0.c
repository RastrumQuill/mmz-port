// sub_080272C0 at 0x080272C0 (thumb)

undefined8 sub_080272C0(int param_1,short *param_2)

{
  bool bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  
  iVar4 = *(int *)(param_1 + 0x54);
  iVar8 = *(int *)(param_1 + 0x58);
  *(undefined *)(param_1 + 399) = 0;
  local_40 = 0;
  local_38 = 0;
  local_3c = 0;
  psVar9 = (short *)(param_1 + 0x16c);
  sVar2 = *psVar9;
  while (sVar2 != -1) {
    uVar7 = 0;
    bVar1 = true;
    if (DAT_02002652 != 0) {
      do {
        if ((&DAT_02002654)[uVar7 * 0xc] == psVar9[local_3c]) {
          bVar1 = false;
          break;
        }
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < DAT_02002652);
    }
    psVar9[local_3c] = -1;
    if (!bVar1) {
      iVar10 = (&DAT_0200265c)[uVar7 * 6] - (&DAT_02002664)[uVar7 * 6];
      if (iVar10 != 0) {
        iVar6 = iVar10;
        if (iVar10 < 0) {
          iVar6 = -iVar10;
        }
        if (iVar6 < 0x1000) {
          iVar6 = *(int *)(param_1 + 0x54) + iVar10;
          *(int *)(param_1 + 0x54) = iVar6;
          if (iVar10 < 1) {
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar5 = (int)*param_2;
              uVar3 = param_2[2];
            }
            else {
              iVar5 = -(int)*param_2;
              uVar3 = param_2[2];
            }
            iVar6 = (iVar6 + iVar5) - ((int)((uint)uVar3 << 0x10) >> 0x11);
          }
          else {
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar5 = (int)*param_2;
              uVar3 = param_2[2];
            }
            else {
              iVar5 = -(int)*param_2;
              uVar3 = param_2[2];
            }
            iVar6 = iVar6 + iVar5 + ((int)((uint)uVar3 << 0x10) >> 0x11);
          }
          if (*(char *)(param_1 + 0xd) == '\x02') {
            if (iVar6 < *(int *)(param_1 + 0x54)) {
              iVar5 = (int)param_2[2];
            }
            else {
              iVar5 = -(int)param_2[2];
            }
            iVar5 = iVar5 + iVar6;
            iVar11 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
                     ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
            sVar2 = sub_08009AC0(iVar6,iVar11);
            if (((sVar2 != 0) || (sVar2 = sub_08028574(param_1,iVar6,iVar11), sVar2 != 0)) &&
               ((sVar2 = sub_08009AC0(iVar5,iVar11), sVar2 != 0 ||
                (sVar2 = sub_08028574(param_1,iVar5,iVar11), sVar2 != 0)))) goto LAB_08027916;
            iVar11 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                     ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
            sVar2 = sub_08009AC0(iVar6,iVar11);
            if (((sVar2 != 0) || (sVar2 = sub_08028574(param_1,iVar6,iVar11), sVar2 != 0)) &&
               ((sVar2 = sub_08009AC0(iVar5,iVar11), sVar2 != 0 ||
                (sVar2 = sub_08028574(param_1,iVar5,iVar11), sVar2 != 0)))) goto LAB_08027916;
          }
          if (iVar10 < 1) {
            iVar10 = sub_0800A04C(iVar6,*(int *)(param_1 + 0x58) + (int)param_2[1] +
                                        ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
            if (0 < iVar10) {
              *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar10;
            }
            iVar10 = sub_0800A04C(iVar6,*(int *)(param_1 + 0x58) + (int)param_2[1]);
            if (0 < iVar10) {
              *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar10;
            }
            iVar10 = sub_0800A04C(iVar6,(*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                        ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
            if (0 < iVar10) goto LAB_0802758a;
          }
          else {
            iVar10 = sub_08009ED0(iVar6,*(int *)(param_1 + 0x58) + (int)param_2[1] +
                                        ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
            if (iVar10 < 0) {
              *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar10;
            }
            iVar10 = sub_08009ED0(iVar6,*(int *)(param_1 + 0x58) + (int)param_2[1]);
            if (iVar10 < 0) {
              *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar10;
            }
            iVar10 = sub_08009ED0(iVar6,(*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                        ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
            if (iVar10 < 0) {
LAB_0802758a:
              *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar10;
            }
          }
        }
      }
      iVar10 = (&DAT_02002660)[uVar7 * 6] - *(int *)(&DAT_02002668 + uVar7 * 0x18);
      if (((iVar10 != 0) &&
          ((*(char *)(param_1 + 0xd) == '\x02' ||
           (*(int *)(param_1 + 0x58) <= (int)(&DAT_02002660)[uVar7 * 6])))) &&
         ((local_40 == 0 || (iVar10 < local_40)))) {
        local_40 = iVar10;
      }
    }
    local_3c = local_3c + 1 & 0xff;
    if (0xf < local_3c) break;
    sVar2 = psVar9[local_3c];
  }
  if (local_40 != 0) {
    iVar10 = local_40;
    if (local_40 < 0) {
      iVar10 = -local_40;
    }
    if (iVar10 < 0x1000) {
      iVar10 = *(int *)(param_1 + 0x58) + local_40;
      *(int *)(param_1 + 0x58) = iVar10;
      if (*(char *)(param_1 + 0x18d) == '\0') {
        if (*(char *)(param_1 + 0xd) == '\x02') {
          if (local_40 < 1) {
            if ((local_40 < 0) &&
               (uVar3 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),iVar10 + -0x1e00), uVar3 != 0))
            {
              iVar10 = sub_08009D5C(*(undefined4 *)(param_1 + 0x54),
                                    *(int *)(param_1 + 0x58) + -0x1e00);
              if (0 < iVar10) {
                *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1 + iVar10;
              }
              if ((uVar3 & 0x10) != 0) {
                local_38 = 2;
              }
            }
          }
          else {
            local_40 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),iVar10);
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar10 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
                       ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            else {
              iVar10 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
                       ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            iVar6 = sub_08009BE4(iVar10,*(undefined4 *)(param_1 + 0x58));
            if (iVar6 < local_40) {
              local_40 = iVar6;
            }
            iVar10 = sub_0802829C(param_1,iVar10,*(undefined4 *)(param_1 + 0x58));
            if (iVar10 < local_40) {
              local_40 = iVar10;
            }
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar10 = *(int *)(param_1 + 0x54) + (int)*param_2 +
                       ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            else {
              iVar10 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
                       ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            iVar6 = sub_08009BE4(iVar10,*(undefined4 *)(param_1 + 0x58));
            if (iVar6 < local_40) {
              local_40 = iVar6;
            }
            iVar10 = sub_0802829C(param_1,iVar10,*(undefined4 *)(param_1 + 0x58));
            if (iVar10 < local_40) {
              local_40 = iVar10;
            }
            if (local_40 < 0) {
              iVar10 = *(int *)(param_1 + 0x58) + local_40;
              goto LAB_08027ad8;
            }
          }
        }
        else {
          if (((local_40 < 0) &&
              (((uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),iVar10 + -0x1e00),
                (uVar7 & 0x8000) == 0 ||
                (uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),
                                      *(int *)(param_1 + 0x58) + -0x1e00), (uVar7 & 0xf) == 0)) ||
               (uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),
                                     *(int *)(param_1 + 0x58) + -0x1e00), 0xe < (uVar7 & 0xf))))) &&
             (iVar10 = sub_08009D5C(*(undefined4 *)(param_1 + 0x54),
                                    *(int *)(param_1 + 0x58) + -0x1e00), 0 < iVar10)) {
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1 + iVar10;
          }
          if ((0 < local_40) &&
             ((((uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),
                                      *(undefined4 *)(param_1 + 0x58)), (uVar7 & 0x8000) == 0 ||
                (uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),
                                      *(undefined4 *)(param_1 + 0x58)), (uVar7 & 0xf) == 0)) ||
               (uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)
                                    ), 0xe < (uVar7 & 0xf))) &&
              (local_40 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),
                                       *(undefined4 *)(param_1 + 0x58)), local_40 < 0)))) {
            iVar10 = *(int *)(param_1 + 0x58) + -1;
LAB_08027ad6:
            iVar10 = iVar10 + local_40;
LAB_08027ad8:
            *(int *)(param_1 + 0x58) = iVar10;
          }
        }
      }
      else if (local_40 < 1) {
        if (local_40 < 0) {
          iVar10 = (iVar10 + param_2[1]) - ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            iVar6 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
                    ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
          }
          else {
            iVar6 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
                    ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
          }
          uVar7 = sub_08009AC0(iVar6,iVar10);
          if (((((uVar7 & 0x8000) != 0) && (uVar7 = sub_08009AC0(iVar6,iVar10), (uVar7 & 0xf) != 0))
              && (uVar7 = sub_08009AC0(iVar6,iVar10), (uVar7 & 0xf) < 0xf)) ||
             (iVar6 = sub_08009D5C(iVar6,iVar10), iVar6 < 1)) {
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar6 = *(int *)(param_1 + 0x54) + (int)*param_2 +
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            else {
              iVar6 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            uVar7 = sub_08009AC0(iVar6,iVar10);
            if (((((uVar7 & 0x8000) != 0) &&
                 (uVar7 = sub_08009AC0(iVar6,iVar10), (uVar7 & 0xf) != 0)) &&
                (uVar7 = sub_08009AC0(iVar6,iVar10), (uVar7 & 0xf) < 0xf)) ||
               (iVar10 = sub_08009D5C(iVar6,iVar10), iVar10 < 1)) goto LAB_08027ada;
          }
LAB_08027916:
          local_38 = 1;
          goto LAB_08027af4;
        }
      }
      else {
        uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),iVar10);
        if ((((uVar7 & 0x8000) == 0) ||
            (uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
            (uVar7 & 0xf) == 0)) ||
           (uVar7 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
           0xe < (uVar7 & 0xf))) {
          local_40 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        }
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar10 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
                   ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
        }
        else {
          iVar10 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
                   ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
        }
        uVar7 = sub_08009AC0(iVar10,*(undefined4 *)(param_1 + 0x58));
        if (((((uVar7 & 0x8000) == 0) ||
             (uVar7 = sub_08009AC0(iVar10,*(undefined4 *)(param_1 + 0x58)), (uVar7 & 0xf) == 0)) ||
            (uVar7 = sub_08009AC0(iVar10,*(undefined4 *)(param_1 + 0x58)), 0xe < (uVar7 & 0xf))) &&
           (iVar10 = sub_08009BE4(iVar10,*(undefined4 *)(param_1 + 0x58)), iVar10 < local_40)) {
          local_40 = iVar10;
        }
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar10 = *(int *)(param_1 + 0x54) + (int)*param_2 +
                   ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
        }
        else {
          iVar10 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
                   ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
        }
        uVar7 = sub_08009AC0(iVar10,*(undefined4 *)(param_1 + 0x58));
        if (((((uVar7 & 0x8000) == 0) ||
             (uVar7 = sub_08009AC0(iVar10,*(undefined4 *)(param_1 + 0x58)), (uVar7 & 0xf) == 0)) ||
            (uVar7 = sub_08009AC0(iVar10,*(undefined4 *)(param_1 + 0x58)), 0xe < (uVar7 & 0xf))) &&
           (iVar10 = sub_08009BE4(iVar10,*(undefined4 *)(param_1 + 0x58)), iVar10 < local_40)) {
          local_40 = iVar10;
        }
        if (local_40 < 0) {
          iVar10 = sub_08009BE4(iVar4,iVar8 + 1);
          if (iVar10 != -1) {
LAB_08027814:
            iVar10 = *(int *)(param_1 + 0x58);
            goto LAB_08027ad6;
          }
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            iVar10 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
                     ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
          }
          else {
            iVar10 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
                     ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
          }
          sVar2 = sub_080284C0(param_1,iVar10,
                               (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                               ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
          if (sVar2 == 0) {
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar10 = *(int *)(param_1 + 0x54) + (int)*param_2 +
                       ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            else {
              iVar10 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
                       ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            sVar2 = sub_080284C0(param_1,iVar10,
                                 (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                 ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
            if (sVar2 == 0) goto LAB_08027814;
          }
          goto LAB_08027916;
        }
      }
    }
  }
LAB_08027ada:
  if ((iVar4 != *(int *)(param_1 + 0x54)) || (iVar8 != *(int *)(param_1 + 0x58))) {
    *(undefined *)(param_1 + 399) = 1;
  }
LAB_08027af4:
  return CONCAT44(in_lr,local_38);
}

