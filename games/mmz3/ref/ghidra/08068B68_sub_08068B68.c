// sub_08068B68 at 0x08068B68 (thumb)

undefined4 sub_08068B68(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  char cVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0xbb);
      uVar3 = 1;
    }
    else {
      *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0xbb);
      uVar3 = 2;
    }
    *(undefined *)(param_1 + 0xe) = uVar3;
    sub_08017700(param_1,*(undefined2 *)(&DAT_083629bc + (uint)*(byte *)(param_1 + 0x13) * 2));
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
LAB_08068c7c:
        sub_08017700(param_1,*(undefined2 *)(&DAT_083629bc + (uint)*(byte *)(param_1 + 0x13) * 2));
        *(undefined *)(param_1 + 0x12) = 6;
        sub_08007390(param_1 + 0x74,
                     &DAT_08362864 +
                     *(int *)(&DAT_083629cc + (uint)*(byte *)(param_1 + 0x13) * 4) * 0x18);
      }
      else {
LAB_08068c4e:
        *(undefined *)(param_1 + 0xe) = 10;
      }
    }
    break;
  case 2:
    cVar4 = *(char *)(param_1 + 0x12);
    if (cVar4 != '\0') {
      *(char *)(param_1 + 0x12) = cVar4 + -1;
      if (cVar4 == '\x01') {
        cVar2 = *(char *)(param_1 + 0x13);
        if (cVar2 == '\0') goto LAB_08068c4e;
        *(char *)(param_1 + 0x13) = cVar2 + -1;
        if (cVar2 == '\x04') {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
          *(char *)(param_1 + 0x4c) = cVar4 + -1;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        }
        goto LAB_08068c7c;
      }
    }
    break;
  default:
    goto switchD_08068b7c_caseD_3;
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
    goto switchD_08068b7c_caseD_3;
  }
  sub_080177F4(param_1);
switchD_08068b7c_caseD_3:
  return in_lr;
}

