// sub_0809C4C4 at 0x0809C4C4 (thumb)

undefined4 sub_0809C4C4(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (1 < *(byte *)(iVar9 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      iVar9 = sub_08008534(*(undefined4 *)(param_1 + 0x54));
      if (*(int *)(param_1 + 0x58) <= iVar9 + -0x1100) {
        return in_lr;
      }
      sub_0801FE64(8,param_1 + 0x54);
      sub_08002B10(0x38);
      *(int *)(param_1 + 0x58) = iVar9 + -0x1100;
    }
    else {
      if (cVar1 != '\x02') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        sub_0809C320(param_1);
        return in_lr;
      }
      if (*(char *)(iVar9 + 0xd) != '\n') {
        return in_lr;
      }
      sub_08002B10(0x135);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    }
    goto LAB_0809c790;
  }
  if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54)) {
    iVar6 = *(int *)(param_1 + 0x5c);
    iVar4 = iVar6 + -0x20;
    *(int *)(param_1 + 0x5c) = iVar4;
    if (0 < iVar4) {
      *(int *)(param_1 + 0x5c) = iVar6 + -0x40;
    }
    uVar7 = 0xfffffc00;
    if (*(int *)(param_1 + 0x5c) < -0x400) {
LAB_0809c560:
      *(undefined4 *)(param_1 + 0x5c) = uVar7;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar6 = iVar4 + 0x20;
    *(int *)(param_1 + 0x5c) = iVar6;
    if (iVar6 < 0) {
      *(int *)(param_1 + 0x5c) = iVar4 + 0x40;
    }
    uVar7 = 0x400;
    if (0x400 < *(int *)(param_1 + 0x5c)) goto LAB_0809c560;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar5 = *(byte *)(iVar9 + 10) & 0x10;
  if ((*(byte *)(iVar9 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4);
      *(uint *)(param_1 + 0x5c) = uVar5;
      *(char *)(param_1 + 0x13) = (char)uVar5;
    }
    else {
      iVar9 = *(int *)(iVar9 + 0xbc) + 0x1800;
      if (*(int *)(param_1 + 0x54) < iVar9) {
        *(int *)(param_1 + 0x54) = iVar9;
        *(uint *)(param_1 + 0x5c) = uVar5;
      }
    }
  }
  else if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  else {
    iVar9 = *(int *)(iVar9 + 0xc0) + -0x1800;
    if (iVar9 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar9;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  if (*(int *)(DAT_0202dbf0 + 0x58) + -0x7000 < *(int *)(param_1 + 0x58)) {
    uVar7 = 0xffffff00;
  }
  else {
    uVar7 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar7;
  uVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x58) = uVar5;
  uVar8 = *(int *)(param_1 + 0xbc) - 0x5000;
  if (uVar8 < uVar5) {
    *(uint *)(param_1 + 0x58) = uVar8;
  }
  uVar5 = *(int *)(param_1 + 0xbc) - 0xd000;
  if (*(uint *)(param_1 + 0x58) < uVar5) {
    *(uint *)(param_1 + 0x58) = uVar5;
  }
  if (0x11 < *(byte *)(param_1 + 0x12)) {
    if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xd) < 2) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_0885dec8,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
LAB_0809c790:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 != -1) {
    return in_lr;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x12);
  bVar2 = sub_08128A9C(uVar5,3);
  if (bVar2 == 1) {
    uVar8 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar8 & 0x7fffffff;
    uVar7 = sub_080C83F0(param_1,0,(&DAT_0885dee0)[uVar5],(uVar8 * 2 >> 0x11 & 1) + 1);
    *(undefined4 *)(param_1 + 0x2c) = uVar7;
    uVar3 = 8;
  }
  else if (bVar2 < 2) {
    if (bVar2 != 0) goto LAB_0809c6e4;
    uVar7 = sub_080C83F0(param_1,0,(&DAT_0885dee0)[uVar5],0);
    *(undefined4 *)(param_1 + 0x2c) = uVar7;
    uVar3 = 8;
  }
  else {
    if (bVar2 != 2) goto LAB_0809c6e4;
    uVar8 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar8 & 0x7fffffff;
    uVar7 = sub_080C83F0(param_1,0,(&DAT_0885dee0)[uVar5],(uVar8 * 2 >> 0x11 & 1) + 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar7;
    uVar3 = 0x40;
  }
  *(undefined *)(param_1 + 0x13) = uVar3;
LAB_0809c6e4:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

