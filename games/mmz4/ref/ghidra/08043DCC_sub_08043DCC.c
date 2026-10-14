// sub_08043DCC at 0x08043DCC (thumb)

undefined8 sub_08043DCC(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    uVar5 = 0;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_0804403e;
    cVar2 = sub_08041354(iVar6,param_1 + 0x54);
    if (cVar2 == '\0') {
      if (*(char *)(param_1 + 0x10) == '\0') {
        if (*(int *)(param_1 + 0x54) <= *(int *)(iVar6 + 0x54)) {
          *(undefined4 *)(param_1 + 0x5c) = 0xfffffd80;
          goto LAB_08043e92;
        }
        *(undefined4 *)(param_1 + 0x5c) = 0x280;
LAB_08043e6e:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        if (*(int *)(iVar6 + 0x54) < *(int *)(param_1 + 0x54)) goto LAB_08043e6e;
LAB_08043e92:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&DAT_08852808,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0x80440ad;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_0803AA58(iVar6);
      *(undefined *)(param_1 + 0xd) = 1;
      goto LAB_08043ee2;
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
LAB_08043ee2:
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      sVar3 = sub_080440D8(iVar6 + -0x400,*(undefined4 *)(param_1 + 0x58));
      if (sVar3 != 0) {
        iVar6 = sub_0800834C(*(int *)(param_1 + 0x54) + -0x400,*(undefined4 *)(param_1 + 0x58));
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
        *(uint *)(param_1 + 0x5c) = bVar1 & 0x10;
      }
    }
    else {
      sVar3 = sub_080440D8(iVar6 + 0x400,*(undefined4 *)(param_1 + 0x58));
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
    sVar3 = sub_080440D8(*(undefined4 *)(param_1 + 0x54),iVar6 + 0x400);
    if (sVar3 != 0) {
      iVar6 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    sVar3 = sub_080440D8(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
    if (sVar3 != 0) {
      iVar6 = sub_08007F8C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (*(byte *)(param_1 + 0x13) < 0x18) {
      if ((*(byte *)(param_1 + 0x13) & 3) < 2) {
        sub_0801CF00(param_1,0x802a);
        sub_0801CFF0(param_1);
      }
      else {
        sub_0801CF00(param_1,0x802b);
        sub_0801CFF0(param_1);
      }
    }
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if ((cVar2 != -1) && (uVar5 = 0x1004, (*(uint *)(param_1 + 0x8c) & 0x1004) == 0))
    goto LAB_0804403e;
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x35);
    sub_08005784(param_1 + 0x74,&DAT_08852838);
    uVar5 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
LAB_0804403e:
  return CONCAT44(uVar5,in_lr);
}

