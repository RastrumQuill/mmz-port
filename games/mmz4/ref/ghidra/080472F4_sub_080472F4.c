// sub_080472F4 at 0x080472F4 (thumb)

undefined8 sub_080472F4(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    uVar5 = 0;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_08047560;
    cVar2 = sub_08041354(iVar6,param_1 + 0x54);
    if (cVar2 == '\0') {
      if (*(char *)(param_1 + 0x11) == '\0') {
        if (*(int *)(param_1 + 0x54) <= *(int *)(iVar6 + 0x54)) {
          *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
          goto LAB_080473b6;
        }
        *(undefined4 *)(param_1 + 0x5c) = 0x180;
LAB_08047392:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        if (*(int *)(iVar6 + 0x54) < *(int *)(param_1 + 0x54)) goto LAB_08047392;
LAB_080473b6:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&DAT_088538d0,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0x80476ed;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_0803AA58(iVar6);
      *(undefined *)(param_1 + 0xbd) = 1;
      *(undefined *)(param_1 + 0xd) = 1;
      goto LAB_0804740c;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    uVar5 = 3;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  }
  else {
LAB_0804740c:
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      sVar3 = sub_080476C4(iVar6 + -0x400,*(undefined4 *)(param_1 + 0x58));
      if (sVar3 != 0) {
        iVar6 = sub_0800834C(*(int *)(param_1 + 0x54) + -0x400,*(undefined4 *)(param_1 + 0x58));
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
        *(uint *)(param_1 + 0x5c) = bVar1 & 0x10;
      }
    }
    else {
      sVar3 = sub_080476C4(iVar6 + 0x400,*(undefined4 *)(param_1 + 0x58));
      if (sVar3 != 0) {
        iVar6 = sub_0800816C(*(int *)(param_1 + 0x54) + 0x400,*(undefined4 *)(param_1 + 0x58));
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
    }
    iVar6 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar6;
    if (0x700 < iVar6) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    sVar3 = sub_080476C4(*(undefined4 *)(param_1 + 0x54),iVar6 + 0x400);
    if (sVar3 != 0) {
      iVar6 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    sVar3 = sub_080476C4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
    if (sVar3 != 0) {
      iVar6 = sub_08007F8C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x60) == 0)) &&
       (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x7fd1)) {
      sub_0801CF00(param_1,0x8030);
    }
    if ((*(byte *)(param_1 + 0x13) < 0x19) && (*(byte *)(param_1 + 0x13) == 0x18)) {
      sub_0801CF00(param_1,0x8032);
    }
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if ((cVar2 != -1) && (uVar5 = 0x1004, (*(uint *)(param_1 + 0x8c) & 0x1004) == 0))
    goto LAB_08047560;
    sub_08002B10(0x6f);
    uVar5 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
LAB_08047560:
  return CONCAT44(uVar5,in_lr);
}

