// sub_0804A844 at 0x0804A844 (thumb)

undefined4 sub_0804A844(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0xc0) = 3;
    *(undefined *)(param_1 + 0x12) = 0;
    iVar5 = *(int *)(param_1 + 0x54);
    bVar1 = iVar5 < *(int *)(DAT_0202f5c0 + 0x54);
    if ((0x5000 < (iVar5 - *(int *)(param_1 + 0xb4)) + 0x2800U) &&
       (bVar1 != iVar5 < *(int *)(param_1 + 0xb4))) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0x12) = 1;
      sub_080177F4(param_1);
      return in_lr;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (!bVar1) goto LAB_0804a8ec;
    }
    else if (bVar1) {
LAB_0804a8ec:
      *(undefined *)(param_1 + 0xe) = 2;
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f004);
    *(undefined *)(param_1 + 0x12) = 1;
    sub_08017700(param_1,0xa707);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 2:
    sub_08007390(param_1 + 0x74,&DAT_0835f604);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
      if (uVar4 == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
    sub_08017700(param_1,0xa727);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 4:
    sub_0800471C(0x5f);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080A0474(param_1,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x4900,
                 *(undefined *)(param_1 + 0x12),*(byte *)(param_1 + 10) >> 4 & 1);
    sub_08017700(param_1,0xa729);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    goto switchD_0804a85a_caseD_6;
  case 7:
    sub_08017700(param_1,0xa72a);
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    sub_080177F4(param_1);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0x12;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_0804a85a_caseD_9;
  }
LAB_0804a9fa:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804a85a_caseD_9:
  return in_lr;
switchD_0804a85a_caseD_6:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (bVar2 < 3) {
    *(undefined *)(param_1 + 0xe) = 5;
    return in_lr;
  }
  goto LAB_0804a9fa;
}

