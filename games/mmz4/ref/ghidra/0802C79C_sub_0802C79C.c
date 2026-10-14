// sub_0802C79C at 0x0802C79C (thumb)

undefined8 sub_0802C79C(int param_1,short *param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x278) != '\0') {
LAB_0802ca3c:
    uVar5 = 0;
    goto LAB_0802ca3e;
  }
  uVar8 = 0x881f;
  if (*(char *)(param_1 + 0x94) != '\0') {
    uVar8 = 0x880f;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar6 = *(int *)(param_1 + 0x54) + (int)*param_2;
    iVar4 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    iVar7 = (iVar6 - iVar4) + -0x800;
    iVar6 = iVar6 + iVar4;
    iVar4 = 0x800;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54) - (int)*param_2;
    iVar4 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    iVar7 = iVar6 + iVar4 + 0x800;
    iVar6 = iVar6 - iVar4;
    iVar4 = -0x800;
  }
  iVar6 = iVar6 + iVar4;
  iVar4 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11) + -0x200;
  uVar5 = sub_0802E544(param_1,iVar7,iVar4);
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 0) goto LAB_0802ca3e;
  uVar5 = sub_08007020(iVar7,iVar4);
  cVar2 = sub_0802F06C(uVar8 & uVar5,*(int *)(param_1 + 0x54) < iVar7);
  if (cVar2 != '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar3 = sub_08007020(iVar7 + 0x1000,iVar4);
      if (sVar3 != 0) goto LAB_0802c8a6;
      goto LAB_0802c8f8;
    }
    sVar3 = sub_08007020(iVar7 + -0x1000,iVar4);
    if (sVar3 != 0) goto LAB_0802c8a6;
    goto LAB_0802c882;
  }
LAB_0802c8a6:
  uVar5 = sub_0802E544(param_1,iVar6,iVar4);
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 0) goto LAB_0802ca3e;
  uVar5 = sub_08007020(iVar6,iVar4);
  cVar2 = sub_0802F06C(uVar8 & uVar5,*(int *)(param_1 + 0x54) < iVar6);
  if (cVar2 != '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar3 = sub_08007020(iVar6 + -0x1000,iVar4);
      if (sVar3 == 0) goto LAB_0802c882;
    }
    else {
      sVar3 = sub_08007020(iVar6 + 0x1000,iVar4);
      if (sVar3 == 0) goto LAB_0802c8f8;
    }
  }
  iVar4 = *(int *)(param_1 + 0x58) + (int)param_2[1];
  uVar5 = sub_0802E544(param_1,iVar7,iVar4);
  uVar5 = uVar5 & 0xff;
  if (uVar5 != 0) goto LAB_0802ca3e;
  uVar5 = sub_08007020(iVar7,iVar4);
  cVar2 = sub_0802F06C(uVar8 & uVar5,*(int *)(param_1 + 0x54) < iVar7);
  if (cVar2 == '\0') {
    uVar5 = sub_0802E544(param_1,iVar6,iVar4);
    uVar5 = uVar5 & 0xff;
    if (uVar5 != 0) goto LAB_0802ca3e;
    uVar5 = sub_08007020(iVar6,iVar4);
    cVar2 = sub_0802F06C(uVar8 & uVar5,*(int *)(param_1 + 0x54) < iVar6);
    if (cVar2 == '\0') {
      iVar4 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
              ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
      uVar5 = sub_0802E544(param_1,iVar7,iVar4 + 0x200);
      uVar5 = uVar5 & 0xff;
      if (uVar5 != 0) goto LAB_0802ca3e;
      uVar5 = sub_08007020(iVar7,iVar4);
      cVar2 = sub_0802F06C(uVar8 & uVar5,*(int *)(param_1 + 0x54) < iVar7);
      if (cVar2 != '\0') {
        bVar1 = *(byte *)(param_1 + 10);
        goto joined_r0x0802c9f4;
      }
      uVar5 = sub_0802E544(param_1,iVar6,iVar4 + 0x200);
      uVar5 = uVar5 & 0xff;
      if (uVar5 != 0) goto LAB_0802ca3e;
      uVar5 = sub_08007020(iVar6,iVar4);
      cVar2 = sub_0802F06C(uVar8 & uVar5,*(int *)(param_1 + 0x54) < iVar6);
      if (cVar2 == '\0') goto LAB_0802ca3c;
      bVar1 = *(byte *)(param_1 + 10);
    }
    else {
      bVar1 = *(byte *)(param_1 + 10);
    }
    if ((bVar1 & 0x10) != 0) goto LAB_0802c8f8;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
joined_r0x0802c9f4:
    if ((bVar1 & 0x10) == 0) {
LAB_0802c8f8:
      uVar5 = 1;
      goto LAB_0802ca3e;
    }
  }
LAB_0802c882:
  uVar5 = 2;
LAB_0802ca3e:
  return CONCAT44(in_lr,uVar5);
}

