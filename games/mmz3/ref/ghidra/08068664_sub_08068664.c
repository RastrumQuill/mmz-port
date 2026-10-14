// sub_08068664 at 0x08068664 (thumb)

undefined4 sub_08068664(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  char cVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(undefined *)(param_1 + 0xb8) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      else {
        *(undefined *)(param_1 + 0xb8) = 1;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
    }
    else if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0xb8) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(undefined *)(param_1 + 0xb8) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(undefined *)(param_1 + 0x13) = 0;
      uVar3 = 1;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 6;
      uVar3 = 2;
    }
    *(undefined *)(param_1 + 0xe) = uVar3;
    sub_08017700(param_1,*(undefined2 *)(&DAT_083629bc + (uint)*(byte *)(param_1 + 0x13) * 2));
    *(undefined *)(param_1 + 0xb9) = 0;
    sub_08007390(param_1 + 0x74,
                 &DAT_08362864 +
                 *(int *)(&DAT_083629cc + (uint)*(byte *)(param_1 + 0x13) * 4) * 0x18);
    *(undefined *)(param_1 + 0x12) = 6;
    break;
  case 1:
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar4 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar4, cVar4 == '\0')) {
      bVar1 = *(byte *)(param_1 + 0x13);
      if (bVar1 < 6) {
        *(byte *)(param_1 + 0x13) = bVar1 + 1;
        if (bVar1 == 2) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
          *(undefined *)(param_1 + 0x4c) = 1;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        }
        sub_08017700(param_1,*(undefined2 *)(&DAT_083629bc + (uint)*(byte *)(param_1 + 0x13) * 2));
        *(undefined *)(param_1 + 0x12) = 6;
        sub_08007390(param_1 + 0x74,
                     &DAT_08362864 +
                     *(int *)(&DAT_083629cc + (uint)*(byte *)(param_1 + 0x13) * 4) * 0x18);
      }
      else {
        *(undefined *)(param_1 + 0xe) = 10;
      }
    }
    if (*(int *)(param_1 + 0x54) <= *(int *)(DAT_0202f5c0 + 0x54)) goto LAB_0806891c;
LAB_080688f6:
    if (*(char *)(param_1 + 0x13) == '\x02') {
      *(undefined *)(param_1 + 0xbb) = 2;
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    break;
  case 2:
    cVar4 = *(char *)(param_1 + 0x12);
    if (cVar4 != '\0') {
      *(char *)(param_1 + 0x12) = cVar4 + -1;
      if (cVar4 == '\x01') {
        cVar2 = *(char *)(param_1 + 0x13);
        if (cVar2 == '\0') {
          *(undefined *)(param_1 + 0xe) = 10;
        }
        else {
          *(char *)(param_1 + 0x13) = cVar2 + -1;
          if (cVar2 == '\x04') {
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
            *(char *)(param_1 + 0x4c) = cVar4 + -1;
            *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
          }
          sub_08017700(param_1,*(undefined2 *)(&DAT_083629bc + (uint)*(byte *)(param_1 + 0x13) * 2))
          ;
          *(undefined *)(param_1 + 0x12) = 6;
          sub_08007390(param_1 + 0x74,
                       &DAT_08362864 +
                       *(int *)(&DAT_083629cc + (uint)*(byte *)(param_1 + 0x13) * 4) * 0x18);
        }
      }
    }
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) goto LAB_080688f6;
LAB_0806891c:
    if (*(char *)(param_1 + 0x13) == '\x04') {
      *(undefined *)(param_1 + 0xbb) = 4;
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    break;
  default:
    goto switchD_08068678_caseD_3;
  case 10:
    sub_08017700(param_1,0x800);
    sub_08007390(param_1 + 0x74,&DAT_08362864);
    iVar5 = *(int *)(param_1 + 0xbc);
    if (iVar5 != 0) {
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfe;
      iVar5 = *(int *)(param_1 + 0xbc);
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
      *(undefined4 *)(iVar5 + 0xc) = 3;
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(iVar5 + 9)] + 0xc);
    }
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_080177F4(param_1);
    cVar4 = *(char *)(param_1 + 0x12);
    if (cVar4 != '\0') {
      *(char *)(param_1 + 0x12) = cVar4 + -1;
      if (cVar4 == '\x01') {
        *(undefined *)(param_1 + 0xd) = 1;
        *(char *)(param_1 + 0xe) = cVar4 + -1;
      }
    }
    goto switchD_08068678_caseD_3;
  }
  sub_080177F4(param_1);
switchD_08068678_caseD_3:
  return in_lr;
}

