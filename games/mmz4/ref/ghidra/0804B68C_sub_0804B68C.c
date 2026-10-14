// sub_0804B68C at 0x0804B68C (thumb)

undefined4 sub_0804B68C(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (((((DAT_02000c80 & 0x7f) != 2) &&
       (sVar2 = sub_0804B9BC(*(int *)(param_1 + 0x54) + 0x400,*(int *)(param_1 + 0x58) + 0x400),
       sVar2 == 0)) &&
      (sVar2 = sub_0804B9BC(*(int *)(param_1 + 0x54) + 0x400,*(int *)(param_1 + 0x58) + -0x400),
      sVar2 == 0)) &&
     ((sVar2 = sub_0804B9BC(*(int *)(param_1 + 0x54) + -0x400,*(int *)(param_1 + 0x58) + 0x400),
      sVar2 == 0 &&
      (sVar2 = sub_0804B9BC(*(int *)(param_1 + 0x54) + -0x400,*(int *)(param_1 + 0x58) + -0x400),
      sVar2 == 0)))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    goto LAB_0804b938;
  }
  sub_0801CFF0(param_1);
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 100) < 1) {
      iVar3 = sub_08008988(*(undefined4 *)(param_1 + 0x54));
      iVar5 = *(int *)(param_1 + 0x54);
      if (iVar5 - iVar3 < 0) {
        iVar3 = sub_08008988(iVar5,*(undefined4 *)(param_1 + 0x58));
        iVar3 = iVar3 - *(int *)(param_1 + 0x54);
      }
      else {
        iVar3 = sub_08008988(iVar5,*(undefined4 *)(param_1 + 0x58));
        iVar3 = *(int *)(param_1 + 0x54) - iVar3;
      }
      if (iVar3 < 0x400) {
        uVar4 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        goto LAB_0804b7be;
      }
    }
    else {
      iVar3 = sub_08008868(*(undefined4 *)(param_1 + 0x54));
      iVar5 = *(int *)(param_1 + 0x54);
      if (iVar5 - iVar3 < 0) {
        iVar3 = sub_08008868(iVar5,*(undefined4 *)(param_1 + 0x58));
        iVar3 = iVar3 - *(int *)(param_1 + 0x54);
      }
      else {
        iVar3 = sub_08008868(iVar5,*(undefined4 *)(param_1 + 0x58));
        iVar3 = *(int *)(param_1 + 0x54) - iVar3;
      }
      if (iVar3 < 0x400) {
        uVar4 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
LAB_0804b7be:
        *(undefined4 *)(param_1 + 0x54) = uVar4;
      }
    }
    sVar2 = sub_0804B9BC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      sVar2 = sub_0804B9BC(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 0x100,
                           *(undefined4 *)(param_1 + 0x58));
      if (sVar2 != 0) goto LAB_0804b902;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 10;
      if (*(int *)(param_1 + 0x60) < 1) goto LAB_0804b810;
      uVar4 = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * -0x400;
      if (*(int *)(param_1 + 0x60) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
LAB_0804b810:
        uVar4 = 1;
      }
    }
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if (*(int *)(param_1 + 0x68) < 1) {
      iVar3 = sub_08008748(iVar3,*(undefined4 *)(param_1 + 0x58));
      if (*(int *)(param_1 + 0x58) - iVar3 < 0) {
        iVar3 = sub_08008748(*(undefined4 *)(param_1 + 0x54));
        iVar3 = iVar3 - *(int *)(param_1 + 0x58);
      }
      else {
        iVar3 = sub_08008748(*(undefined4 *)(param_1 + 0x54));
        iVar3 = *(int *)(param_1 + 0x58) - iVar3;
      }
      if (iVar3 < 0x400) {
        uVar4 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        goto LAB_0804b8ac;
      }
    }
    else {
      iVar3 = sub_08008534(iVar3,*(undefined4 *)(param_1 + 0x58));
      if (*(int *)(param_1 + 0x58) - iVar3 < 0) {
        iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54));
        iVar3 = iVar3 - *(int *)(param_1 + 0x58);
      }
      else {
        iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54));
        iVar3 = *(int *)(param_1 + 0x58) - iVar3;
      }
      if (iVar3 < 0x400) {
        uVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
LAB_0804b8ac:
        *(undefined4 *)(param_1 + 0x58) = uVar4;
      }
    }
    sVar2 = sub_0804B9BC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      sVar2 = sub_0804B9BC(*(undefined4 *)(param_1 + 0x54),
                           *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68) * 0x100);
      if (sVar2 != 0) goto LAB_0804b902;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) << 10;
      if (*(int *)(param_1 + 0x5c) < 1) goto LAB_0804b8fa;
      uVar4 = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) * -0x400;
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
LAB_0804b8fa:
        uVar4 = 1;
      }
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
LAB_0804b902:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 != -1) && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
LAB_0804b938:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

