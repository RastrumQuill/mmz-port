// sub_0809F380 at 0x0809F380 (thumb)

undefined4 sub_0809F380(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  ushort *puVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar10 = *(int *)(param_1 + 0x28);
  if ((((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20)) ||
     (*(char *)(iVar10 + 0xd) == '\"')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809F24C(param_1);
    return in_lr;
  }
  sub_0801CFF0(param_1);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    cVar2 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar2 + '\x01';
    cVar2 = sub_08128A9C(cVar2,3);
    if (cVar2 != '\0') {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      uVar11 = uVar4 & 0x7fffffff;
      DAT_0202dc38 = uVar11;
      iVar10 = sub_08128A9C(uVar4 * 2 >> 0x11,0x42);
      local_20 = *(int *)(param_1 + 0x54) + (0x21 - iVar10) * 0x100;
      uVar4 = uVar11 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      iVar10 = sub_08128A9C(uVar4 * 2 >> 0x11,0x2a);
      local_1c = *(int *)(param_1 + 0x58) + iVar10 * -0x100;
      sub_080DFA88(&local_20,1,0);
    }
    puVar9 = (ushort *)(param_1 + 0xbc);
    *puVar9 = *puVar9 + 0x10;
    puVar7 = (ushort *)(param_1 + 0xbe);
    *puVar7 = *puVar7 + 8;
    if (0x100 < *puVar9) {
      *puVar9 = 0x100;
    }
    if (0x100 < *puVar7) {
      *puVar7 = 0x100;
    }
    *(ushort *)(param_1 + 0x50) = *puVar9;
    *(ushort *)(param_1 + 0x52) = *puVar7;
    if ((*puVar9 != 0x100) && (*puVar7 != 0x100)) {
      return in_lr;
    }
    sub_0801CC9C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_0801CEEC(param_1);
    sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0x11) * 0x1000000 + 0xab000000 >> 0x10);
    *(undefined *)(param_1 + 0x25) = 0x19;
    sub_0801CFF0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_0885e278,param_1 + 0x54,0x20);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0xc0) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    break;
  case 1:
    if (*(int *)(param_1 + 0x2c) == 0) {
      if (*(char *)(param_1 + 0x11) != '\0') {
        iVar8 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        *(int *)(param_1 + 0x58) = iVar8;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
        if (*(int *)(param_1 + 0xb8) < iVar8) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
        }
      }
    }
    else if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    iVar8 = *(int *)(param_1 + 0x58) + -0x2400;
    if (iVar8 < *(int *)(iVar10 + 0xd0)) {
      *(int *)(iVar10 + 0xd0) = iVar8;
    }
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(byte *)(iVar10 + 0xd) < 0x10) {
        return in_lr;
      }
      if (*(short *)(iVar10 + 0xa4) < 0x10) {
        uVar3 = 0x18;
      }
      else if (*(short *)(iVar10 + 0xa4) < 0x20) {
        uVar3 = 0x1c;
      }
      else {
        uVar3 = 0x20;
      }
      *(undefined *)(param_1 + 0x12) = uVar3;
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) << 1;
      }
      *(undefined *)(param_1 + 0xe) = 1;
      return in_lr;
    }
    if (*(char *)(param_1 + 0xe) == '\x01') {
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0x11) * 0x1000000 + 0xab010000 >> 0x10);
      sub_0801CFF0(param_1);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      return in_lr;
    }
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_0885e2a8);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar5 = 0xffffff40;
    }
    else {
      uVar5 = 0xc0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    break;
  case 2:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar10 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar10;
    if (iVar10 < 1) {
      return in_lr;
    }
    sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0x11) * 0x1000000 + 0xab020000 >> 0x10);
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,&DAT_0885e350);
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
    *(undefined4 *)(param_1 + 100) = 0x80;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0x62;
    }
    else {
      uVar3 = 0x1e;
    }
    *(undefined *)(param_1 + 0x12) = uVar3;
    break;
  case 3:
    iVar10 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (iVar10 * *(short *)((int)&DAT_08128c10 +
                             ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (iVar10 * (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] >> 8);
    if (iVar10 < 0x700) {
      *(int *)(param_1 + 0x5c) = iVar10 + *(int *)(param_1 + 100);
    }
    if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0xb8)) {
      return in_lr;
    }
    sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0x11) * 0x1000000 + 0xab030000 >> 0x10);
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,&DAT_0885e278);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    iVar10 = (int)*(short *)((int)&DAT_08128c10 +
                            ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) *
             *(int *)(param_1 + 0x5c) >> 8;
    *(int *)(param_1 + 0x5c) = iVar10;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 3;
    }
    *(int *)(param_1 + 100) = iVar10 >> 2;
    *(undefined *)(param_1 + 0x12) = 4;
    break;
  case 4:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0x11) * 0x1000000 + 0xab040000 >> 0x10);
    sub_0801CFF0(param_1);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar5 = 0xfffffb00;
    }
    else {
      uVar5 = 0x500;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    break;
  case 6:
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    puVar6 = &DAT_0885e2d8;
    goto LAB_0809f806;
  case 7:
    iVar8 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar8;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(iVar10 + 0x54) <= iVar8) {
        return in_lr;
      }
      bVar1 = *(byte *)(param_1 + 0x11);
    }
    else {
      if (iVar8 <= *(int *)(iVar10 + 0x54)) {
        return in_lr;
      }
      bVar1 = *(byte *)(param_1 + 0x11);
    }
    sub_0801CF00(param_1,(uint)bVar1 * 0x1000000 + 0xab060000 >> 0x10);
    sub_0801CFF0(param_1);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar10 + 0x54);
    puVar6 = &DAT_0885e278;
LAB_0809f806:
    sub_08005784(param_1 + 0x74,puVar6);
    break;
  case 8:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(iVar10 + 0xd9 + (uint)*(byte *)(param_1 + 0x11)) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  default:
    goto switchD_0809f3e2_caseD_9;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0809f3e2_caseD_9:
  return in_lr;
}

