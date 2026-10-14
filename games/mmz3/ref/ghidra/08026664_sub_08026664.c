// sub_08026664 at 0x08026664 (thumb)

undefined8 sub_08026664(int param_1,short *param_2,char param_3)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  uint local_24 [3];
  
  iVar6 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
  iVar9 = iVar6 + 1;
  if (param_3 == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_24[2] = *(int *)(param_1 + 0x54);
      iVar7 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
      local_24[0] = (local_24[2] + (int)*param_2) - iVar7;
      iVar4 = local_24[2] + (int)*param_2;
    }
    else {
      local_24[2] = *(int *)(param_1 + 0x54);
      iVar7 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
      local_24[0] = (local_24[2] - (int)*param_2) - iVar7;
      iVar4 = local_24[2] - (int)*param_2;
    }
    local_24[1] = iVar4 + iVar7;
    if (*(char *)(param_1 + 0x18c) != '\0') {
      uVar3 = 0;
      do {
        uVar8 = sub_08028370(param_1,local_24[uVar3],iVar9);
        uVar8 = uVar8 & 0xffff;
        if (uVar8 != 0) goto LAB_0802686c;
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 3);
    }
    uVar3 = 0;
    do {
      uVar5 = sub_08009AC0(local_24[uVar3],iVar6);
      uVar8 = uVar5 & 0xffff;
      if ((uVar5 & 0x400) != 0) goto LAB_0802686c;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 2);
    iVar4 = sub_08009BE4(local_24[2],iVar9);
    if (iVar4 < 0) {
      uVar8 = sub_08009AC0(local_24[2],iVar9);
      uVar8 = uVar8 & 0xffff;
      if (uVar8 != 0x800f) goto LAB_0802686c;
    }
    else {
      uVar1 = sub_08008FEC(local_24[0],iVar9);
      uVar8 = (uint)uVar1;
      if (uVar8 != 0) {
        uVar1 = uVar1 & 0xf;
        if (uVar1 == 1) goto LAB_0802686c;
        sVar2 = sub_08009AC0(local_24[2],iVar9);
        if (sVar2 == 0) {
          if ((ushort)(uVar1 - 2) < 6) {
            sVar2 = sub_08008FEC(local_24[0] + 0x1000,iVar9);
            if ((sVar2 == 0) &&
               (iVar4 = sub_08009BE4((local_24[0] & 0xfffff000) + 0xfff,iVar9), iVar4 < 1))
            goto LAB_0802686c;
          }
          else if (((ushort)(uVar1 - 8) < 6) &&
                  (iVar4 = sub_08009BE4((local_24[0] & 0xfffff000) + 0xfff,iVar6 + 0x501), iVar4 < 0
                  )) goto LAB_0802686c;
        }
      }
      uVar1 = sub_08008FEC(local_24[1],iVar9);
      uVar8 = (uint)uVar1;
      if (uVar8 != 0) {
        uVar1 = uVar1 & 0xf;
        if (uVar1 == 1) goto LAB_0802686c;
        sVar2 = sub_08009AC0(local_24[2],iVar9);
        if (sVar2 == 0) {
          if ((ushort)(uVar1 - 8) < 6) {
            sVar2 = sub_08008FEC(local_24[1] - 0x1000,iVar9);
            if ((sVar2 == 0) && (iVar6 = sub_08009BE4(local_24[1] & 0xfffff000,iVar9), iVar6 < 1))
            goto LAB_0802686c;
          }
          else if (((ushort)(uVar1 - 2) < 6) &&
                  (iVar6 = sub_08009BE4(local_24[1] & 0xfffff000,iVar6 + 0x501), iVar6 < 0))
          goto LAB_0802686c;
        }
      }
    }
  }
  else {
    uVar3 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),iVar9);
    uVar8 = uVar3 & 0xffff;
    if ((uVar3 & 0x8000) == 0) goto LAB_0802686c;
  }
  uVar8 = 0;
LAB_0802686c:
  return CONCAT44(in_lr,uVar8);
}

