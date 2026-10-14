// sub_080287E8 at 0x080287E8 (thumb)

undefined8 sub_080287E8(int param_1,short *param_2)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 in_lr;
  uint local_40 [6];
  int local_28;
  uint local_24;
  
  *(undefined *)(param_1 + 0x18e) = 0;
  *(undefined *)(param_1 + 0x11f) = 0;
  local_40[0] = *(uint *)(param_1 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar7 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_40[1] = local_40[0] + (int)*param_2 + iVar7 + 1;
    iVar8 = (int)*param_2;
  }
  else {
    iVar7 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_40[1] = (local_40[0] - (int)*param_2) + iVar7 + 1;
    iVar8 = -(int)*param_2;
  }
  local_40[2] = ((local_40[0] + iVar8) - iVar7) + -1;
  iVar7 = *(int *)(param_1 + 0x58);
  iVar8 = (int)((uint)(ushort)param_2[3] << 0x10) >> 0x11;
  local_40[3] = iVar7 + param_2[1] + iVar8;
  local_40[4] = iVar7 + param_2[1];
  local_40[5] = (iVar7 + param_2[1]) - iVar8;
  piVar2 = (int *)(param_1 + 400);
  if (*piVar2 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *piVar2;
    if (*piVar2 < 1) {
      iVar8 = sub_0800A04C(local_40[2],iVar7);
      if (0 < iVar8) goto LAB_080288be;
    }
    else {
      iVar8 = sub_08009ED0(local_40[1],iVar7);
      if (iVar8 < 0) {
LAB_080288be:
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
      }
    }
    *piVar2 = 0;
  }
  local_28 = param_1 + 0xb4;
  if (((*(int *)(param_1 + 0x10c) < 1) && ((*(uint *)(param_1 + 0x218) & 0x10) == 0)) &&
     (((*(byte *)(param_1 + 10) & 0x10) != 0 || (*(char *)(param_1 + 0x147) == '\0')))) {
LAB_0802898c:
    if (((*(int *)(local_28 + 0x58) < 0) || ((*(uint *)(param_1 + 0x218) & 0x20) != 0)) ||
       (((*(byte *)(param_1 + 10) & 0x10) == 0 && (*(char *)(param_1 + 0x147) != '\0')))) {
      uVar11 = 0;
      local_24 = 0;
      for (uVar9 = 0; uVar9 < 3; uVar9 = uVar9 + 1 & 0xff) {
        uVar3 = sub_08028574(param_1,local_40[2],local_40[uVar9 + 3]);
        if ((uVar3 & 0xf) == 1) break;
        uVar3 = sub_08009AC0(local_40[2],local_40[uVar9 + 3]);
        if ((uVar3 & 0x10) == 0) {
          if ((uVar3 & 0xf) == 0) {
            uVar11 = uVar11 + 1 & 0xff;
          }
          else if ((uVar3 & 0xf) == 1) break;
        }
        else {
          local_24 = local_24 + 1 & 0xff;
        }
      }
      if (((local_24 != 0) && (local_24 + uVar11 == 3)) &&
         ((*(char *)(param_1 + 0x94) == '\0' || (*(char *)(param_1 + 0x149) != '\0'))))
      goto LAB_08028c12;
    }
    iVar8 = (int)((uint)(ushort)param_2[3] << 0x10) >> 0x11;
    local_40[3] = *(int *)(param_1 + 0x58) + (int)param_2[1] + iVar8 + 1;
    local_40[5] = ((*(int *)(param_1 + 0x58) + (int)param_2[1]) - iVar8) + -1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_40[2] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
      local_40[1] = (*(int *)(param_1 + 0x54) + (int)*param_2) - local_40[2];
      local_40[2] = *(int *)(param_1 + 0x54) + (int)*param_2 + local_40[2];
    }
    else {
      local_40[2] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
      local_40[1] = (*(int *)(param_1 + 0x54) - (int)*param_2) + local_40[2];
      local_40[2] = (*(int *)(param_1 + 0x54) - (int)*param_2) - local_40[2];
    }
    uVar9 = 0;
    uVar11 = 0;
    uVar3 = 0;
    do {
      local_24 = uVar11;
      uVar4 = sub_08009AC0(local_40[uVar3],local_40[5]);
      uVar11 = local_24;
      if ((uVar4 & 0x10) != 0) {
        uVar11 = local_24 + 1 & 0xff;
      }
      if ((uVar4 & 0xf) == 0) {
        uVar9 = uVar9 + 1 & 0xff;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 3);
    if (((uVar11 == 0) || (uVar11 + uVar9 != 3)) ||
       ((*(char *)(param_1 + 0x94) != '\0' && (*(char *)(param_1 + 0x149) == '\0')))) {
      if ((*(char *)(param_1 + 0x18d) != '\0') &&
         (((iVar8 = sub_08009BE4(local_40[1],local_40[3]), iVar8 == -1 ||
           (iVar8 = sub_08009BE4(local_40[2],local_40[3]), iVar8 == -1)) &&
          ((sVar1 = sub_080284C0(param_1,local_40[1],local_40[5] + 1), sVar1 != 0 ||
           (sVar1 = sub_080284C0(param_1,local_40[2],local_40[5] + 1), sVar1 != 0)))))) {
        uVar6 = 2;
        goto LAB_08028d44;
      }
      uVar3 = 0;
      uVar11 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar4 = 0;
      do {
        local_24 = uVar11;
        uVar5 = sub_08009AC0(local_40[uVar4],local_40[3]);
        if ((uVar5 & 0x400) != 0) {
          uVar3 = uVar3 + 1 & 0xff;
        }
        uVar11 = local_24;
        if ((uVar5 & 0x10) != 0) {
          uVar11 = local_24 + 1 & 0xff;
        }
        if ((uVar5 & 0xf) == 0) {
          uVar9 = uVar9 + 1 & 0xff;
        }
        if ((uVar5 & 0x1000) != 0) {
          uVar10 = uVar10 + 1 & 0xff;
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 3);
      if (((uVar11 == 0) || (uVar11 + uVar9 != 3)) ||
         ((*(char *)(param_1 + 0x94) != '\0' && (*(char *)(param_1 + 0x149) == '\0')))) {
        if ((uVar3 != 0) && (uVar3 + uVar9 == 3)) {
          if (*(char *)(local_28 + 0x10) == '\x01') {
            uVar11 = sub_08009AC0(local_40[0],local_40[3] - 1);
            if ((uVar11 & 0x400) != 0) {
              *(undefined *)(param_1 + 0x18e) = 1;
            }
          }
          else {
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x20;
            *(undefined *)(param_1 + 0x18e) = 1;
          }
        }
        if ((*(char *)(local_28 + 0x11) != '\x05') && (*(char *)(local_28 + 0x11) != '\a')) {
          if (((uVar10 != 0) && (uVar10 + uVar9 == 3)) || (*(char *)(param_1 + 0x230) != '\0')) {
            *(undefined *)(param_1 + 0x11f) = 1;
          }
          uVar11 = sub_08028574(param_1,local_40[1],local_40[3]);
          if ((uVar11 & 0x1000) != 0) {
            *(undefined *)(param_1 + 0x11f) = 1;
          }
          uVar11 = sub_08028574(param_1,local_40[2],local_40[3]);
          if ((uVar11 & 0x1000) != 0) {
            *(undefined *)(param_1 + 0x11f) = 1;
          }
        }
        if (*(char *)(param_1 + 0x18d) != '\0') {
          uVar11 = 0;
          do {
            uVar9 = sub_08008FEC(local_40[uVar11],local_40[3]);
            if ((uVar9 & 0x6000) != 0) {
              iVar8 = sub_0800A654((local_40[uVar11] & 0xfffff000) + 0x800,
                                   (local_40[3] & 0xfffff000) + 0xfff);
              iVar8 = *(int *)(param_1 + 0x54) + iVar8;
              *(int *)(param_1 + 0x54) = iVar8;
              if ((uVar11 == 0) &&
                 (iVar8 = sub_08009BE4(iVar8,*(undefined4 *)(param_1 + 0x58)), iVar8 < 0)) {
                iVar8 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)
                                    );
                *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
              }
              break;
            }
            uVar11 = uVar11 + 1 & 0xff;
          } while (uVar11 < 3);
        }
        uVar6 = 0;
        goto LAB_08028d44;
      }
    }
  }
  else {
    uVar11 = 0;
    local_24 = 0;
    for (uVar9 = 0; uVar9 < 3; uVar9 = uVar9 + 1 & 0xff) {
      uVar3 = sub_08028574(param_1,local_40[1],local_40[uVar9 + 3]);
      if ((uVar3 & 0xf) == 1) break;
      uVar3 = sub_08009AC0(local_40[1],local_40[uVar9 + 3]);
      if ((uVar3 & 0x10) == 0) {
        if ((uVar3 & 0xf) == 0) {
          uVar11 = uVar11 + 1 & 0xff;
        }
        else if ((uVar3 & 0xf) == 1) break;
      }
      else {
        local_24 = local_24 + 1 & 0xff;
      }
    }
    if (((local_24 == 0) || (local_24 + uVar11 != 3)) ||
       ((*(char *)(param_1 + 0x94) != '\0' && (*(char *)(param_1 + 0x149) == '\0'))))
    goto LAB_0802898c;
  }
LAB_08028c12:
  uVar6 = 1;
LAB_08028d44:
  return CONCAT44(in_lr,uVar6);
}

