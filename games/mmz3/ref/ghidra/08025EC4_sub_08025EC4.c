// sub_08025EC4 at 0x08025EC4 (thumb)

undefined8 sub_08025EC4(int param_1,short *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined4 in_lr;
  uint local_48 [3];
  undefined auStack_3c [4];
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int *local_28;
  uint local_24;
  
  local_34 = param_3 & 0xff;
  local_2c = 0;
  local_48[0] = *(uint *)(param_1 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_48[2] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_48[1] = (local_48[0] + (int)*param_2) - local_48[2];
    local_48[2] = local_48[0] + (int)*param_2 + local_48[2];
  }
  else {
    local_48[2] = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    local_48[1] = (local_48[0] - (int)*param_2) + local_48[2];
    local_48[2] = (local_48[0] - (int)*param_2) - local_48[2];
  }
  iVar8 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  if (*(char *)(param_1 + 0x18c) != '\0') {
    local_30 = 0;
    do {
      uVar5 = local_30;
      puVar10 = local_48 + local_30;
      uVar1 = sub_08028370(param_1,*puVar10,iVar8);
      if ((((((uVar1 & 0x8000) == 0) || (uVar2 = uVar1 & 0xf, uVar2 == 0)) || (0xe < uVar2)) ||
          ((local_34 != 0 &&
           (((uVar2 == 0 || (0xe < uVar2)) ||
            ((*(char *)(param_1 + 0x113) == '\0' &&
             (((uVar4 = sub_08028418(param_1,*puVar10 +
                                             (*(int *)(param_1 + 0x100) - *(int *)(param_1 + 0x54)),
                                     (*(int *)(param_1 + 0x104) - *(int *)(param_1 + 0x58)) + iVar8
                                     + 1), (uVar4 & 0x8000) == 0 || ((uVar4 & 0xf) == 0)) ||
              (0xe < (uVar4 & 0xf))))))))))) && (uVar1 != 0)) {
        uVar5 = sub_08028094(param_1,local_48[uVar5],iVar8,auStack_3c);
        local_2c = uVar5 & 0xffff;
        if ((uVar5 & 0xffff) != 0) {
          uVar5 = sub_08008FEC(local_48[1],iVar8);
          if (((uVar5 & 0xf) != 1) &&
             (uVar4 = sub_08008FEC(local_48[2],iVar8), uVar5 = local_2c, (uVar4 & 0xf) != 1))
          goto LAB_0802638c;
          iVar8 = iVar8 + local_38;
        }
      }
      local_30 = local_30 + 1 & 0xffff;
    } while (local_30 < 3);
  }
  uVar4 = sub_08009AC0(local_48[0],iVar8);
  uVar5 = uVar4 & 0xffff;
  if (((uVar4 & 0x400) != 0) &&
     (((local_34 == 0 || (*(char *)(param_1 + 0xc4) != '\x01')) ||
      (uVar4 = sub_08009AC0(*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104)),
      (uVar4 & 0x400) != 0)))) goto LAB_0802638c;
  if (local_34 == 0) {
    uVar4 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),iVar8);
    uVar5 = uVar4 & 0xffff;
    if (((((uVar4 & 0x8000) == 0) || ((uVar4 & 0xf) == 0)) ||
        ((0xe < (uVar4 & 0xf) || (*(char *)(param_1 + 0x18d) != '\0')))) &&
       (iVar6 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),iVar8 + 0x500), iVar6 < 0)) {
      if (*(char *)(param_1 + 399) == '\0') {
        iVar8 = *(int *)(param_1 + 0x58) + 0x500;
        goto LAB_08026348;
      }
      if ((((uVar4 & 0x8000) == 0) || ((uVar4 & 0xf) == 0)) || (0xe < (uVar4 & 0xf))) {
        iVar11 = iVar8 + iVar6 + 0x500;
        sVar3 = sub_08028574(param_1,local_48[1],iVar11);
        if ((sVar3 == 0) && (sVar3 = sub_08028574(param_1,local_48[2],iVar11), sVar3 == 0)) {
          iVar8 = *(int *)(param_1 + 0x58) + 0x500;
          goto LAB_08026348;
        }
      }
    }
LAB_080261c2:
    local_30 = 1;
    local_28 = (int *)(param_1 + 0x100);
    do {
      uVar4 = local_30;
      puVar10 = local_48 + local_30;
      uVar7 = sub_08009AC0(*puVar10,iVar8);
      uVar5 = uVar7 & 0xffff;
      uVar9 = uVar7 & 0xf;
      if ((uVar9 != 0) && (uVar9 < 0xe)) {
        if (uVar9 == 1) {
          if ((((uVar7 & 0x8000) == 0) ||
              ((local_34 != 0 &&
               ((((uVar7 = sub_08009AC0(*puVar10 + (*local_28 - *(int *)(param_1 + 0x54)),
                                        (local_28[1] - *(int *)(param_1 + 0x58)) + iVar8),
                  (uVar7 & 0x8000) == 0 || ((uVar7 & 0xf) == 0)) || (0xe < (uVar7 & 0xf))) &&
                ((uint)local_28[1] <= (iVar8 + 1U & 0xfffff000) - 1)))))) &&
             (iVar6 = sub_08009BE4(local_48[uVar4],iVar8), iVar6 < 0)) {
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
            iVar8 = iVar8 + iVar6;
            local_2c = uVar5;
          }
        }
        else {
          if ((((uVar7 & 0x8000) != 0) && (uVar9 != 0)) && (uVar9 < 0xf)) {
            iVar6 = iVar8 + -0x1000;
            local_24 = 0x8000;
            uVar9 = sub_08008FEC(*puVar10,iVar6);
            if ((((local_24 & uVar9) != 0) &&
                (uVar9 = sub_08008FEC(*puVar10,iVar6), (uVar9 & 0xf) != 0)) &&
               (uVar9 = sub_08008FEC(*puVar10,iVar6), (uVar9 & 0xf) < 0xf)) goto LAB_0802637a;
          }
          puVar10 = local_48 + uVar4;
          uVar4 = *puVar10;
          if (*(int *)(param_1 + 0x54) < (int)uVar4) {
            if ((uVar7 & 0xf) < 8) {
              iVar6 = sub_08009BE4(uVar4 & 0xfffff000,iVar8 + 0x500);
              if (iVar6 < 0) {
                iVar8 = *(int *)(param_1 + 0x58) + 0x500;
                goto LAB_08026348;
              }
            }
            else {
              sVar3 = sub_08008FEC(uVar4 - 0x1000,iVar8);
              if (sVar3 == 0) {
                uVar4 = *puVar10 & 0xfffff000;
LAB_0802636c:
                iVar6 = sub_08009BE4(uVar4,iVar8);
                if (iVar6 < 1) {
                  iVar8 = *(int *)(param_1 + 0x58);
                  goto LAB_08026348;
                }
              }
            }
          }
          else if ((uVar7 & 0xf) < 8) {
            sVar3 = sub_08008FEC(uVar4 + 0x1000,iVar8);
            if (sVar3 == 0) {
              uVar4 = *puVar10 | 0xfff;
              goto LAB_0802636c;
            }
          }
          else {
            iVar6 = sub_08009BE4(uVar4 | 0xfff,iVar8 + 0x500);
            if (iVar6 < 0) {
              iVar8 = *(int *)(param_1 + 0x58) + 0x500;
              goto LAB_08026348;
            }
          }
        }
      }
LAB_0802637a:
      local_30 = local_30 + 1 & 0xffff;
      uVar5 = local_2c;
    } while (local_30 < 3);
  }
  else {
    uVar1 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),iVar8);
    uVar5 = (uint)uVar1;
    iVar6 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),iVar8);
    if (((((uVar1 & 0x8000) != 0) && ((uVar1 & 0xf) != 0)) && ((uVar1 & 0xf) < 0xf)) &&
       ((((uVar4 = sub_08009AC0(*(undefined4 *)(param_1 + 0x100),
                                *(int *)(param_1 + 0x104) + (int)param_2[1] +
                                ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11)),
          (uVar4 & 0x8000) != 0 && ((uVar4 & 0xf) != 0)) && ((uVar4 & 0xf) < 0xf)) ||
        (*(int *)(param_1 + 0x58) + iVar6 + 0x700 < *(int *)(param_1 + 0x104))))) {
      uVar5 = 0;
      goto LAB_0802638c;
    }
    if (uVar5 == 0x800e) {
      iVar8 = *(int *)(param_1 + 0x58);
    }
    else {
      if (0xc < (ushort)((uVar1 & 0xf) - 1)) goto LAB_080261c2;
      iVar8 = *(int *)(param_1 + 0x58);
    }
LAB_08026348:
    *(int *)(param_1 + 0x58) = iVar8 + iVar6;
  }
LAB_0802638c:
  return CONCAT44(in_lr,uVar5);
}

