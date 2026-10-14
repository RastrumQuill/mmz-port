// sub_08090A20 at 0x08090A20 (thumb)

undefined4 sub_08090A20(int param_1)

{
  ushort uVar1;
  undefined uVar2;
  char cVar3;
  short sVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 in_lr;
  int local_38;
  int local_34;
  int local_30;
  ushort *local_2c;
  byte *local_28;
  uint local_24;
  
  puVar5 = (uint *)(param_1 + 0x8c);
  uVar9 = *puVar5;
  local_24 = uVar9 & 0x200;
  if (local_24 != 0) {
    if ((uVar9 & 0x10000) == 0) {
      bVar10 = 0;
    }
    else {
      bVar10 = (byte)(-(uVar9 & 0x8000) >> 0x1f);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    uVar9 = 0;
    *(byte *)(param_1 + 0xd) = bVar10;
    *(undefined4 *)(param_1 + 0x8c) = 0;
LAB_08090ee6:
    *(uint *)(param_1 + 0x90) = uVar9;
    *(char *)(param_1 + 0x94) = (char)uVar9;
LAB_08090eec:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08090F84(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar6 = DAT_0202ebbb & 0x20;
    if ((DAT_0202ebbb & 0x20) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar5 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
LAB_08090c4e:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    uVar9 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    uVar2 = (undefined)uVar6;
    if (0x1dfff < uVar9) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar5 = uVar6;
      *(uint *)(param_1 + 0x90) = uVar6;
      *(undefined *)(param_1 + 0x94) = uVar2;
      goto LAB_08090c4e;
    }
    uVar9 = DAT_0202ec44 & 1;
    if ((DAT_0202ec44 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = uVar2;
      *puVar5 = uVar6;
      *(uint *)(param_1 + 0x90) = uVar6;
      *(undefined *)(param_1 + 0x94) = uVar2;
      goto LAB_08090eec;
    }
    local_30 = *(int *)(param_1 + 0x54);
    sub_080128D4(param_1);
    local_2c = (ushort *)(param_1 + 0xb4);
    uVar6 = (uint)*local_2c * 0x90000 >> 0x10;
    if (*(char *)(param_1 + 0xd) == '\0') {
      pcVar11 = (char *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)*pcVar11 * *(int *)(param_1 + 0x5c)
      ;
      local_28 = (byte *)(param_1 + 0xb9);
      if (1 < *local_28) {
        puVar5 = (uint *)(param_1 + 0xbc);
        uVar7 = *puVar5 + *(int *)(param_1 + 0x5c);
        *puVar5 = uVar7;
        if (0x77ff < (int)uVar7) {
          sub_080032EC(0x3c);
          *puVar5 = uVar9;
        }
      }
      sVar4 = sub_08008CFC(*(int *)(param_1 + 0x54) + (int)*pcVar11 * uVar6,
                           *(undefined4 *)(param_1 + 0x58));
      if (sVar4 == 0) {
        uVar13 = *(undefined4 *)(param_1 + 0x54);
        iVar8 = *(int *)(param_1 + 0x58) + uVar6 + 0x800;
        sVar4 = sub_08008CFC(uVar13,iVar8);
        if (sVar4 == 0) {
          *(undefined4 *)(param_1 + 0x60) = 0;
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        }
        else {
          iVar8 = sub_080093C4(uVar13,iVar8);
          *(uint *)(param_1 + 0x58) = iVar8 - uVar6;
          iVar12 = *(int *)(param_1 + 0x54) + *pcVar11 * 0x800;
          iVar8 = (iVar8 - uVar6) + uVar6;
          sVar4 = sub_08008CFC(iVar12,iVar8 + -0x100);
          if ((sVar4 != 0) && (sVar4 = sub_08008CFC(iVar12,iVar8 + -0x900), sVar4 == 0)) {
            *pcVar11 = -*pcVar11;
            *(int *)(param_1 + 0x5c) = -(*(int *)(param_1 + 0x5c) >> 2);
          }
          if ((*(int *)(param_1 + 0x5c) < 0x300) &&
             (sVar4 = sub_08008CFC(*(int *)(param_1 + 0x54) + (int)*pcVar11 * uVar6,
                                   *(int *)(param_1 + 0x58) + uVar6 + 1), sVar4 == 0)) {
            iVar8 = *(int *)(param_1 + 0x5c);
            if (iVar8 < 0) {
              iVar8 = iVar8 + 0x14;
            }
            else {
              iVar8 = iVar8 + 8;
            }
            *(int *)(param_1 + 0x5c) = iVar8;
          }
          if (((0 < *(int *)(param_1 + 0x5c)) && (*local_2c < 0x200)) &&
             (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3,
             cVar3 == '\0')) {
            uVar1 = *local_2c;
            *local_2c = uVar1 + 8;
            *(ushort *)(param_1 + 0x50) = uVar1 + 8;
            *(ushort *)(param_1 + 0x52) = *local_2c;
            *(undefined *)(param_1 + 0x12) = 8;
            if ((*local_28 < 6) &&
               (iVar12 = *local_28 + 1, iVar8 = iVar12 * 0x800,
               (int)(iVar8 + (uint)*local_2c * -0x18) < 0 != SBORROW4(iVar8,(uint)*local_2c * 0x18))
               ) {
              *local_28 = (byte)iVar12;
              sub_08006E08(param_1 + 0x74,&DAT_083422c0 + (uint)*local_28 * 0x30);
            }
          }
        }
        goto LAB_08090f3e;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      uVar9 = 0;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * (int)*(char *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x54) = iVar8;
      sVar4 = sub_08008CFC(iVar8 + (int)*(char *)(param_1 + 0xb8) * uVar6,
                           *(undefined4 *)(param_1 + 0x58));
      if (sVar4 == 0) {
        iVar8 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        *(int *)(param_1 + 0x58) = iVar8;
        uVar13 = *(undefined4 *)(param_1 + 0x54);
        iVar8 = iVar8 + uVar6 + 1;
        sVar4 = sub_08008CFC(uVar13,iVar8);
        if (sVar4 == 0) {
          iVar8 = *(int *)(param_1 + 0x60) + 0x40;
          *(int *)(param_1 + 0x60) = iVar8;
          if (0x700 < iVar8) {
            *(undefined4 *)(param_1 + 0x60) = 0x700;
          }
        }
        else {
          iVar8 = sub_080093C4(uVar13,iVar8);
          *(uint *)(param_1 + 0x58) = iVar8 - uVar6;
          *(undefined *)(param_1 + 0xd) = 0;
        }
LAB_08090f3e:
        iVar12 = *(int *)(param_1 + 0x54) - local_30;
        iVar8 = sub_080EF150(0x1000000,(int)(uVar6 * 0x648) >> 8);
        iVar12 = iVar12 * iVar8;
        if (iVar12 < 0) {
          iVar12 = iVar12 + 0xff;
        }
        iVar8 = (iVar12 >> 8) + (uint)*(ushort *)(param_1 + 0xb6);
        *(ushort *)(param_1 + 0xb6) = (ushort)iVar8;
        *(char *)(param_1 + 0x24) = (char)((uint)iVar8 >> 8);
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(char *)(param_1 + 0xd) = (char)uVar9;
      *(char *)(param_1 + 0xe) = (char)uVar9;
      *puVar5 = uVar9;
    }
    goto LAB_08090ee6;
  }
  iVar8 = sub_08065A24(param_1);
  if (iVar8 != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      return in_lr;
    }
    *(uint *)(param_1 + 0x2c) = local_24;
    sub_08006E08(param_1 + 0x74,&DAT_083422c0);
    return in_lr;
  }
  if ((*puVar5 & 1) == 0) {
LAB_08090ad8:
    if (*(int *)(param_1 + 0x2c) != 0) {
LAB_08090ade:
      sub_08012ACC(param_1);
      iVar8 = sub_0801E4D8(*(undefined4 *)(param_1 + 0x2c));
      if (iVar8 == 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      sub_08006E08(param_1 + 0x74,&DAT_083422c0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) goto LAB_08090ade;
    iVar8 = sub_0801E11C(0,param_1,&DAT_083422b8);
    *(int *)(param_1 + 0x2c) = iVar8;
    if (iVar8 != 0) {
      sub_08006E08(param_1 + 0x74,&DAT_08342410);
      goto LAB_08090ad8;
    }
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0x8e02);
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_08090b0e_caseD_1:
    sub_080128D4(param_1);
    if (((*(char *)(param_1 + 0x12) == '\0') ||
        (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0'))
       && (*(char *)(param_1 + 0x73) == '\x04')) {
LAB_08090b96:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_08090b0e_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08090b0e_caseD_1;
  case 2:
    sub_080127E4(param_1,0x8e00);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08090b96;
  case 4:
    local_38 = *(int *)(param_1 + 0x54) + (uint)*(byte *)(param_1 + 0x11) * 0x2000 + -0x1000;
    local_34 = *(int *)(param_1 + 0x58) + -0x2000;
    sub_08090830(&local_38,1,*(undefined *)(param_1 + 0x11));
    sub_080127E4(param_1,0x8e01);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
    }
  default:
    goto switchD_08090b0e_caseD_6;
  }
}

