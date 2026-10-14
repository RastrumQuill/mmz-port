// sub_0804B4A0 at 0x0804B4A0 (thumb)

undefined4 sub_0804B4A0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801D3D0(param_1,0xf);
  sub_0801CF00(param_1,0x7f00);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088540d4,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x804b991;
  iVar5 = *(int *)(param_1 + 0x54);
  if (*(int *)(iVar6 + 0x54) < iVar5) {
    iVar5 = sub_0800816C(iVar5,*(undefined4 *)(param_1 + 0x58));
    if (iVar5 < 1) goto LAB_0804b55a;
  }
  else {
    iVar5 = sub_0800834C(iVar5,*(undefined4 *)(param_1 + 0x58));
    if (-1 < iVar5) goto LAB_0804b55a;
  }
  iVar5 = 0x10000;
LAB_0804b55a:
  iVar1 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar6 = sub_08007F8C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (0 < iVar1) {
    iVar1 = 0x10000;
  }
  if (iVar6 < 0) {
    iVar6 = 0x10000;
  }
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = -iVar1;
  }
  iVar4 = iVar6;
  if (iVar6 < 0) {
    iVar4 = -iVar6;
  }
  if (iVar2 < iVar4) {
    iVar6 = iVar1;
  }
  if ((iVar5 == 0x10000) && (iVar6 == 0x10000)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    iVar1 = iVar5;
    if (iVar5 < 0) {
      iVar1 = -iVar5;
    }
    iVar2 = iVar6;
    if (iVar6 < 0) {
      iVar2 = -iVar6;
    }
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
      if (*(char *)(param_1 + 0x11) == '\0') {
        uVar3 = 0xfffffc00;
      }
      else {
        uVar3 = 0x400;
      }
      *(undefined4 *)(param_1 + 0x60) = uVar3;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if (iVar5 < 0) {
        uVar3 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x54) = uVar3;
        uVar3 = 1;
      }
      else {
        uVar3 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x54) = uVar3;
        uVar3 = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 100) = uVar3;
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      if (*(char *)(param_1 + 0x11) == '\0') {
        uVar3 = 0xfffffc00;
      }
      else {
        uVar3 = 0x400;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (iVar6 < 0) {
        uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar3;
        uVar3 = 1;
      }
      else {
        uVar3 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar3;
        uVar3 = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x68) = uVar3;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    *(undefined *)(param_1 + 0x12) = 0x5a;
    sub_0804B68C(param_1);
  }
  return in_lr;
}

