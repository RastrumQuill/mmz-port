// sub_08027B0C at 0x08027B0C (thumb)

undefined8 sub_08027B0C(int param_1,int param_2,int param_3,uint *param_4)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  uint local_38;
  uint local_34;
  
  param_4[1] = 0;
  *param_4 = 0;
  local_38 = 0;
  local_34 = 0;
  if (*(char *)(param_1 + 0x18c) != '\0') {
    do {
      uVar3 = (uint)*(byte *)(param_1 + 0x15c + local_34);
      puVar4 = &DAT_02002658 + uVar3 * 0xc;
      if (((param_2 - (&DAT_0200265c)[uVar3 * 6]) + (uint)*puVar4 < (uint)*puVar4 << 1) &&
         ((param_3 - (&DAT_02002660)[uVar3 * 6]) + (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc] <
          (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc] << 1)) {
        sub_080287B4(param_1,(&DAT_02002654)[uVar3 * 0xc]);
        iVar5 = (&DAT_0200265c)[uVar3 * 6];
        if ((iVar5 == (&DAT_02002664)[uVar3 * 6]) &&
           ((&DAT_02002660)[uVar3 * 6] == *(int *)(&DAT_02002668 + uVar3 * 0x18))) {
          iVar6 = *(int *)(param_1 + 0x54);
          if (iVar5 < iVar6) {
            uVar8 = (iVar5 + (uint)*puVar4) - param_2;
          }
          else {
            uVar8 = ((iVar5 - (uint)*puVar4) - param_2) - 1;
          }
          *param_4 = uVar8;
          uVar8 = *param_4;
          if (uVar8 != 0) {
            uVar7 = uVar8;
            if ((int)uVar8 < 0) {
              uVar7 = -uVar8;
            }
            if ((int)uVar7 < 0x1000) {
              uVar1 = (&DAT_02002656)[uVar3 * 0xc];
              *(uint *)(param_1 + 0x54) = iVar6 + uVar8;
              param_2 = param_2 + uVar8;
              goto LAB_08027f4a;
            }
          }
          *param_4 = 0;
          iVar5 = *(int *)(param_1 + 0x58);
          if (iVar5 + -0x1000 < param_3) {
            param_4[1] = (((&DAT_02002660)[uVar3 * 6] - (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc])
                         - param_3) - 1;
          }
          else {
            param_4[1] = ((&DAT_02002660)[uVar3 * 6] + (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc]) -
                         param_3;
          }
          uVar8 = param_4[1];
          if (uVar8 == 0) goto LAB_08027f4e;
          uVar1 = (&DAT_02002656)[uVar3 * 0xc];
          *(uint *)(param_1 + 0x58) = iVar5 + uVar8;
          param_3 = param_3 + uVar8;
        }
        else {
          iVar6 = (&DAT_0200265c)[uVar3 * 6];
          iVar5 = *(int *)(param_1 + 0x54);
          if (iVar6 < iVar5) {
            uVar8 = (iVar6 + (uint)(ushort)(&DAT_02002658)[uVar3 * 0xc]) - param_2;
            *param_4 = uVar8;
            iVar6 = (&DAT_02002660)[uVar3 * 6];
            if (iVar6 < param_3) {
              if (*(char *)(param_1 + 0x18d) == '\0') {
                uVar7 = (iVar6 + (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc]) - param_3;
                param_4[1] = uVar7;
                if ((((int)uVar8 < (int)uVar7) || (*(int *)(param_1 + 0x58) == param_3)) ||
                   ((sVar2 = sub_08009AC0(param_2,*(int *)(param_1 + 0x58) + uVar7), sVar2 != 0 ||
                    (sVar2 = sub_08028574(param_1,param_2,*(int *)(param_1 + 0x58) + param_4[1]),
                    sVar2 != 0)))) goto LAB_08027e80;
                uVar8 = 0;
LAB_08027f10:
                *param_4 = uVar8;
              }
              else {
                param_4[1] = 0;
              }
            }
            else {
              iVar6 = (iVar6 - (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc]) - param_3;
              uVar7 = iVar6 - 1;
              param_4[1] = uVar7;
              if ((int)(uVar8 + uVar7) < 0 == SCARRY4(uVar8,uVar7)) {
                if (((*(int *)(param_1 + 0x58) + -0xa00 <= param_3) &&
                    (sVar2 = sub_08009AC0(param_2,*(int *)(param_1 + 0x58) + iVar6 + -0x1e01),
                    sVar2 == 0)) &&
                   (sVar2 = sub_08028574(param_1,param_2,
                                         *(int *)(param_1 + 0x58) + (param_4[1] - 0x1e00)),
                   sVar2 == 0)) {
                  uVar8 = 0;
                  goto LAB_08027f10;
                }
                uVar8 = 0;
LAB_08027df8:
                param_4[1] = uVar8;
              }
              else {
                sVar2 = sub_08009AC0(iVar5 + uVar8,*(undefined4 *)(param_1 + 0x58));
                if (sVar2 == 0) {
                  uVar8 = sub_08028574(param_1,*(int *)(param_1 + 0x54) + *param_4,
                                       *(undefined4 *)(param_1 + 0x58));
                  uVar8 = uVar8 & 0xffff;
                  if (uVar8 == 0) goto LAB_08027df8;
                }
                *param_4 = 0;
              }
            }
          }
          else {
            uVar8 = ((iVar6 - (uint)(ushort)(&DAT_02002658)[uVar3 * 0xc]) - param_2) - 1;
            *param_4 = uVar8;
            iVar6 = (&DAT_02002660)[uVar3 * 6];
            if (iVar6 < param_3) {
              if (*(char *)(param_1 + 0x18d) == '\0') {
                uVar7 = (iVar6 + (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc]) - param_3;
                param_4[1] = uVar7;
                if ((((int)uVar7 <= (int)-uVar8) && (*(int *)(param_1 + 0x58) != param_3)) &&
                   (sVar2 = sub_08009AC0(param_2,*(int *)(param_1 + 0x58) + uVar7), sVar2 == 0)) {
                  uVar8 = sub_08028574(param_1,param_2,*(int *)(param_1 + 0x58) + param_4[1]);
                  uVar8 = uVar8 & 0xffff;
                  if (uVar8 == 0) goto LAB_08027f10;
                }
LAB_08027e80:
                param_4[1] = 0;
              }
              else {
                param_4[1] = 0;
              }
            }
            else {
              iVar6 = (iVar6 - (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc]) - param_3;
              uVar7 = iVar6 - 1;
              param_4[1] = uVar7;
              if ((int)(-uVar8 + uVar7) < 0 == SCARRY4(-uVar8,uVar7)) {
                if ((*(int *)(param_1 + 0x58) + -0xa00 <= param_3) &&
                   (sVar2 = sub_08009AC0(param_2,*(int *)(param_1 + 0x58) + iVar6 + -0x1e01),
                   sVar2 == 0)) {
                  uVar8 = sub_08028574(param_1,param_2,
                                       *(int *)(param_1 + 0x58) + (param_4[1] - 0x1e00));
                  uVar8 = uVar8 & 0xffff;
                  if (uVar8 == 0) goto LAB_08027f10;
                }
                param_4[1] = 0;
              }
              else {
                sVar2 = sub_08009AC0(iVar5 + uVar8,*(undefined4 *)(param_1 + 0x58));
                if (sVar2 == 0) {
                  uVar8 = sub_08028574(param_1,*(int *)(param_1 + 0x54) + *param_4,
                                       *(undefined4 *)(param_1 + 0x58));
                  uVar8 = uVar8 & 0xffff;
                  if (uVar8 == 0) goto LAB_08027df8;
                }
                *param_4 = 0;
              }
            }
          }
          uVar8 = *param_4;
          if (uVar8 == 0) {
            uVar8 = param_4[1];
            if (uVar8 == 0) goto LAB_08027f4e;
            *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar8;
            param_3 = param_3 + uVar8;
          }
          else {
            *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar8;
            param_2 = param_2 + uVar8;
          }
          uVar1 = (&DAT_02002656)[uVar3 * 0xc];
        }
LAB_08027f4a:
        local_38 = (uint)uVar1;
        *(undefined *)(param_1 + 399) = 1;
      }
LAB_08027f4e:
      local_34 = local_34 + 1 & 0xff;
    } while (local_34 < *(byte *)(param_1 + 0x18c));
  }
  return CONCAT44(in_lr,local_38);
}

