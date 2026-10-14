// sub_080361A0 at 0x080361A0 (thumb)

uint sub_080361A0(int param_1,int param_2,int param_3,int param_4)

{
  undefined uVar1;
  undefined uVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  byte local_4c;
  byte local_4b [3];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  undefined *local_28;
  undefined *local_24;
  
  piVar10 = (int *)(param_1 + 0x2c4);
  piVar5 = (int *)(param_1 + 0x2cc);
  local_48 = *piVar10;
  local_44 = *(int *)(param_1 + 0x2c8);
  local_38 = 0;
  local_34 = 0;
  local_4c = 0xff;
  local_4b[0] = 0xff;
  if (param_2 == 0) {
    param_2 = *piVar10 - *piVar5;
  }
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x2c8) - *(int *)(param_1 + 0x2d0);
  }
  if (param_2 != 0) {
    param_2 = (param_2 >> 0x1f) * 2 + 1;
  }
  if (param_3 != 0) {
    param_3 = (param_3 >> 0x1f) * 2 + 1;
  }
  local_28 = (undefined *)(param_1 + 0x2e4);
  *local_28 = 0;
  local_24 = (undefined *)(param_1 + 0x2e5);
  *local_24 = 0;
  uVar1 = (undefined)param_2;
  local_40 = local_48;
  local_3c = local_44;
  local_30 = param_4;
  local_2c = param_1;
  if (param_2 != 0) {
    uVar6 = sub_08021690(&local_48,piVar5,param_4,param_2,&local_4c);
    local_38 = uVar6 & 0xffff;
    if ((uVar6 & 0xf) != 0) {
      if (local_30 == 0) {
        *local_28 = uVar1;
        return local_38;
      }
      cVar4 = sub_080369CC(local_2c);
      if ((cVar4 != '\0') && (-1 < (local_48 - *piVar5) * param_2)) {
        *piVar10 = local_48;
        *(int *)(param_1 + 0x2c8) = local_44;
        uVar6 = sub_08036994(local_2c,piVar10,local_38);
        if (local_4c == 0xff) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)*(ushort *)(&DAT_020011d4 + (uint)local_4c * 0x18);
        }
        *(uint *)(local_2c + 0x2e0) = uVar7;
        *local_28 = uVar1;
LAB_080364e4:
        return uVar6 & 0xffff;
      }
    }
  }
  uVar2 = (undefined)param_3;
  if (param_3 != 0) {
    if (param_3 < 1) {
      uVar6 = sub_08021680(&local_40,piVar5,local_30,local_4b);
    }
    else {
      uVar6 = sub_08021670(&local_40,piVar5,local_30,local_4b);
    }
    local_34 = uVar6 & 0xffff;
    if ((uVar6 & 0xf) != 0) {
      if (local_30 == 0) {
        *local_24 = uVar2;
LAB_080365ea:
        return local_34 << 0x10;
      }
      cVar4 = sub_080369CC(local_2c);
      if ((cVar4 != '\0') && (-1 < (local_3c - *(int *)(param_1 + 0x2d0)) * param_3)) {
        *piVar10 = local_40;
        *(int *)(param_1 + 0x2c8) = local_3c;
        local_34 = sub_08036994(local_2c,piVar10,local_34);
        if (local_4b[0] == 0xff) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)*(ushort *)(&DAT_020011d4 + (uint)local_4b[0] * 0x18);
        }
        *(uint *)(local_2c + 0x2e0) = uVar6;
        *local_24 = uVar2;
LAB_080365dc:
        return local_34 << 0x10;
      }
    }
  }
  if (((local_4c == 0xff) && (local_4b[0] == 0xff)) ||
     (uVar6 = sub_08036614(local_2c,piVar10,piVar5,&local_48,&local_40,&local_4c,local_4b,&local_38,
                           &local_34,&local_30), uVar6 == 0)) {
    uVar6 = sub_08008D80(*piVar10,*(undefined4 *)(param_1 + 0x2c8));
    if ((uVar6 & 0xf) != 0) {
      iVar8 = *piVar10;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xfff;
      }
      local_40 = (iVar8 >> 0xc) * 0x1000;
      iVar8 = *(int *)(param_1 + 0x2c8);
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xfff;
      }
      local_44 = (iVar8 >> 0xc) * 0x1000;
      if (param_2 < 0) {
        local_40 = local_40 + 0xfff;
      }
      if (param_3 < 0) {
        local_44 = local_44 + 0xfff;
      }
      local_44 = local_44 - param_3;
      local_40 = local_40 - param_2;
      do {
        bVar3 = false;
        local_38 = 0;
        local_34 = 0;
        if (param_2 != 0) {
          iVar9 = *piVar5;
          iVar8 = sub_080EF150((*piVar10 - iVar9) * (local_44 - *(int *)(param_1 + 0x2d0)),
                               *(int *)(param_1 + 0x2c8) - *(int *)(param_1 + 0x2d0));
          if (0 < iVar8 * param_2) {
            local_48 = iVar9 + iVar8;
            uVar6 = sub_08021690(&local_48,piVar5,local_30,param_2,&local_4c);
            local_38 = uVar6 & 0xffff;
            if ((uVar6 & 0xf) != 0) {
              if (local_30 == 0) {
                *local_28 = uVar1;
                return local_38;
              }
              cVar4 = sub_080369CC(local_2c);
              if ((cVar4 != '\0') && (-1 < (local_48 - *piVar5) * param_2)) {
                *piVar10 = local_48;
                *(int *)(param_1 + 0x2c8) = local_44;
                uVar6 = sub_08036994(local_2c,piVar10,local_38);
                if (local_4c == 0xff) {
                  uVar7 = 0xffffffff;
                }
                else {
                  uVar7 = (uint)*(ushort *)(&DAT_020011d4 + (uint)local_4c * 0x18);
                }
                *(uint *)(local_2c + 0x2e0) = uVar7;
                *local_28 = uVar1;
                goto LAB_080364e4;
              }
            }
            local_44 = local_44 + param_3 * -0x1000;
            bVar3 = true;
          }
        }
        if (param_3 != 0) {
          iVar9 = *(int *)(param_1 + 0x2d0);
          iVar8 = sub_080EF150((*(int *)(param_1 + 0x2c8) - iVar9) * (local_40 - *piVar5),
                               *piVar10 - *piVar5);
          if (0 < iVar8 * param_3) {
            local_3c = iVar9 + iVar8;
            if (param_3 < 1) {
              uVar6 = sub_08021680(&local_40,piVar5,local_30,local_4b);
            }
            else {
              uVar6 = sub_08021670(&local_40,piVar5,local_30,local_4b);
            }
            local_34 = uVar6 & 0xffff;
            if ((uVar6 & 0xf) != 0) {
              if (local_30 == 0) {
                *local_24 = uVar2;
                goto LAB_080365ea;
              }
              cVar4 = sub_080369CC(local_2c);
              if ((cVar4 != '\0') && (-1 < (local_3c - *(int *)(param_1 + 0x2d0)) * param_3)) {
                *piVar10 = local_40;
                *(int *)(param_1 + 0x2c8) = local_3c;
                local_34 = sub_08036994(local_2c,piVar10,local_34);
                if (local_4b[0] == 0xff) {
                  uVar6 = 0xffffffff;
                }
                else {
                  uVar6 = (uint)*(ushort *)(&DAT_020011d4 + (uint)local_4b[0] * 0x18);
                }
                *(uint *)(local_2c + 0x2e0) = uVar6;
                *local_24 = uVar2;
                goto LAB_080365dc;
              }
            }
            local_40 = local_40 + param_2 * -0x1000;
            bVar3 = true;
          }
        }
      } while (bVar3);
    }
    uVar6 = 0;
  }
  return uVar6;
}

