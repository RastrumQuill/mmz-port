// sub_08053000 at 0x08053000 (thumb)

undefined4 sub_08053000(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_08053018_caseD_1;
  case 2:
    sub_080033F0(param_1 + 0x6c,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar4 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      if (((*(ushort *)(param_1 + 0x90) & 1) != 0) && (0 < *(int *)(param_1 + 0xc0))) {
        iVar4 = iVar4 * 0x60;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xff;
        }
        *(int *)(param_1 + 0x54) = iVar4 >> 8;
      }
      iVar6 = (uint)*(byte *)(param_1 + 0x10) * 4;
      iVar4 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_082af624 + iVar6);
      *(int *)(param_1 + 0x54) = iVar4;
      if (*(int *)(&DAT_082af618 + iVar6) < iVar4) {
        *(int *)(param_1 + 0x54) = *(int *)(&DAT_082af618 + iVar6);
      }
      if ((*(char *)(param_1 + 0x11) == '\0') ||
         (*(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c) < 1)) goto LAB_0805323e;
      goto LAB_08053238;
    }
    if (((*(ushort *)(param_1 + 0x90) & 1) != 0) && (*(int *)(param_1 + 0xc0) < 0)) {
      iVar4 = iVar4 * 0x60;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x54) = iVar4 >> 8;
    }
    iVar6 = (uint)*(byte *)(param_1 + 0x10) * 4;
    iVar7 = *(int *)(param_1 + 0x54) - *(int *)(&DAT_082af624 + iVar6);
    *(int *)(param_1 + 0x54) = iVar7;
    iVar4 = -*(int *)(&DAT_082af618 + iVar6);
    if (iVar7 + *(int *)(&DAT_082af618 + iVar6) < 0 != SBORROW4(iVar7,iVar4)) {
      *(int *)(param_1 + 0x54) = iVar4;
    }
    if ((*(char *)(param_1 + 0x11) != '\0') &&
       (*(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c) < 0)) goto LAB_08053238;
    goto LAB_0805323e;
  case 4:
    sub_080033F0(param_1 + 0x6c,2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar4 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) = iVar4 + 10;
      if (0 < iVar4 + 10) {
        *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
        bVar1 = *(byte *)(param_1 + 0x12);
        goto LAB_080532c2;
      }
    }
    else {
      *(int *)(param_1 + 0x54) = iVar4 + -10;
      if (iVar4 + -10 < 0) {
        *(undefined *)(param_1 + 0xe) = 0;
        bVar1 = *(byte *)(param_1 + 0x12);
LAB_080532c2:
        *(byte *)(param_1 + 0x12) = bVar1 ^ 1;
      }
    }
    cVar3 = sub_0805285C(param_1);
    if (cVar3 != '\0') {
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) ^ 1;
    }
    goto LAB_080532de;
  default:
    goto switchD_08053018_caseD_6;
  }
  sub_080033F0(param_1 + 0x6c,7);
  *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x12) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_08001EAC(0xe);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08053018_caseD_1:
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar2;
  if ((0xb < bVar2) && (cVar3 = sub_080C8CB0(*(undefined *)(param_1 + 0x13),6), cVar3 == '\0')) {
    sub_0808827C(3,param_1 + 0x4c);
  }
  iVar4 = *(int *)(param_1 + 0x54);
  iVar6 = *(int *)(param_1 + 0x4c) + iVar4;
  *(int *)(param_1 + 0x4c) = iVar6;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar5 = (uint)bVar1 * 4;
    iVar4 = iVar4 - *(int *)(&DAT_082af624 + iVar5);
    *(int *)(param_1 + 0x54) = iVar4;
    iVar7 = -*(int *)(&DAT_082af618 + iVar5);
    if (iVar4 + *(int *)(&DAT_082af618 + iVar5) < 0 != SBORROW4(iVar4,iVar7)) {
      *(int *)(param_1 + 0x54) = iVar7;
      goto LAB_08053238;
    }
    if ((*(char *)(param_1 + 0x11) != '\0') && (iVar6 - *(int *)(DAT_0202286c + 0x4c) < 0))
    goto LAB_08053126;
  }
  else {
    iVar5 = (uint)bVar1 * 4;
    iVar7 = *(int *)(&DAT_082af624 + iVar5);
    *(int *)(param_1 + 0x54) = iVar4 + iVar7;
    if (*(int *)(&DAT_082af618 + iVar5) < iVar4 + iVar7) {
      *(int *)(param_1 + 0x54) = *(int *)(&DAT_082af618 + iVar5);
LAB_08053238:
      cVar3 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      if ((*(char *)(param_1 + 0x11) == '\0') || (iVar6 - *(int *)(DAT_0202286c + 0x4c) < 1))
      goto LAB_0805323e;
LAB_08053126:
      cVar3 = *(char *)(param_1 + 0xe) + '\x03';
    }
    *(char *)(param_1 + 0xe) = cVar3;
  }
LAB_0805323e:
  sub_0805285C(param_1);
  cVar3 = FUN_08052f04(param_1);
  if (cVar3 == '\x01') {
    if (0x2f2 < *(int *)(param_1 + 0x54) + 0x179U) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  else if (cVar3 == '\x02') {
    *(undefined *)(param_1 + 0x11) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_080532de:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
switchD_08053018_caseD_6:
  return in_lr;
}

