// sub_080612C4 at 0x080612C4 (thumb)

undefined4 sub_080612C4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined uVar7;
  int *piVar8;
  int iVar9;
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
      uVar7 = 6;
    }
    else {
      *(undefined *)(iVar3 + 0x78) = 0x35;
      iVar3 = *(int *)(param_1 + 0xc0);
      uVar7 = 10;
    }
    *(undefined *)(iVar3 + 0x79) = uVar7;
    if (*(int *)(param_1 + 0xc0) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xa51a);
    *(short *)(param_1 + 200) = *(short *)(param_1 + 0xa4) + -3;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar4 = 0xffffffd8;
    }
    else {
      uVar4 = 0x28;
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    sub_080C6004(param_1,0);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (DAT_0202e910 == 0xb) {
      sub_08002B10(0x11d);
    }
    else {
      sub_08002B10(0x11e);
    }
    sub_08002B10(0x5d);
    *(undefined2 *)(param_1 + 0xca) = 0x5d;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_0801FE64(8,param_1 + 0x54);
  if (*(short *)(param_1 + 0xa4) < *(short *)(param_1 + 200)) {
    uVar7 = 0x24;
    goto LAB_08061652;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  if (iVar3 < 1) {
    iVar9 = -0x60;
  }
  else {
    iVar9 = -0x10;
  }
  *(int *)(param_1 + 0x60) = iVar3 + iVar9;
  if (*(int *)(param_1 + 0x60) < -0x400) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
  }
  cVar2 = *(char *)(param_1 + 0xf);
  if (cVar2 == '\0') {
    iVar3 = *(int *)(param_1 + 0x68) + 0x80;
    *(int *)(param_1 + 0x68) = iVar3;
    if (0xa00 < iVar3) {
      *(undefined4 *)(param_1 + 0x68) = 0xa00;
      *(undefined *)(param_1 + 0x12) = 0x14;
      cVar2 = '\x01';
      goto LAB_0806144e;
    }
  }
  else if (cVar2 == '\x01') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      cVar2 = '\x02';
LAB_0806144e:
      *(char *)(param_1 + 0xf) = cVar2;
    }
  }
  else if ((cVar2 == '\x02') &&
          (iVar3 = *(int *)(param_1 + 0x68) + -0x300, *(int *)(param_1 + 0x68) = iVar3, iVar3 < 0))
  {
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    *(undefined2 *)(param_1 + 0xca) = 0;
    cVar2 = *(char *)(param_1 + 0xf) + '\x01';
    goto LAB_0806144e;
  }
  iVar3 = *(int *)(param_1 + 0xc0);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0x13) == '\0') {
      iVar9 = *(int *)(param_1 + 0x68) / 2;
LAB_08061496:
      *(undefined *)(iVar3 + 0x74) = 0x1f;
      *(undefined *)(iVar3 + 0x75) = 0x1f;
    }
    else {
      if (*(char *)(param_1 + 0x13) == '\x01') {
        iVar9 = FUN_081288bc(*(int *)(param_1 + 0x68) << 3,10);
        goto LAB_08061496;
      }
      iVar9 = *(int *)(param_1 + 0x68);
      *(undefined *)(iVar3 + 0x74) = 0;
      *(undefined *)(iVar3 + 0x75) = 0x19;
    }
    *(undefined *)(iVar3 + 0x76) = 0x1f;
    *(int *)(iVar3 + 0x58) = *(int *)(param_1 + 0xb8) + 0x400;
    *(int *)(iVar3 + 0x68) = *(int *)(param_1 + 0xb8) + 0x400;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(iVar3 + 0x5c) = *(int *)(param_1 + 0x54) + -0x2700;
      *(int *)(iVar3 + 0x7c) = *(int *)(param_1 + 0x54) + -0x2400;
      *(int *)(iVar3 + 0x60) = *(int *)(param_1 + 0x58) + 0x800;
      piVar8 = (int *)(iVar3 + 0x80);
      *piVar8 = *(int *)(param_1 + 0x58) + 0xc00;
      *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) - iVar9;
      *(int *)(iVar3 + 0x7c) = *(int *)(iVar3 + 0x7c) + iVar9;
      *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) - iVar9;
      iVar5 = *piVar8;
      *piVar8 = iVar5 + iVar9;
      *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x7c) - (*(int *)(iVar3 + 0x58) - (iVar5 + iVar9));
      iVar9 = *(int *)(iVar3 + 0x5c) - (*(int *)(iVar3 + 0x68) - *(int *)(iVar3 + 0x60));
    }
    else {
      *(int *)(iVar3 + 0x5c) = *(int *)(param_1 + 0x54) + 0x2400;
      *(int *)(iVar3 + 0x7c) = *(int *)(param_1 + 0x54) + 0x2700;
      *(int *)(iVar3 + 0x60) = *(int *)(param_1 + 0x58) + 0xc00;
      piVar8 = (int *)(iVar3 + 0x80);
      *piVar8 = *(int *)(param_1 + 0x58) + 0x800;
      *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) - iVar9;
      *(int *)(iVar3 + 0x7c) = *(int *)(iVar3 + 0x7c) + iVar9;
      *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + iVar9;
      iVar5 = *piVar8;
      *piVar8 = iVar5 - iVar9;
      *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x7c) + (*(int *)(iVar3 + 0x58) - (iVar5 - iVar9));
      iVar9 = *(int *)(iVar3 + 0x5c) + (*(int *)(iVar3 + 0x68) - *(int *)(iVar3 + 0x60));
    }
    *(int *)(iVar3 + 100) = iVar9;
    cVar2 = sub_08128954(*(byte *)(param_1 + 0x13) + 1,3);
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      bVar1 = *(byte *)(param_1 + 10);
      if ((bVar1 & 0x10) == 0) {
        sub_080C609C(*(undefined4 *)(iVar3 + 100),*(undefined4 *)(iVar3 + 0x68),
                     ((uint)bVar1 << 0x18) >> 0x1c & 1);
        sub_080C609C(*(int *)(iVar3 + 100) + 0x1000,*(undefined4 *)(iVar3 + 0x68),
                     *(byte *)(param_1 + 10) >> 4 & 1);
      }
      else {
        sub_080C609C(*(undefined4 *)(iVar3 + 0x54),*(undefined4 *)(iVar3 + 0x58),bVar1 >> 4 & 1);
        sub_080C609C(*(int *)(iVar3 + 0x54) + -0x1000,*(undefined4 *)(iVar3 + 0x58),
                     *(byte *)(param_1 + 10) >> 4 & 1);
      }
    }
  }
  uVar6 = *(byte *)(param_1 + 10) & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    if (*(int *)(param_1 + 0x54) <= DAT_0202ea30 + 0x2800) {
      return in_lr;
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    sub_08002B5C(0x5d);
    *(undefined2 *)(param_1 + 0xca) = 0;
    *(undefined *)(param_1 + 0xd) = 0x1e;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  if (DAT_0202ea30 + -0x2801 <= *(int *)(param_1 + 0x54)) {
    return in_lr;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
    *(uint *)(param_1 + 0xc0) = uVar6;
  }
  sub_08002B5C(0x5d);
  *(short *)(param_1 + 0xca) = (short)uVar6;
  uVar7 = 0x1e;
LAB_08061652:
  *(undefined *)(param_1 + 0xd) = uVar7;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

