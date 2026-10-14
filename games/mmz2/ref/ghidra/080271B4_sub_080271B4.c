// sub_080271B4 at 0x080271B4 (thumb)

undefined4 sub_080271B4(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined4 in_lr;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  byte *local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  char *local_2c;
  short *local_28;
  short *local_24;
  
  local_7c = (uint)*(byte *)(param_1 + 0xf);
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08333bf8 + local_7c * 4));
  local_78 = (uint)*(byte *)(param_1 + 0xf);
  local_5c = *(undefined4 *)(param_1 + 0x54);
  local_58 = *(int *)(param_1 + 0x58);
  local_68 = 0;
  uVar12 = (uint)*(ushort *)(param_1 + 0x2ee);
  if (local_7c != 0) {
    bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
    if ((bVar1 & 3) == 0) {
      if (uVar12 < 0x400) {
        uVar12 = 0x400;
        *(ushort *)(param_1 + 0x2ee) = 0x400;
        local_68 = 1;
      }
    }
    else {
      if ((bVar1 & 1) == 0) {
        uVar12 = uVar12 + 0x180;
        if (*(ushort *)(param_1 + 0x2c2) < uVar12) {
          uVar12 = (uint)*(ushort *)(param_1 + 0x2c2);
        }
      }
      else {
        uVar12 = uVar12 - 0x180;
        if ((int)uVar12 < 0x400) {
          uVar12 = 0x400;
        }
      }
      if (*(ushort *)(param_1 + 0x2ee) != uVar12) {
        *(ushort *)(param_1 + 0x2ee) = (ushort)uVar12;
        local_68 = 1;
      }
    }
  }
  local_28 = (short *)(param_1 + 0x2e8);
  local_70 = (int)*local_28;
  local_2c = (char *)(param_1 + 0x2e6);
  local_74 = (int)*local_2c;
  local_24 = (short *)(param_1 + 0x2ea);
  local_6c = (int)*local_24;
  if (local_78 != 3) {
    if (local_6c < 0x668) {
      *(undefined *)(param_1 + 0xf) = 4;
      local_78 = 4;
    }
    else if (local_74 * local_70 < 0) {
      *(undefined *)(param_1 + 0xf) = 1;
      local_78 = 1;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 2;
      local_78 = 2;
    }
  }
  if (local_74 * local_70 < 0) {
    local_38 = param_1 + 0x54;
    local_34 = param_1 + 0xb4;
    local_30 = (undefined4 *)(param_1 + 0xd8);
    if (local_68 == 0) {
      uVar4 = sub_0801F5F4(local_38,local_34,local_30,*local_30,*(undefined4 *)(param_1 + 0xdc),
                           *(byte *)(param_1 + 10) >> 4 & 1,-local_74,1,1,0,0);
      local_60 = uVar4 & 0xffff;
      if ((uVar4 & 0x4f) == 0) {
        local_68 = 1;
      }
    }
  }
  else {
    local_68 = 1;
    local_38 = param_1 + 0x54;
    local_34 = param_1 + 0xb4;
    local_30 = (undefined4 *)(param_1 + 0xd8);
  }
  if ((local_6c != 0) || (local_70 != 0)) {
    if (local_68 != 0) {
      if (local_74 * local_70 < 0) {
        iVar6 = local_74 * (local_70 - *(short *)(param_1 + 0x2ec)) * 0x20;
        sVar2 = sub_080EEF7C(iVar6);
        if (sVar2 == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = sub_080EEF7C(iVar6);
          uVar4 = uVar4 & 0xffff;
        }
        if ((int)uVar4 < (int)*(short *)(param_1 + 0x2f0)) {
          uVar4 = (int)*(short *)(param_1 + 0x2f0);
        }
        iVar6 = local_6c * 0x20;
        sVar2 = sub_080EEF7C(iVar6);
        if (sVar2 == 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = sub_080EEF7C(iVar6);
          uVar5 = uVar5 & 0xffff;
        }
        if ((int)uVar5 < (int)uVar4) {
          uVar4 = uVar5;
        }
      }
      else {
        iVar6 = (local_6c - local_74 * local_70) * 0x20;
        sVar2 = sub_080EEF7C(iVar6);
        if (sVar2 == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = sub_080EEF7C(iVar6);
          uVar4 = uVar4 & 0xffff;
        }
      }
      *(short *)(param_1 + 0x2f0) = (short)uVar4;
      local_70 = local_70 + local_74 * uVar4;
    }
    if ((0 < local_74 * local_70) &&
       ((uint)((local_6c + -1) * 2) < (uint)(local_70 + -1 + local_6c))) {
      if (local_78 != 4) {
        *(undefined *)(param_1 + 0xf) = 3;
        local_78 = 3;
        local_7c = 2;
      }
      local_70 = local_74 * local_6c;
      local_74 = -local_74;
      *local_2c = (char)local_74;
      *(short *)(param_1 + 0x2ec) = (short)local_70;
      *(undefined2 *)(param_1 + 0x2f0) = 0;
    }
    *local_28 = (short)local_70;
  }
  iVar6 = sub_08032F48(param_1,&local_8c,param_1 + 0x2c4,uVar12 + 0x1800,local_70);
  *(char *)(param_1 + 0x2c1) = (char)iVar6;
  local_3c = (byte *)(param_1 + 0x17f);
  local_4c = (uint)*local_3c;
  local_48 = 0;
  if (local_78 - 3 < 2) {
    if (local_78 == 3) {
      if (local_7c != 3) {
        local_4c = 0x69;
        local_48 = 1;
        *(bool *)(param_1 + 0x4c) = 0 < local_74;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (0 < local_74) << 4;
        if (0 < local_74) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        }
        else {
LAB_080275d8:
          local_48 = 1;
          local_4c = 0x69;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        }
      }
    }
    else {
      local_4c = 0x68;
    }
  }
  else {
    uVar4 = iVar6 + 0x80U & 0xff;
    if (local_70 + 0x2000U < 0x4001) {
      if (local_74 < 1) {
        iVar6 = 0x60 - uVar4;
      }
      else {
        iVar6 = uVar4 - 0x20;
      }
      if ((local_74 * local_70 < 1) ||
         ((uint)(local_70 + -1 + local_6c) <= (uint)((local_6c + -1) * 2))) {
        iVar6 = iVar6 * 5;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0x3f;
        }
        iVar6 = iVar6 >> 6;
        if (4 < iVar6) {
          iVar6 = 4;
        }
        local_4c = iVar6 + 99;
      }
      else {
        *(undefined *)(param_1 + 0xf) = 3;
        local_4c = 0x69;
        local_48 = 1;
        *(bool *)(param_1 + 0x4c) = 0 < local_74;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (0 < local_74) << 4;
        if (0 >= local_74) goto LAB_080275d8;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
    }
    else {
      iVar6 = sub_08036AD0(param_1,iVar6);
      if (0 < iVar6) {
        local_4c = (uint)(byte)(&DAT_08335c9a)[iVar6];
      }
    }
  }
  local_4c = sub_08033100(param_1,local_4c,local_48);
  local_44 = sub_08033018();
  local_40 = sub_08033048(local_4c,local_44);
  if (local_68 == 0) {
    iVar6 = *(int *)(param_1 + 0x54);
    iVar7 = *(int *)(param_1 + 0x58);
  }
  else {
    sub_08032F48(param_1,&local_84,param_1 + 0x2c4,uVar12,local_70);
    iVar6 = (local_8c - local_84) * uVar12;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0x3fff;
    }
    iVar7 = (local_88 - local_80) * uVar12;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0x3fff;
    }
    iVar6 = (iVar6 >> 0xe) + local_84;
    iVar7 = (iVar7 >> 0xe) + local_80;
    local_54 = sub_08035F20(param_1,&DAT_08335d18);
    local_50 = sub_08035F38(param_1,&DAT_08335d18);
    uVar8 = sub_08033090(param_1,local_4c,local_44,local_40);
    iVar9 = sub_08035F20(param_1,uVar8);
    iVar10 = (local_54 - iVar9) * uVar12;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0x3fff;
    }
    local_54 = (iVar10 >> 0xe) + iVar9;
    iVar9 = sub_08035F38(param_1,uVar8);
    iVar10 = (local_50 - iVar9) * uVar12;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0x3fff;
    }
    local_50 = (iVar10 >> 0xe) + iVar9;
    iVar6 = iVar6 - local_54;
    iVar7 = iVar7 - local_50;
  }
  iVar9 = iVar7 - local_58;
  *(int *)(param_1 + 0x60) = iVar9;
  *(int *)(param_1 + 0x58) = iVar7;
  uVar12 = sub_0801F57C(local_38,local_34,local_30,*local_30,local_30[1],
                        *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
  uVar12 = uVar12 & 0xffff;
  local_64 = uVar12;
  if (iVar9 < 0) {
    uVar12 = sub_0801F5B8(local_38,local_34,local_30,*local_30,local_30[1],
                          *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
    uVar12 = uVar12 & 0xffff;
  }
  if ((local_64 & 0x4f) == 0) {
LAB_080277d0:
    *(int *)(param_1 + 0x54) = iVar6;
    local_60 = sub_0801F5F4(local_38,local_34,local_30,*local_30,local_30[1],
                            *(byte *)(param_1 + 10) >> 4 & 1,-local_74,1,1,0,1);
    local_60 = local_60 & 0xffff;
    local_64 = sub_0801F5F4(local_38,local_34,local_30,*local_30,local_30[1],
                            *(byte *)(param_1 + 10) >> 4 & 1,local_74,1,1,0,1);
    local_64 = local_64 & 0xffff;
    uVar3 = sub_0801F57C(local_38,local_34,local_30,*local_30,local_30[1],
                         *(byte *)(param_1 + 10) >> 4 & 1,1,1,0,1);
    if ((uVar3 & 0x4f) != 0) {
      local_84 = *(int *)(param_1 + 0x54);
      local_80 = *(int *)(param_1 + 0x58);
      uVar8 = sub_08033090(param_1,0x68,2,0xffffffff);
      iVar6 = sub_08035F38(param_1,uVar8);
      local_80 = local_80 + iVar6;
      if ((local_80 <= *(int *)(param_1 + 0x2c8) + 0x400) ||
         (iVar6 = sub_08032E90(param_1,uVar3), iVar6 != 0)) {
        *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 0;
        goto LAB_080278c6;
      }
    }
    if ((((local_64 & 0x4f) != 0) || ((local_60 & 0x4f) != 0)) || ((uVar12 & 0x4f) != 0)) {
      local_8c = *(int *)(param_1 + 0x54);
      local_88 = *(int *)(param_1 + 0x58);
      local_84 = local_8c;
      local_80 = local_88;
      local_54 = sub_08035F20(param_1,&DAT_08335d18);
      iVar6 = sub_08035F38(param_1,&DAT_08335d18);
      local_8c = local_8c + local_54;
      local_88 = local_88 + iVar6;
      piVar14 = (int *)(param_1 + 0x2c4);
      local_54 = *piVar14 - local_8c;
      piVar13 = (int *)(param_1 + 0x2c8);
      local_50 = *piVar13 - local_88;
      uVar8 = sub_08038E6C(local_54);
      uVar12 = sub_080EEF7C(local_54 * local_54 + local_50 * local_50);
      uVar12 = (uVar12 & 0xffff) - 0x1800;
      uVar11 = sub_08033090(param_1,local_4c,local_44,local_40);
      local_54 = sub_08035F20(param_1,uVar11);
      iVar6 = sub_08035F38(param_1,uVar11);
      local_84 = local_84 + local_54;
      local_80 = local_80 + iVar6;
      local_54 = *piVar14 - local_84;
      local_50 = *piVar13 - local_80;
      uVar11 = sub_08038E6C(local_54);
      iVar6 = sub_08032E78(uVar8,uVar11);
      if (iVar6 == 0) {
        uVar4 = sub_080EEF7C(local_54 * local_54 + local_50 * local_50);
        uVar12 = (int)(uVar12 + (uVar4 & 0xffff)) / 2;
      }
      uVar4 = (uint)*(ushort *)(param_1 + 0x2c2);
      if (((int)uVar12 <= (int)uVar4) && (uVar4 = uVar12, (int)uVar12 < 0x400)) {
        uVar4 = 0x400;
      }
      *(short *)(param_1 + 0x2ee) = (short)uVar4;
      if (((*(char *)(param_1 + 0xd) == '\x04') &&
          (((local_64 & 0x4f) != 0 || ((local_60 & 0x4f) != 0)))) &&
         (((local_60 & 0x4f) != 0 || (-1 < local_74 * local_70)))) {
        if ((uVar4 == 0) || (iVar6 != 0)) {
          local_54 = local_8c;
          local_50 = local_88;
        }
        else {
          iVar6 = (local_8c - local_84) * uVar4;
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0x3fff;
          }
          iVar7 = (local_88 - local_80) * uVar4;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0x3fff;
          }
          local_54 = (iVar6 >> 0xe) + local_84;
          local_50 = (iVar7 >> 0xe) + local_80;
        }
        local_54 = local_54 - *piVar14;
        iVar6 = sub_08038E6C(local_54,local_50 - *piVar13);
        local_70 = iVar6 * 0x100 + -0x4000;
        if (*local_24 == 0) {
          *(short *)(param_1 + 0x2ec) = (short)local_70;
          *(undefined2 *)(param_1 + 0x2f0) = 0;
          local_74 = -((local_70 >> 0x1f) * 2 + 1);
          *local_2c = (char)local_74;
          bVar1 = (byte)((uint)local_74 >> 0x18);
          *(byte *)(param_1 + 0x4c) = bVar1 >> 7;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | ((char)bVar1 >> 7) * -0x10;
          if (local_74 < 0) {
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
          }
          else {
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
          }
        }
        else if (local_74 * local_70 < 1) {
          if (local_74 * local_70 < 0) {
            *(short *)(param_1 + 0x2ec) = (short)local_70;
          }
          else {
            *(short *)(param_1 + 0x2ec) = -(short)local_70;
          }
          *(undefined2 *)(param_1 + 0x2f0) = 0;
        }
        local_6c = sub_08033154(param_1,local_70);
        *local_24 = (short)local_6c;
        *local_28 = (short)local_70;
      }
    }
    sub_0801F57C(local_38,local_34,local_30,*local_30,local_30[1],*(byte *)(param_1 + 10) >> 4 & 1,1
                 ,1,0,1);
    uVar8 = sub_08033090(param_1,*local_3c,0xffffffff);
    sub_08035F88(param_1,uVar8);
  }
  else {
    local_84 = *(int *)(param_1 + 0x54);
    local_80 = *(int *)(param_1 + 0x58);
    uVar8 = sub_08033090(param_1,0x68,2,0xffffffff);
    iVar7 = sub_08035F38(param_1,uVar8);
    local_80 = local_80 + iVar7;
    if ((*(int *)(param_1 + 0x2c8) + 0x400 < local_80) &&
       (iVar7 = sub_08032E90(param_1,local_64), iVar7 == 0)) goto LAB_080277d0;
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
LAB_080278c6:
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_0801E6AC(7);
  }
  return in_lr;
}

