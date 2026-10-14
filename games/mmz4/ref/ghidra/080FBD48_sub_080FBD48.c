// sub_080FBD48 at 0x080FBD48 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080FBD48(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x9800);
  sub_0801CFF0(param_1);
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar4 = *(byte *)(param_1 + 0x10) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08867904,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80fc19d;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0886791c;
  *(undefined2 *)(param_1 + 0x26) = 1;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1000;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1000;
    }
  }
  else {
    uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x40) = param_1 + 100;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080FBCE0(param_1,*(undefined *)(param_1 + 0x10),1);
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = *(int *)(param_1 + 0x54);
    }
    else {
      if (DAT_0202dae6 < 0x1000) goto LAB_080fbf00;
      iVar3 = *(int *)(param_1 + 0x54) + 0x1000;
    }
    iVar3 = iVar3 - (uint)_DAT_0202dae4;
  }
  else if (*(char *)(param_1 + 0x11) == '\0') {
    iVar3 = *(int *)(param_1 + 0x54) + (uint)DAT_0202dae6;
  }
  else {
    if (DAT_0202dae6 < 0x1000) goto LAB_080fbf00;
    iVar3 = *(int *)(param_1 + 0x54) + -0x1000 + (uint)DAT_0202dae6;
  }
  *(int *)(param_1 + 0x54) = iVar3;
LAB_080fbf00:
  iVar5 = *(int *)(param_1 + 0xb4);
  iVar3 = iVar5 - *(int *)(param_1 + 0x54);
  if (iVar3 < 0) {
    iVar3 = *(int *)(param_1 + 0x54) - iVar5;
  }
  iVar3 = FUN_081288bc(iVar3,0x555);
  if (iVar3 < 3) {
    sub_0801CF00(param_1,iVar3 - 0x6800U & 0xffff);
  }
  else {
    sub_0801CF00(param_1,0x9803);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080FBF84(param_1);
  return in_lr;
}

