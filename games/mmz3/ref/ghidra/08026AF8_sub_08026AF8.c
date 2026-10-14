// sub_08026AF8 at 0x08026AF8 (thumb)

undefined8 sub_08026AF8(int param_1,short *param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x230) != '\0') {
LAB_08026d28:
    uVar4 = 0;
    goto LAB_08026d2a;
  }
  uVar7 = 0x881f;
  if (*(char *)(param_1 + 0x94) != '\0') {
    uVar7 = 0x880f;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar5 = *(int *)(param_1 + 0x54) + (int)*param_2;
    iVar3 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    iVar6 = (iVar5 - iVar3) + -0x800;
    iVar5 = iVar5 + iVar3;
    iVar3 = 0x800;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54) - (int)*param_2;
    iVar3 = (int)((uint)(ushort)param_2[2] << 0x10) >> 0x11;
    iVar6 = iVar5 + iVar3 + 0x800;
    iVar5 = iVar5 - iVar3;
    iVar3 = -0x800;
  }
  iVar5 = iVar5 + iVar3;
  iVar3 = *(int *)(param_1 + 0x58) + (int)param_2[1] +
          ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11) + -0x200;
  uVar4 = sub_080286E4(param_1,iVar6,iVar3);
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 0) goto LAB_08026d2a;
  uVar4 = sub_08008FEC(iVar6,iVar3);
  if ((uVar7 & uVar4) == 1) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar2 = sub_08008FEC(iVar6 + 0x1000,iVar3);
      if (sVar2 != 0) goto LAB_08026bee;
      goto LAB_08026c2e;
    }
    sVar2 = sub_08008FEC(iVar6 + -0x1000,iVar3);
    if (sVar2 != 0) goto LAB_08026bee;
    goto LAB_08026bcc;
  }
LAB_08026bee:
  uVar4 = sub_080286E4(param_1,iVar5,iVar3);
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 0) goto LAB_08026d2a;
  uVar4 = sub_08008FEC(iVar5,iVar3);
  if ((uVar7 & uVar4) == 1) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar2 = sub_08008FEC(iVar5 + -0x1000,iVar3);
      if (sVar2 == 0) goto LAB_08026bcc;
    }
    else {
      sVar2 = sub_08008FEC(iVar5 + 0x1000,iVar3);
      if (sVar2 == 0) goto LAB_08026c2e;
    }
  }
  iVar3 = *(int *)(param_1 + 0x58) + (int)param_2[1];
  uVar4 = sub_080286E4(param_1,iVar6,iVar3);
  uVar4 = uVar4 & 0xff;
  if (uVar4 != 0) goto LAB_08026d2a;
  uVar4 = sub_08008FEC(iVar6,iVar3);
  if ((uVar7 & uVar4) == 1) {
    bVar1 = *(byte *)(param_1 + 10);
joined_r0x08026cf4:
    if ((bVar1 & 0x10) == 0) {
LAB_08026c2e:
      uVar4 = 1;
      goto LAB_08026d2a;
    }
  }
  else {
    uVar4 = sub_080286E4(param_1,iVar5,iVar3);
    uVar4 = uVar4 & 0xff;
    if (uVar4 != 0) goto LAB_08026d2a;
    uVar4 = sub_08008FEC(iVar5,iVar3);
    if ((uVar7 & uVar4) == 1) {
      bVar1 = *(byte *)(param_1 + 10);
    }
    else {
      iVar3 = (*(int *)(param_1 + 0x58) + (int)param_2[1]) -
              ((int)((uint)(ushort)param_2[3] << 0x10) >> 0x11);
      uVar4 = sub_080286E4(param_1,iVar6,iVar3 + 0x200);
      uVar4 = uVar4 & 0xff;
      if (uVar4 != 0) goto LAB_08026d2a;
      uVar4 = sub_08008FEC(iVar6,iVar3);
      if ((uVar7 & uVar4) == 1) {
        bVar1 = *(byte *)(param_1 + 10);
        goto joined_r0x08026cf4;
      }
      uVar4 = sub_080286E4(param_1,iVar5,iVar3 + 0x200);
      uVar4 = uVar4 & 0xff;
      if (uVar4 != 0) goto LAB_08026d2a;
      uVar4 = sub_08008FEC(iVar5,iVar3);
      if ((uVar7 & uVar4) != 1) goto LAB_08026d28;
      bVar1 = *(byte *)(param_1 + 10);
    }
    if ((bVar1 & 0x10) != 0) goto LAB_08026c2e;
  }
LAB_08026bcc:
  uVar4 = 2;
LAB_08026d2a:
  return CONCAT44(in_lr,uVar4);
}

