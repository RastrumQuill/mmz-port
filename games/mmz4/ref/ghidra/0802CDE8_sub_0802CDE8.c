// sub_0802CDE8 at 0x0802CDE8 (thumb)

undefined8 sub_0802CDE8(int param_1,short *param_2)

{
  bool bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined4 in_lr;
  int local_48;
  uint local_44;
  undefined4 local_40;
  short *local_24;
  
  iVar4 = *(int *)(param_1 + 0x54);
  iVar8 = *(int *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0x1bb) = 0;
  *(undefined *)(param_1 + 0x1cf) = 0;
  local_48 = 0;
  local_40 = 0;
  pcVar9 = (char *)(param_1 + 0x1cc);
  *(char *)(param_1 + 0x1ce) = *pcVar9;
  if (*(char *)(param_1 + 0xd) == '\x03') {
    if (*pcVar9 != '\0') {
      uVar11 = 0;
      if (DAT_02000c82 != 0) {
        do {
          if ((&DAT_02000c84)[uVar11 * 0xc] == (ushort)*(byte *)(param_1 + 0x1cd)) {
            if (((&DAT_02000c86)[uVar11 * 0xc] & 0x20) == 0) {
              iVar5 = (&DAT_02000c8c)[uVar11 * 6];
            }
            else {
              iVar5 = *(int *)(param_1 + 0x1c4) +
                      ((&DAT_02000c8c)[uVar11 * 6] - (&DAT_02000c94)[uVar11 * 6]);
            }
            *(int *)(param_1 + 0x1c4) = iVar5;
            *(undefined4 *)(param_1 + 0x1c8) = (&DAT_02000c90)[uVar11 * 6];
            goto LAB_0802cf18;
          }
          uVar11 = uVar11 + 1 & 0xff;
        } while (uVar11 < DAT_02000c82);
      }
      *(undefined *)(param_1 + 0x1cc) = 0;
    }
  }
  else {
    *pcVar9 = '\0';
  }
LAB_0802cf18:
  local_24 = (short *)(param_1 + 0x198);
  local_44 = 0;
  sVar2 = *local_24;
  while (sVar2 != -1) {
    uVar11 = 0;
    bVar1 = true;
    if (DAT_02000c82 != 0) {
      do {
        if ((&DAT_02000c84)[uVar11 * 0xc] == local_24[local_44]) {
          bVar1 = false;
          break;
        }
        uVar11 = uVar11 + 1 & 0xff;
      } while (uVar11 < DAT_02000c82);
    }
    local_24[local_44] = -1;
    if (!bVar1) {
      iVar5 = (&DAT_02000c8c)[uVar11 * 6] - (&DAT_02000c94)[uVar11 * 6];
      if (((&DAT_02000c86)[uVar11 * 0xc] & 0x200) != 0) {
        *(undefined *)(param_1 + 0x1cf) = 1;
      }
      uVar3 = (&DAT_02000c86)[uVar11 * 0xc] & 0x800f;
      if ((uVar3 != 0xf) &&
         (((uVar3 != 0x800f ||
           ((&DAT_02000c90)[uVar11 * 6] != *(int *)(&DAT_02000c98 + uVar11 * 0x18))) ||
          ((*(char *)(param_1 + 0x1b9) != '\0' &&
           (*(int *)(param_1 + 0x58) <=
            (int)((&DAT_02000c90)[uVar11 * 6] - (uint)(ushort)(&DAT_02000c8a)[uVar11 * 0xc]))))))) {
        if (iVar5 != 0) {
          iVar7 = iVar5;
          if (iVar5 < 0) {
            iVar7 = -iVar5;
          }
          if (iVar7 < 0x1000) {
            iVar7 = *(int *)(param_1 + 0x54) + iVar5;
            *(int *)(param_1 + 0x54) = iVar7;
            if (iVar5 < 1) {
              if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
                iVar6 = (int)*param_2;
                uVar3 = param_2[2];
              }
              else {
                iVar6 = -(int)*param_2;
                uVar3 = param_2[2];
              }
              iVar7 = (iVar7 + iVar6) - ((int)((uint)uVar3 << 0x10) >> 0x11);
            }
            else {
              if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
                iVar6 = (int)*param_2;
                uVar3 = param_2[2];
              }
              else {
                iVar6 = -(int)*param_2;
                uVar3 = param_2[2];
              }
              iVar7 = iVar7 + iVar6 + ((int)((uint)uVar3 << 0x10) >> 0x11);
            }
            if ((*(char *)(param_1 + 0xd) == '\x02') &&
               (((&DAT_02000c86)[uVar11 * 0xc] & 0x200) == 0)) {
              if (iVar7 < *(int *)(param_1 + 0x54)) {
                iVar6 = (int)param_2[2];
              }
              else {
                iVar6 = -(int)param_2[2];
              }
              iVar6 = iVar6 + iVar7;
              iVar10 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
                       ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
              sVar2 = sub_08007D28(iVar7,iVar10);
              if (((sVar2 != 0) || (sVar2 = sub_0802E2B8(param_1,iVar7,iVar10), sVar2 != 0)) &&
                 ((sVar2 = sub_08007D28(iVar6,iVar10), sVar2 != 0 ||
                  (sVar2 = sub_0802E2B8(param_1,iVar6,iVar10), sVar2 != 0)))) goto LAB_0802d5e8;
              iVar10 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                       ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
              sVar2 = sub_08007D28(iVar7,iVar10);
              if (((sVar2 != 0) || (sVar2 = sub_0802E2B8(param_1,iVar7,iVar10), sVar2 != 0)) &&
                 ((sVar2 = sub_08007D28(iVar6,iVar10), sVar2 != 0 ||
                  (sVar2 = sub_0802E2B8(param_1,iVar6,iVar10), sVar2 != 0)))) goto LAB_0802d5e8;
            }
            if (iVar5 < 1) {
              iVar5 = sub_08008448(iVar7,*(int *)(param_1 + 0x58) + (int)param_2[1] +
                                         ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
              if (0 < iVar5) {
                *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
              }
              iVar5 = sub_08008448(iVar7,*(int *)(param_1 + 0x58) + (int)param_2[1]);
              if (0 < iVar5) {
                *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
              }
              iVar5 = sub_08008448(iVar7,(*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                         ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
              if (0 < iVar5) goto LAB_0802d24a;
            }
            else {
              iVar5 = sub_08008264(iVar7,*(int *)(param_1 + 0x58) + (int)param_2[1] +
                                         ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
              if (iVar5 < 0) {
                *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
              }
              iVar5 = sub_08008264(iVar7,*(int *)(param_1 + 0x58) + (int)param_2[1]);
              if (iVar5 < 0) {
                *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
              }
              iVar5 = sub_08008264(iVar7,(*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                         ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
              if (iVar5 < 0) {
LAB_0802d24a:
                *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
              }
            }
          }
        }
        iVar5 = (&DAT_02000c90)[uVar11 * 6] - *(int *)(&DAT_02000c98 + uVar11 * 0x18);
        if (((iVar5 != 0) &&
            ((*(char *)(param_1 + 0xd) == '\x02' ||
             (*(int *)(param_1 + 0x58) <= (int)(&DAT_02000c90)[uVar11 * 6])))) &&
           ((local_48 == 0 || (iVar5 < local_48)))) {
          local_48 = iVar5;
        }
      }
    }
    local_44 = local_44 + 1 & 0xff;
    if (0xf < local_44) break;
    sVar2 = local_24[local_44];
  }
  if (local_48 != 0) {
    iVar5 = local_48;
    if (local_48 < 0) {
      iVar5 = -local_48;
    }
    if (iVar5 < 0x1000) {
      iVar5 = *(int *)(param_1 + 0x58) + local_48;
      *(int *)(param_1 + 0x58) = iVar5;
      if (*(char *)(param_1 + 0x1b9) == '\0') {
        if (*(char *)(param_1 + 0xd) == '\x02') {
          if (local_48 < 1) {
            if ((local_48 < 0) &&
               (uVar3 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),iVar5 + -0x1e00), uVar3 != 0))
            {
              iVar5 = sub_08008080(*(undefined4 *)(param_1 + 0x54),
                                   *(int *)(param_1 + 0x58) + -0x1e00);
              if (0 < iVar5) {
                *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1 + iVar5;
              }
              if ((uVar3 & 0x10) != 0) {
                local_40 = 2;
              }
            }
          }
          else {
            local_48 = sub_08007E98(*(undefined4 *)(param_1 + 0x54),iVar5);
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar5 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            else {
              iVar5 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            iVar7 = sub_08007E98(iVar5,*(undefined4 *)(param_1 + 0x58));
            if (iVar7 < local_48) {
              local_48 = iVar7;
            }
            iVar5 = sub_0802DF60(param_1,iVar5,*(undefined4 *)(param_1 + 0x58));
            if (iVar5 < local_48) {
              local_48 = iVar5;
            }
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar5 = *(int *)(param_1 + 0x54) + (int)*param_2 +
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            else {
              iVar5 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            iVar7 = sub_08007E98(iVar5,*(undefined4 *)(param_1 + 0x58));
            if (iVar7 < local_48) {
              local_48 = iVar7;
            }
            iVar5 = sub_0802DF60(param_1,iVar5,*(undefined4 *)(param_1 + 0x58));
            if (iVar5 < local_48) {
              local_48 = iVar5;
            }
            if (local_48 < 0) {
              local_48 = *(int *)(param_1 + 0x58) + local_48;
              goto LAB_0802d7ac;
            }
          }
        }
        else {
          if (((local_48 < 0) &&
              (((uVar11 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),iVar5 + -0x1e00),
                (uVar11 & 0x8000) == 0 ||
                (uVar11 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),
                                       *(int *)(param_1 + 0x58) + -0x1e00), (uVar11 & 0xf) == 0)) ||
               (uVar11 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),
                                      *(int *)(param_1 + 0x58) + -0x1e00), 0xe < (uVar11 & 0xf)))))
             && (iVar5 = sub_08008080(*(undefined4 *)(param_1 + 0x54),
                                      *(int *)(param_1 + 0x58) + -0x1e00), 0 < iVar5)) {
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1 + iVar5;
          }
          if ((0 < local_48) &&
             ((((uVar11 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),
                                       *(undefined4 *)(param_1 + 0x58)), (uVar11 & 0x8000) == 0 ||
                (uVar11 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),
                                       *(undefined4 *)(param_1 + 0x58)), (uVar11 & 0xf) == 0)) ||
               (uVar11 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),
                                      *(undefined4 *)(param_1 + 0x58)), 0xe < (uVar11 & 0xf))) &&
              (local_48 = sub_08007E98(*(undefined4 *)(param_1 + 0x54),
                                       *(undefined4 *)(param_1 + 0x58)), local_48 < 0)))) {
            local_48 = *(int *)(param_1 + 0x58) + -1 + local_48;
LAB_0802d7ac:
            *(int *)(param_1 + 0x58) = local_48;
          }
        }
      }
      else if (local_48 < 1) {
        if ((local_48 < 0) && (*(char *)(param_1 + 0x1cf) == '\0')) {
          iVar5 = (iVar5 + param_2[1]) - ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            iVar7 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
                    ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
          }
          else {
            iVar7 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
                    ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
          }
          uVar11 = sub_08007D28(iVar7,iVar5);
          if (((((uVar11 & 0x8000) != 0) &&
               (uVar11 = sub_08007D28(iVar7,iVar5), (uVar11 & 0xf) != 0)) &&
              (uVar11 = sub_08007D28(iVar7,iVar5), (uVar11 & 0xf) < 0xf)) ||
             (iVar7 = sub_08008080(iVar7,iVar5), iVar7 < 1)) {
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar7 = *(int *)(param_1 + 0x54) + (int)*param_2 +
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            else {
              iVar7 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            uVar11 = sub_08007D28(iVar7,iVar5);
            if (((((uVar11 & 0x8000) != 0) &&
                 (uVar11 = sub_08007D28(iVar7,iVar5), (uVar11 & 0xf) != 0)) &&
                (uVar11 = sub_08007D28(iVar7,iVar5), (uVar11 & 0xf) < 0xf)) ||
               (iVar5 = sub_08008080(iVar7,iVar5), iVar5 < 1)) goto LAB_0802d7ae;
          }
LAB_0802d5e8:
          local_40 = 1;
          goto LAB_0802d7c8;
        }
      }
      else {
        uVar11 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),iVar5);
        if ((((uVar11 & 0x8000) == 0) ||
            (uVar11 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
            (uVar11 & 0xf) == 0)) ||
           (uVar11 = sub_08007D28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
           0xe < (uVar11 & 0xf))) {
          local_48 = sub_08007E98(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        }
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar5 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
                  ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
        }
        else {
          iVar5 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
                  ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
        }
        uVar11 = sub_08007D28(iVar5,*(undefined4 *)(param_1 + 0x58));
        if (((((uVar11 & 0x8000) == 0) ||
             (uVar11 = sub_08007D28(iVar5,*(undefined4 *)(param_1 + 0x58)), (uVar11 & 0xf) == 0)) ||
            (uVar11 = sub_08007D28(iVar5,*(undefined4 *)(param_1 + 0x58)), 0xe < (uVar11 & 0xf))) &&
           (iVar5 = sub_08007E98(iVar5,*(undefined4 *)(param_1 + 0x58)), iVar5 < local_48)) {
          local_48 = iVar5;
        }
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar5 = *(int *)(param_1 + 0x54) + (int)*param_2 +
                  ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
        }
        else {
          iVar5 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
                  ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
        }
        uVar11 = sub_08007D28(iVar5,*(undefined4 *)(param_1 + 0x58));
        if (((((uVar11 & 0x8000) == 0) ||
             (uVar11 = sub_08007D28(iVar5,*(undefined4 *)(param_1 + 0x58)), (uVar11 & 0xf) == 0)) ||
            (uVar11 = sub_08007D28(iVar5,*(undefined4 *)(param_1 + 0x58)), 0xe < (uVar11 & 0xf))) &&
           (iVar5 = sub_08007E98(iVar5,*(undefined4 *)(param_1 + 0x58)), iVar5 < local_48)) {
          local_48 = iVar5;
        }
        if (local_48 < 0) {
          iVar5 = sub_08007E98(iVar4,iVar8 + 1);
          if (iVar5 != -1) {
LAB_0802d4d4:
            local_48 = *(int *)(param_1 + 0x58) + local_48;
            goto LAB_0802d7ac;
          }
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            iVar5 = (*(int *)(param_1 + 0x54) + (int)*param_2) -
                    ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
          }
          else {
            iVar5 = (*(int *)(param_1 + 0x54) - (int)*param_2) +
                    ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
          }
          sVar2 = sub_0802E1D8(param_1,iVar5,
                               (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                               ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
          if (sVar2 == 0) {
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar5 = *(int *)(param_1 + 0x54) + (int)*param_2 +
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            else {
              iVar5 = (*(int *)(param_1 + 0x54) - (int)*param_2) -
                      ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
            }
            sVar2 = sub_0802E1D8(param_1,iVar5,
                                 (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
                                 ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11));
            if (sVar2 == 0) goto LAB_0802d4d4;
          }
          goto LAB_0802d5e8;
        }
      }
    }
  }
LAB_0802d7ae:
  if ((iVar4 != *(int *)(param_1 + 0x54)) || (iVar8 != *(int *)(param_1 + 0x58))) {
    *(undefined *)(param_1 + 0x1bb) = 1;
  }
LAB_0802d7c8:
  return CONCAT44(in_lr,local_40);
}

