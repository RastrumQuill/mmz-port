// sub_0804CEE4 at 0x0804CEE4 (thumb)

undefined4 sub_0804CEE4(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  sub_0801CFF0();
  if (*(char *)(iVar5 + 0xfa) == '\x02') {
    sub_080D0894(2,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar3 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sVar2 = sub_0804D098(param_1);
    if (sVar2 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar2 = sub_0804D098(param_1);
    if (sVar2 == 0) {
      iVar5 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar5;
      if (0x700 < iVar5) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60) >> 1;
    }
    uVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
    if (uVar4 < 0x4001) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if ((cVar1 != -1) && ((*(uint *)(param_1 + 0x8c) & 0x1004) == 0)) {
        return in_lr;
      }
      if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
        sub_08002B10(0x2b);
      }
      sub_080D0894(2,param_1 + 0x54);
      *(undefined4 *)(param_1 + 0xc) = 2;
      uVar3 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
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
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return in_lr;
}

