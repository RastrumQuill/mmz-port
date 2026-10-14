// sub_0803C5BC at 0x0803C5BC (thumb)

undefined4 sub_0803C5BC(int param_1)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_088508fc + (uint)*(byte *)(param_1 + 0x10) * 2));
  iVar7 = **(int **)(&DAT_08851ad4 + (uint)*(byte *)(param_1 + 0x10) * 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,iVar7,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  psVar5 = (short *)(&DAT_0885092c + (uint)*(byte *)(param_1 + 0x10) * 2);
  if (*psVar5 != 0) {
    if (*(byte *)(param_1 + 0x10) == 0xd) {
      if (*(char *)(iVar4 + 0x146) == '\0') {
        sub_08002B10(*psVar5);
      }
      else {
        sub_08002B10(0x11);
      }
    }
    else {
      sub_08002B10(*psVar5);
    }
  }
  if (*(char *)(param_1 + 0x10) == '\r') {
    iVar6 = *(int *)(param_1 + 0xb4);
    if (*(char *)(iVar6 + 0x146) == '\0') {
      sub_0804B9E0(iVar6,param_1,0,0);
    }
    else {
      sub_0804ADF0(iVar6,param_1,0);
    }
  }
  cVar2 = *(char *)(param_1 + 0x10);
  if (cVar2 == '\x13') {
    uVar1 = 1;
  }
  else if ((cVar2 == '\x11') || (cVar2 == '\x0f')) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  *(undefined *)(param_1 + 0xc0) = uVar1;
  *(undefined *)(param_1 + 0xc1) = (&DAT_0885095c)[*(byte *)(param_1 + 0x10)];
  cVar2 = sub_08038A84(iVar4);
  if (cVar2 != '\0') {
    *(char *)(param_1 + 0xc1) = *(char *)(param_1 + 0xc1) << 1;
  }
  cVar2 = sub_0803A4F4(iVar4);
  cVar2 = cVar2 + *(char *)(param_1 + 0xc1);
  *(char *)(param_1 + 0xc1) = cVar2;
  if ((*(char *)(param_1 + 0x10) == '\f') && (*(char *)(iVar4 + 0xf5) == '\x04')) {
    *(char *)(param_1 + 0xc1) = cVar2 + '\x03';
  }
  cVar2 = *(char *)(iVar4 + 0xc5);
  if (((cVar2 == '\f') || (cVar2 == '\x10')) && ((&DAT_08851b38)[*(byte *)(param_1 + 0x10)] != '\0')
     ) {
    if (cVar2 == '\f') {
      bVar3 = *(byte *)(iVar7 + 6) | 0x40;
    }
    else {
      bVar3 = *(byte *)(iVar7 + 6) | 4;
    }
  }
  else {
    bVar3 = *(byte *)(iVar7 + 6);
  }
  *(byte *)(param_1 + 0xc2) = bVar3;
  sub_08005794(param_1 + 0x74,iVar7,*(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
               *(undefined *)(param_1 + 0xc2),0xffffffff);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0xc3) = 1;
  *(undefined4 *)(param_1 + 0x98) = 0x803c899;
  sub_0803C774(param_1);
  return in_lr;
}

