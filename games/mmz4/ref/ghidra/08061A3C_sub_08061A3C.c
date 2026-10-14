// sub_08061A3C at 0x08061A3C (thumb)

undefined4 sub_08061A3C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined uVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = sub_080DA918(param_1 + 0x54,0,0xc1);
    *(int *)(param_1 + 0xc0) = iVar3;
    if (iVar3 == 0) {
      return in_lr;
    }
    if (DAT_0202e910 == 0xb) {
      *(undefined *)(iVar3 + 0x78) = 0x39;
      iVar3 = *(int *)(param_1 + 0xc0);
      uVar6 = 6;
    }
    else {
      *(undefined *)(iVar3 + 0x78) = 0x35;
      iVar3 = *(int *)(param_1 + 0xc0);
      uVar6 = 10;
    }
    *(undefined *)(iVar3 + 0x79) = uVar6;
    sub_080C6050(param_1,0);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x10;
    sub_08002B10(0x5d);
    *(undefined2 *)(param_1 + 0xca) = 0x5d;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801FE64(8,param_1 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_0801CF00(param_1,0xa520);
      sub_08099C0C(param_1,4,0);
      sub_08002B10(0x5b);
      *(undefined *)(param_1 + 0x12) = 0xa4;
LAB_08061b56:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x68) + 0x100;
      *(int *)(param_1 + 0x68) = iVar3;
      if (0x1000 < iVar3) {
        *(undefined4 *)(param_1 + 0x68) = 0x1000;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == -1) {
        sub_0801CF00(param_1,0xa51f);
        goto LAB_08061b56;
      }
    }
  }
  else if (bVar1 == 2) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) goto LAB_08061b56;
  }
  else if ((bVar1 == 3) &&
          (iVar3 = *(int *)(param_1 + 0x68) + -0x300, *(int *)(param_1 + 0x68) = iVar3,
          iVar3 < 0x400)) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    sub_08002B5C(0x5d);
    *(undefined2 *)(param_1 + 0xca) = 0;
    *(undefined *)(param_1 + 0xd) = 0x23;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  sub_0801CFF0(param_1);
  uVar4 = *(int *)(param_1 + 100) + 1;
  *(uint *)(param_1 + 100) = uVar4;
  if ((uVar4 & 3) < 2) {
    iVar3 = *(int *)(param_1 + 0x58);
    iVar7 = -0x100;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x58);
    iVar7 = 0x100;
  }
  *(int *)(param_1 + 0x58) = iVar3 + iVar7;
  iVar3 = *(int *)(param_1 + 0xc0);
  if (iVar3 == 0) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar7 = *(int *)(param_1 + 0x68) / 2;
  }
  else {
    if (*(char *)(param_1 + 0x13) != '\x01') {
      iVar7 = *(int *)(param_1 + 0x68);
      *(undefined *)(iVar3 + 0x74) = 0;
      *(undefined *)(iVar3 + 0x75) = 0x19;
      goto LAB_08061c14;
    }
    iVar7 = FUN_081288bc(*(int *)(param_1 + 0x68) << 3,10);
  }
  *(undefined *)(iVar3 + 0x74) = 0x1f;
  *(undefined *)(iVar3 + 0x75) = 0x1f;
LAB_08061c14:
  *(undefined *)(iVar3 + 0x76) = 0x1f;
  *(int *)(iVar3 + 0x58) = *(int *)(param_1 + 0xb8) + 0x400;
  *(int *)(iVar3 + 0x68) = *(int *)(param_1 + 0xb8) + 0x400;
  *(int *)(iVar3 + 0x60) = *(int *)(param_1 + 0x58) + 0x1a00;
  *(int *)(iVar3 + 0x80) = *(int *)(param_1 + 0x58) + 0x1a00;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(iVar3 + 0x54) = *(int *)(param_1 + 0x54) + iVar7 + 0x700;
    *(int *)(iVar3 + 100) = *(int *)(param_1 + 0x54) - (iVar7 + -0x600);
    *(int *)(iVar3 + 0x5c) = *(int *)(param_1 + 0x54) - (iVar7 + -0x600);
    *(int *)(iVar3 + 0x7c) = *(int *)(param_1 + 0x54) + iVar7 + 0x700;
    iVar7 = *(int *)(param_1 + 0x54) + 0x600;
  }
  else {
    *(int *)(iVar3 + 0x54) = *(int *)(param_1 + 0x54) + iVar7 + -0x600;
    *(int *)(iVar3 + 100) = *(int *)(param_1 + 0x54) - (iVar7 + 0x700);
    *(int *)(iVar3 + 0x5c) = *(int *)(param_1 + 0x54) - (iVar7 + 0x700);
    *(int *)(iVar3 + 0x7c) = *(int *)(param_1 + 0x54) + iVar7 + -0x600;
    iVar7 = *(int *)(param_1 + 0x54) + -0x600;
  }
  cVar2 = sub_08128954(*(byte *)(param_1 + 0x13) + 1,3);
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    uVar8 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    uVar4 = (uVar8 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    iVar5 = sub_08128A9C(uVar4 * 2 >> 0x11,3);
    sub_080C609C(iVar7 + (uVar8 * 0x10 >> 0x14),*(int *)(iVar3 + 0x58) + (1 - iVar5) * 0x100,0);
  }
  else if (cVar2 == '\x01') {
    uVar8 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    uVar4 = (uVar8 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    iVar5 = sub_08128A9C(uVar4 * 2 >> 0x11,3);
    sub_080C609C(iVar7 - (uVar8 * 0x10 >> 0x14),*(int *)(iVar3 + 0x68) + (1 - iVar5) * 0x100,1);
  }
  return in_lr;
}

