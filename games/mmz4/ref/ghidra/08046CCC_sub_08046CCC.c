// sub_08046CCC at 0x08046CCC (thumb)

undefined4 sub_08046CCC(int param_1)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    cVar1 = sub_08041354(iVar4,param_1 + 0x54);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(iVar4 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x2c0;
        goto LAB_08046d72;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd40;
LAB_08046d96:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if (*(int *)(param_1 + 0x54) <= *(int *)(iVar4 + 0x54)) goto LAB_08046d96;
LAB_08046d72:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_088537e4,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8046fa1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0803AA58(iVar4);
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_0801CF00(param_1,0x8212);
      sub_0801CFF0(param_1);
      sub_08002B10(0xa9);
      *(undefined *)(param_1 + 0xbd) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if ((byte)(*(char *)(param_1 + 0x71) - 1U) < 2) {
      sub_08005784(param_1 + 0x74,&DAT_08853814);
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_08853874);
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_08046F44(param_1);
      return in_lr;
    }
LAB_08046f34:
    sub_0801CFF0(param_1);
    return in_lr;
  }
  pcVar3 = (char *)(param_1 + 0x24);
  *pcVar3 = *pcVar3 + '\a';
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  sVar2 = sub_08046FCC(iVar4,*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar2 = sub_08046FCC(*(undefined4 *)(param_1 + 0x54));
    if (sVar2 == 0) {
      if ((*(uint *)(param_1 + 0x8c) & 0x1004) == 0) goto LAB_08046f34;
    }
    else {
      if (*(int *)(param_1 + 0x60) < 1) {
        iVar4 = sub_08007F8C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
        *pcVar3 = -0x80;
        goto LAB_08046ea2;
      }
      iVar4 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    }
    *pcVar3 = '\0';
  }
  else {
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar4 = sub_0800834C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      iVar4 = sub_0800816C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    *pcVar3 = '@';
  }
LAB_08046ea2:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

