// sub_080D8C84 at 0x080D8C84 (thumb)

undefined4 sub_080D8C84(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) * 0xe1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x13) != '\0') {
    iVar2 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  sub_0801CFF0(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar2 < *(int *)(param_1 + 0x58)) {
      *(int *)(param_1 + 0x58) = iVar2;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58) + -0x200;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      iVar2 = *(int *)(param_1 + 0x58) + 0x200;
    }
    sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar2);
    if (sVar1 != 0) {
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_080D0894(2,param_1 + 0x54);
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 3;
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080D8B04(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,0x200c,uVar3,0);
    sub_080D8B04(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,0x200d,uVar3,0);
    sub_080D8B04(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,0x200e,uVar3,0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

