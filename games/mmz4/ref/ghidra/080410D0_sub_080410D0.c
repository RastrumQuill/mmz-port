// sub_080410D0 at 0x080410D0 (thumb)

undefined4 sub_080410D0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    cVar2 = sub_08041354(iVar6,param_1 + 0x54);
    if (cVar2 == '\0') {
      if (*(int *)(iVar6 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x2c0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffd40;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&DAT_08852154,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0x8041351;
      *(undefined *)(param_1 + 0xbe) = 1;
      bVar1 = *(byte *)(param_1 + 10);
      *(byte *)(param_1 + 10) = bVar1 | 1;
      if ((2 < *(byte *)(iVar6 + 0xc0)) || (2 < *(byte *)(iVar6 + 0xc1))) {
        pcVar4 = (char *)(iVar6 + 0xf8);
        cVar2 = *pcVar4;
        if (cVar2 != '\x02') {
          pcVar4 = (char *)(iVar6 + 0xf9);
          cVar2 = '\x02';
        }
        *pcVar4 = cVar2;
        if (*(byte *)(iVar6 + 0xc0) < 3) {
          *(undefined *)(iVar6 + 0xc1) = 2;
        }
        else {
          *(undefined *)(iVar6 + 0xc0) = 2;
        }
        *(undefined *)(iVar6 + 0xfa) = 2;
        *(undefined *)(iVar6 + 0xc3) = 0;
        sub_08002B10(0x46);
        *(undefined *)(param_1 + 0xd) = 1;
        return in_lr;
      }
      *(byte *)(param_1 + 10) = bVar1 & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar3 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar3 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    if (iVar5 < 0x700) {
      *(int *)(param_1 + 0x60) = iVar5 + 0x40;
    }
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + -0x18;
    cVar2 = sub_0803A9A8(param_1,3);
    if (*(char *)(iVar6 + 0xfa) != '\x02') {
      cVar2 = '\x01';
    }
    if ((cVar2 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
      return in_lr;
    }
    if (cVar2 != -1) {
      sub_080D0894(1,param_1 + 0x54);
      sub_08002B10(0x27);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar3 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return in_lr;
}

