// sub_08060628 at 0x08060628 (thumb)

undefined4 sub_08060628(int param_1)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa50c);
    iVar4 = sub_080DA918(param_1 + 0x54,0,0xc1);
    *(int *)(param_1 + 0xc0) = iVar4;
    if (iVar4 == 0) {
      return in_lr;
    }
    if (DAT_0202e910 == 0xb) {
      *(undefined *)(iVar4 + 0x78) = 0x39;
      iVar4 = *(int *)(param_1 + 0xc0);
      uVar3 = 6;
    }
    else {
      *(undefined *)(iVar4 + 0x78) = 0x35;
      iVar4 = *(int *)(param_1 + 0xc0);
      uVar3 = 10;
    }
    *(undefined *)(iVar4 + 0x79) = uVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar6 = *(int *)(param_1 + 0xc0);
      iVar7 = -0xf000;
      *(int *)(iVar6 + 0x54) = *(int *)(param_1 + 0x54) + -0xf000;
      iVar4 = *(int *)(param_1 + 0x54);
      iVar5 = -0x3000;
    }
    else {
      iVar6 = *(int *)(param_1 + 0xc0);
      iVar7 = 0x3000;
      *(int *)(iVar6 + 0x54) = *(int *)(param_1 + 0x54) + 0x3000;
      iVar4 = *(int *)(param_1 + 0x54);
      iVar5 = 0xf000;
    }
    *(int *)(iVar6 + 100) = iVar4 + iVar5;
    *(int *)(iVar6 + 0x5c) = *(int *)(param_1 + 0x54) + iVar5;
    *(int *)(iVar6 + 0x7c) = *(int *)(param_1 + 0x54) + iVar7;
    sub_080C5FB8(param_1,0);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x100;
    sub_08002B10(0x11a);
    sub_08002B10(0x5d);
    *(undefined2 *)(param_1 + 0xca) = 0x5d;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = *(int *)(param_1 + 0xc0);
  sub_0801FE64(4,param_1 + 0x54);
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    iVar5 = *(int *)(param_1 + 0x68) + 0x180;
    *(int *)(param_1 + 0x68) = iVar5;
    if (0xc00 < iVar5) {
      *(undefined4 *)(param_1 + 0x68) = 0xc00;
      *(undefined *)(param_1 + 0x12) = 8;
LAB_08060742:
      *(char *)(param_1 + 0xf) = cVar1 + '\x01';
    }
  }
  else if (cVar1 == '\x01') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) goto LAB_08060742;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x68) + -0x300;
    *(int *)(param_1 + 0x68) = iVar5;
    if (iVar5 < 0) {
      if (*(int *)(param_1 + 0xc0) != 0) {
        *(undefined *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
      sub_08002B5C(0x5d);
      *(undefined2 *)(param_1 + 0xca) = 0;
      *(undefined *)(param_1 + 0xd) = 0xd;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  *(int *)(iVar4 + 0x58) = *(int *)(param_1 + 0x58) + -0x2200;
  *(int *)(iVar4 + 0x68) = *(int *)(param_1 + 0x58) + -0x2200;
  *(int *)(iVar4 + 0x60) = *(int *)(param_1 + 0x58) + -0x2100;
  piVar8 = (int *)(iVar4 + 0x80);
  *piVar8 = *(int *)(param_1 + 0x58) + -0x2100;
  uVar3 = sub_08128954(*(byte *)(param_1 + 0x13) + 1,3);
  *(undefined *)(param_1 + 0x13) = uVar3;
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar5 = *(int *)(param_1 + 0x68) / 2;
  }
  else {
    if (*(char *)(param_1 + 0x13) != '\x01') {
      iVar5 = *(int *)(param_1 + 0x68);
      *(undefined *)(iVar4 + 0x74) = 0;
      *(undefined *)(iVar4 + 0x75) = 0x19;
      goto LAB_080607f6;
    }
    iVar5 = FUN_081288bc(*(int *)(param_1 + 0x68) * 9,10);
  }
  *(undefined *)(iVar4 + 0x74) = 0x1f;
  *(undefined *)(iVar4 + 0x75) = 0x1f;
LAB_080607f6:
  *(undefined *)(iVar4 + 0x76) = 0x1f;
  *(int *)(iVar4 + 0x58) = *(int *)(iVar4 + 0x58) - iVar5;
  *(int *)(iVar4 + 0x68) = *(int *)(iVar4 + 0x68) - iVar5;
  if (*(char *)(param_1 + 0x13) == '\x01') {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + iVar5;
    iVar4 = *piVar8;
  }
  else {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 0x100 + iVar5;
    iVar4 = *piVar8 + 0x100;
  }
  *piVar8 = iVar4 + iVar5;
  return in_lr;
}

