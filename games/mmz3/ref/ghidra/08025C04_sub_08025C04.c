// sub_08025C04 at 0x08025C04 (thumb)

undefined8 sub_08025C04(int param_1,short *param_2,uint param_3)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_lr;
  int local_38 [4];
  int local_28;
  uint local_24;
  
  param_3 = param_3 & 0xff;
  uVar10 = 0;
  sub_08026FB8(param_1,param_2,0);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (param_3 == 0) {
      iVar4 = *(int *)(param_1 + 0x54) + (int)*param_2;
      goto LAB_08025c58;
    }
    iVar4 = *(int *)(param_1 + 0x54) + (int)*param_2;
LAB_08025c6a:
    iVar4 = iVar4 + ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
  }
  else {
    if (param_3 == 0) {
      iVar4 = *(int *)(param_1 + 0x54) - (int)*param_2;
      goto LAB_08025c6a;
    }
    iVar4 = *(int *)(param_1 + 0x54) - (int)*param_2;
LAB_08025c58:
    iVar4 = iVar4 - ((int)((uint)(ushort)param_2[2] << 0x10) >> 0x11);
  }
  iVar6 = *(int *)(param_1 + 0x58);
  local_38[0] = iVar6 + param_2[1];
  iVar5 = (int)((uint)(ushort)param_2[3] << 0x10) >> 0x11;
  local_38[1] = (iVar6 + param_2[1]) - iVar5;
  local_38[2] = iVar6 + param_2[1] + iVar5;
  if ((*(char *)(param_1 + 0x18c) != '\0') && (uVar9 = 0, 0 < (int)(3 - param_3))) {
    do {
      uVar1 = sub_08028370(param_1,iVar4,local_38[uVar9]);
      if ((((uVar1 & 0x8000) == 0) || (((uVar1 & 0xf) == 0 || (0xe < (uVar1 & 0xf))))) &&
         (uVar1 != 0)) {
        if (*(char *)(param_1 + 0xd) == '\x02') {
          uVar10 = sub_08027F84(param_1,iVar4,local_38[uVar9],local_38 + 3);
        }
        else if (uVar9 == 0) {
          uVar10 = sub_08027F84(param_1,iVar4,local_38[0],local_38 + 3);
        }
        else {
          uVar10 = sub_08027B0C(param_1,iVar4,local_38[uVar9],local_38 + 3);
        }
        uVar10 = uVar10 & 0xffff;
        if (uVar10 != 0) {
          iVar4 = iVar4 + local_38[3];
          local_38[0] = local_38[0] + local_28;
          local_38[1] = local_38[1] + local_28;
          local_38[2] = local_38[2] + local_28;
        }
      }
      uVar9 = uVar9 + 1 & 0xffff;
    } while ((int)uVar9 < (int)(3 - param_3));
  }
  uVar9 = sub_08008FEC(*(undefined4 *)(param_1 + 0x100),local_38[2]);
  uVar8 = uVar9 & 0xffff;
  if ((uVar9 & 0xf) == 1) {
    uVar9 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),local_38[2] + -0x400);
    uVar8 = uVar9 & 0xffff;
    uVar9 = uVar9 & 0xf;
    if ((((uVar9 != 2) && (uVar9 != 4)) && (uVar9 != 9)) && (uVar9 != 0xd)) {
      uVar8 = 1;
    }
  }
  uVar8 = uVar8 & 0xf;
  if (1 < uVar8) {
    if (uVar8 < 8) {
      iVar5 = 3;
      if ((~(uint)(*(byte *)(param_1 + 10) >> 4) & 1) == param_3) {
        iVar5 = 2;
      }
      goto LAB_08025dd8;
    }
    if ((uVar8 < 0xe) && (iVar5 = 2, (~(uint)(*(byte *)(param_1 + 10) >> 4) & 1) != param_3))
    goto LAB_08025dd8;
  }
  iVar5 = 3;
LAB_08025dd8:
  uVar9 = 0;
  local_24 = iVar5 * 0x10000;
  if (iVar5 != 0) {
    do {
      piVar7 = local_38 + uVar9;
      uVar8 = sub_08009AC0(iVar4,*piVar7);
      uVar3 = uVar8 & 0xf;
      if (uVar3 == 1) {
        if (((uVar8 & 0x8000) == 0) && ((uVar8 & 0x400) == 0)) {
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            if (param_3 != 0) goto LAB_08025e8a;
            iVar5 = sub_0800A04C(iVar4,*piVar7);
          }
          else if (param_3 == 0) {
LAB_08025e8a:
            iVar5 = sub_08009ED0(iVar4,*piVar7);
          }
          else {
            iVar5 = sub_0800A04C(iVar4,*piVar7);
          }
LAB_08025e92:
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
          iVar4 = iVar4 + iVar5;
          uVar10 = uVar8 & 0xffff;
        }
      }
      else if ((uVar3 != 0) && (uVar3 < 0xe)) {
        if (uVar3 < 8) {
          if ((iVar4 < *(int *)(param_1 + 0x54)) &&
             (sVar2 = sub_08008FEC(iVar4 + 0x1000,*piVar7), sVar2 == 0)) {
            iVar5 = sub_0800A04C(iVar4,*piVar7);
            goto LAB_08025e92;
          }
        }
        else if ((*(int *)(param_1 + 0x54) < iVar4) &&
                (sVar2 = sub_08008FEC(iVar4 + -0x1000,*piVar7), sVar2 == 0)) goto LAB_08025e8a;
      }
      uVar8 = uVar9 + 1;
      uVar9 = uVar8 & 0xffff;
    } while (uVar8 * 0x10000 < local_24);
  }
  return CONCAT44(in_lr,uVar10);
}

