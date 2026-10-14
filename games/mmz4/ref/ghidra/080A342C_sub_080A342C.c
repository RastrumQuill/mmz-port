// sub_080A342C at 0x080A342C (thumb)

undefined4 sub_080A342C(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0x11) * 0x20000 + 0x87020000 >> 0x10);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(iVar7 + 0xb4 + (uint)*(byte *)(param_1 + 0x11) * 4) = 0;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 == 1) {
    iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar7;
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if ((bVar2 & 7) == 0) {
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_2c = ((uVar5 * 2 >> 0x11 & 7) - 4) * 0x100 + iVar7;
      uVar5 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      local_28 = ((uVar5 * 2 >> 0x11 & 7) - 4) * 0x100 + iVar6;
      sub_080D0894(1);
    }
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 0;
    goto LAB_080a3626;
  }
  if (1 < bVar2) {
    if (bVar2 != 2) {
      return in_lr;
    }
    if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
      uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x54) + (8 - (uVar5 * 2 >> 0x11 & 0xf)) * 0x100;
      uVar5 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar5 & 0x7fffffff;
      local_20 = *(int *)(param_1 + 0x58) + (8 - (uVar5 * 2 >> 0x11 & 0xf)) * 0x100;
      sub_080E16B4(&local_24,((uint)*(byte *)(param_1 + 0x12) << 0x1c) >> 0x18,0x100);
      sub_080E17CC(&local_24,((uint)*(byte *)(param_1 + 0x12) << 0x1c) >> 0x18,0x100,0x40);
      sub_08002B10(0x35);
    }
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if (bVar2 < 0x11) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    return in_lr;
  }
  if (bVar2 != 0) {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_34 = *(int *)(param_1 + 0x54) + (8 - (uVar5 * 2 >> 0x11 & 0xf)) * 0x100;
    uVar5 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
    local_30 = *(int *)(param_1 + 0x58) + (8 - (uVar5 * 2 >> 0x11 & 0xf)) * 0x100;
    uVar5 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar5 & 0x7fffffff;
    sub_080E16B4(&local_34,(uVar5 * 2 >> 0x11 & 0x3f) + (uint)*(byte *)(param_1 + 0x13) & 0xff,0x100
                );
    sub_08002B10(0x35);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '@';
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != -1) {
    return in_lr;
  }
  bVar2 = *(byte *)(param_1 + 0x11);
  if (bVar2 == 1) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar4 = 0xfffffc40;
LAB_080a3576:
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
LAB_080a3578:
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else if (bVar2 < 2) {
    if (bVar2 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 0x20;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    }
  }
  else {
    if (bVar2 == 2) {
      *(undefined4 *)(param_1 + 0x68) = 0x20;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      goto LAB_080a3578;
    }
    if (bVar2 == 3) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      uVar4 = 0x3c0;
      goto LAB_080a3576;
    }
  }
  *(undefined *)(param_1 + 0x12) = 0;
LAB_080a3626:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

