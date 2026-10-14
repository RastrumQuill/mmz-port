// sub_080478E4 at 0x080478E4 (thumb)

undefined4 sub_080478E4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xc);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    *(byte *)(param_1 + 0x44) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffe00;
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffff0;
      uVar3 = 0xfffffc00;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0x200;
      *(undefined4 *)(param_1 + 0x5c) = 0x10;
      uVar3 = 0x400;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082aea34);
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar4 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
    iVar5 = iVar4;
    if (iVar4 < 0) {
      iVar5 = -iVar4;
    }
    if (iVar5 < 0x400) {
      *(int *)(param_1 + 0x54) = iVar4 + *(int *)(param_1 + 0x5c);
    }
    cVar2 = sub_080079CC(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x60) * 2,
                         *(undefined4 *)(param_1 + 0x50));
    if (cVar2 != '\0') {
      sub_0801412C(4,param_1 + 0x4c);
      uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar6 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x60) * 2,
                   *(undefined4 *)(param_1 + 0x50),4,
                   (uVar7 * 2 >> 0x11 & 1) << 4 | uVar6 * 2 >> 0x11 & 1);
      uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar6 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x60) * 2,
                   *(undefined4 *)(param_1 + 0x50),4,
                   (uVar7 * 2 >> 0x11 & 1) << 4 | uVar6 * 2 >> 0x11 & 1);
      uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar6 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x60) * 2,
                   *(undefined4 *)(param_1 + 0x50),4,
                   (uVar7 * 2 >> 0x11 & 1) << 4 | uVar6 * 2 >> 0x11 & 1);
      uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar6 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x60) * 2,
                   *(undefined4 *)(param_1 + 0x50),4,
                   (uVar7 * 2 >> 0x11 & 1) << 4 | uVar6 * 2 >> 0x11 & 1);
      uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar6 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x60) * 2,
                   *(undefined4 *)(param_1 + 0x50),4,
                   (uVar7 * 2 >> 0x11 & 1) << 4 | uVar6 * 2 >> 0x11 & 1);
      uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar6 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x60) * 2,
                   *(undefined4 *)(param_1 + 0x50),4,
                   (uVar7 * 2 >> 0x11 & 1) << 4 | uVar6 * 2 >> 0x11 & 1);
      uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar6 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x60) * 2,
                   *(undefined4 *)(param_1 + 0x50),4,
                   (uVar7 * 2 >> 0x11 & 1) << 4 | uVar6 * 2 >> 0x11 & 1);
      uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar6 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      sub_0809B340(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x60) * 2,
                   *(undefined4 *)(param_1 + 0x50),4,
                   (uVar7 * 2 >> 0x11 & 1) << 4 | uVar6 * 2 >> 0x11 & 1);
      sub_08001EAC(0x83);
      *(undefined *)(param_1 + 0x12) = 2;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x54) = 0xfffffc00;
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = 0x400;
      }
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

