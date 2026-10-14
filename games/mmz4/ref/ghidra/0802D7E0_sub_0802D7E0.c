// sub_0802D7E0 at 0x0802D7E0 (thumb)

undefined8 sub_0802D7E0(int param_1,int param_2,int param_3,uint *param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  param_4[1] = 0;
  *param_4 = 0;
  local_34 = 0;
  local_2c = 0;
  local_38 = param_2;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar6 = (uint)*(byte *)(param_1 + 0x188 + local_2c);
      local_30 = (uint)(ushort)(&DAT_02000c86)[uVar6 * 0xc];
      if ((local_30 & 0xf) == 0xf) {
        if (((&DAT_02000c86)[uVar6 * 0xc] & 0x8000) != 0) {
          local_30 = 0x8001;
          goto LAB_0802d850;
        }
      }
      else {
LAB_0802d850:
        puVar5 = &DAT_02000c88 + uVar6 * 0xc;
        if (((local_38 - (&DAT_02000c8c)[uVar6 * 6]) + (uint)*puVar5 < (uint)*puVar5 << 1) &&
           ((param_3 - (&DAT_02000c90)[uVar6 * 6]) + (uint)(ushort)(&DAT_02000c8a)[uVar6 * 0xc] <
            (uint)(ushort)(&DAT_02000c8a)[uVar6 * 0xc] << 1)) {
          sub_0802E624(param_1,uVar6);
          iVar3 = (&DAT_02000c8c)[uVar6 * 6];
          if ((iVar3 == (&DAT_02000c94)[uVar6 * 6]) &&
             ((&DAT_02000c90)[uVar6 * 6] == *(int *)(&DAT_02000c98 + uVar6 * 0x18))) {
            iVar7 = *(int *)(param_1 + 0x54);
            if (iVar3 < iVar7) {
              uVar2 = (iVar3 + (uint)*puVar5) - local_38;
            }
            else {
              uVar2 = ((iVar3 - (uint)*puVar5) - local_38) - 1;
            }
            *param_4 = uVar2;
            uVar2 = *param_4;
            if (uVar2 != 0) {
              uVar4 = uVar2;
              if ((int)uVar2 < 0) {
                uVar4 = -uVar2;
              }
              if ((int)uVar4 < 0x1000) {
                *(uint *)(param_1 + 0x54) = iVar7 + uVar2;
                local_38 = local_38 + uVar2;
                goto LAB_0802dbe8;
              }
            }
            *param_4 = 0;
            iVar3 = *(int *)(param_1 + 0x58);
            if (iVar3 + -0x1000 < param_3) {
              uVar6 = (((&DAT_02000c90)[uVar6 * 6] - (uint)(ushort)(&DAT_02000c8a)[uVar6 * 0xc]) -
                      param_3) - 1;
            }
            else {
              uVar6 = ((&DAT_02000c90)[uVar6 * 6] + (uint)(ushort)(&DAT_02000c8a)[uVar6 * 0xc]) -
                      param_3;
            }
            param_4[1] = uVar6;
            uVar6 = param_4[1];
            if (uVar6 == 0) goto LAB_0802dbec;
            *(uint *)(param_1 + 0x58) = iVar3 + uVar6;
            param_3 = param_3 + uVar6;
          }
          else {
            iVar3 = (&DAT_02000c8c)[uVar6 * 6];
            iVar7 = *(int *)(param_1 + 0x54);
            if (iVar3 < iVar7) {
              uVar2 = (iVar3 + (uint)(ushort)(&DAT_02000c88)[uVar6 * 0xc]) - local_38;
              *param_4 = uVar2;
              iVar3 = (&DAT_02000c90)[uVar6 * 6];
              if (iVar3 < param_3) {
                if (*(char *)(param_1 + 0x1b9) == '\0') {
                  uVar6 = (iVar3 + (uint)(ushort)(&DAT_02000c8a)[uVar6 * 0xc]) - param_3;
                  param_4[1] = uVar6;
                  if ((((int)uVar2 < (int)uVar6) || (*(int *)(param_1 + 0x58) == param_3)) ||
                     ((sVar1 = sub_08007D28(local_38,*(int *)(param_1 + 0x58) + uVar6), sVar1 != 0
                      || (sVar1 = sub_0802E2B8(param_1,local_38,
                                               *(int *)(param_1 + 0x58) + param_4[1]), sVar1 != 0)))
                     ) {
                    param_4[1] = 0;
                  }
                  else {
                    uVar6 = 0;
LAB_0802dbbc:
                    *param_4 = uVar6;
                  }
                }
                else {
LAB_0802dae0:
                  uVar6 = 0;
LAB_0802dae2:
                  param_4[1] = uVar6;
                }
              }
              else {
                iVar3 = (iVar3 - (uint)(ushort)(&DAT_02000c8a)[uVar6 * 0xc]) - param_3;
                uVar6 = iVar3 - 1;
                param_4[1] = uVar6;
                if ((int)(uVar2 + uVar6) < 0 == SCARRY4(uVar2,uVar6)) {
                  if (((*(int *)(param_1 + 0x58) + -0xa00 <= param_3) &&
                      (sVar1 = sub_08007D28(local_38,*(int *)(param_1 + 0x58) + iVar3 + -0x1e01),
                      sVar1 == 0)) &&
                     (sVar1 = sub_0802E2B8(param_1,local_38,
                                           *(int *)(param_1 + 0x58) + (param_4[1] - 0x1e00)),
                     sVar1 == 0)) {
                    uVar6 = 0;
                    goto LAB_0802dbbc;
                  }
                  goto LAB_0802dae0;
                }
                sVar1 = sub_08007D28(iVar7 + uVar2,*(undefined4 *)(param_1 + 0x58));
                if (sVar1 == 0) {
                  uVar6 = sub_0802E2B8(param_1,*(int *)(param_1 + 0x54) + *param_4,
                                       *(undefined4 *)(param_1 + 0x58));
                  uVar6 = uVar6 & 0xffff;
                  if (uVar6 == 0) goto LAB_0802dae2;
                }
                *param_4 = 0;
              }
            }
            else {
              uVar2 = ((iVar3 - (uint)(ushort)(&DAT_02000c88)[uVar6 * 0xc]) - local_38) - 1;
              *param_4 = uVar2;
              iVar3 = (&DAT_02000c90)[uVar6 * 6];
              if (iVar3 < param_3) {
                if (*(char *)(param_1 + 0x1b9) != '\0') goto LAB_0802dae0;
                uVar6 = (iVar3 + (uint)(ushort)(&DAT_02000c8a)[uVar6 * 0xc]) - param_3;
                param_4[1] = uVar6;
                if ((((int)uVar6 <= (int)-uVar2) && (*(int *)(param_1 + 0x58) != param_3)) &&
                   (sVar1 = sub_08007D28(local_38,*(int *)(param_1 + 0x58) + uVar6), sVar1 == 0)) {
                  uVar6 = sub_0802E2B8(param_1,local_38,*(int *)(param_1 + 0x58) + param_4[1]);
                  uVar6 = uVar6 & 0xffff;
                  if (uVar6 == 0) goto LAB_0802dbbc;
                }
                param_4[1] = 0;
              }
              else {
                iVar3 = (iVar3 - (uint)(ushort)(&DAT_02000c8a)[uVar6 * 0xc]) - param_3;
                uVar6 = iVar3 - 1;
                param_4[1] = uVar6;
                if ((int)(-uVar2 + uVar6) < 0 == SCARRY4(-uVar2,uVar6)) {
                  if ((*(int *)(param_1 + 0x58) + -0xa00 <= param_3) &&
                     (sVar1 = sub_08007D28(local_38,*(int *)(param_1 + 0x58) + iVar3 + -0x1e01),
                     sVar1 == 0)) {
                    uVar6 = sub_0802E2B8(param_1,local_38,
                                         *(int *)(param_1 + 0x58) + (param_4[1] - 0x1e00));
                    uVar6 = uVar6 & 0xffff;
                    if (uVar6 == 0) goto LAB_0802dbbc;
                  }
                  param_4[1] = 0;
                }
                else {
                  sVar1 = sub_08007D28(iVar7 + uVar2,*(undefined4 *)(param_1 + 0x58));
                  if (sVar1 == 0) {
                    uVar6 = sub_0802E2B8(param_1,*(int *)(param_1 + 0x54) + *param_4,
                                         *(undefined4 *)(param_1 + 0x58));
                    uVar6 = uVar6 & 0xffff;
                    if (uVar6 == 0) goto LAB_0802dae2;
                  }
                  *param_4 = 0;
                }
              }
            }
            uVar6 = *param_4;
            if (uVar6 == 0) {
              uVar6 = param_4[1];
              if (uVar6 == 0) goto LAB_0802dbec;
              *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar6;
              param_3 = param_3 + uVar6;
            }
            else {
              *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar6;
              local_38 = local_38 + uVar6;
            }
          }
LAB_0802dbe8:
          local_34 = local_30;
          *(undefined *)(param_1 + 0x1bb) = 1;
        }
      }
LAB_0802dbec:
      local_2c = local_2c + 1 & 0xff;
    } while (local_2c < *(byte *)(param_1 + 0x1b8));
  }
  return CONCAT44(in_lr,local_34);
}

