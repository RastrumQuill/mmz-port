// sub_08070764 at 0x08070764 (thumb)

undefined4 sub_08070764(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_08070778_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    iVar7 = *(int *)(param_1 + 0x60) + (*(int *)(param_1 + 0x60) * -0x10 >> 8);
    *(int *)(param_1 + 0x60) = iVar7;
    iVar5 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0xb >> 8);
    *(int *)(param_1 + 0x5c) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar7;
    sub_08070FF0(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 4:
    sub_08017700(param_1,0x1801);
    sub_08007390(param_1 + 0x74,&DAT_0836323c);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 0x13) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar7 = *(int *)(param_1 + 0x60) + (*(int *)(param_1 + 0x60) * -0x10 >> 8);
    *(int *)(param_1 + 0x60) = iVar7;
    iVar5 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0xb >> 8);
    *(int *)(param_1 + 0x5c) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar7;
    sub_08070FF0(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
      *(undefined *)(param_1 + 0x12) = 0xc;
      cVar2 = *(char *)(param_1 + 0x13);
      if (cVar2 != '\0') {
        *(char *)(param_1 + 0x13) = cVar2 + -1;
        if (cVar2 == '\x01') {
          *(char *)(param_1 + 0xe) = cVar2 + -1;
          return in_lr;
        }
        pbVar3 = (byte *)(param_1 + 0xbc);
        *pbVar3 = *pbVar3 ^ 1;
        if (*pbVar3 == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar1;
        uVar6 = *pbVar3 & 1;
        *(char *)(param_1 + 0x4c) = (char)uVar6;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
        sub_08007390(param_1 + 0x74,&DAT_0836320c);
        sub_08017700(param_1,0x1806);
      }
    }
    sub_080177F4(param_1);
  default:
    goto switchD_08070778_caseD_6;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_08017700(param_1,0x1800);
  sub_08007390(param_1 + 0x74,&DAT_0836320c);
  if (*(byte *)(param_1 + 0xbc) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar6 = *(byte *)(param_1 + 0xbc) & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08070778_caseD_1:
  sub_080177F4(param_1);
  if (*(int *)(DAT_0202f5c0 + 0x58) + -0x1400 < *(int *)(param_1 + 0x58)) {
    if (*(int *)(param_1 + 0x60) < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    iVar7 = *(int *)(param_1 + 0x60);
    iVar5 = 0x100;
  }
  else {
    if (0 < *(int *)(param_1 + 0x60)) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    iVar7 = *(int *)(param_1 + 0x60);
    iVar5 = -0x100;
  }
  iVar7 = iVar7 + ((iVar5 - iVar7) * 0x28 >> 8);
  *(int *)(param_1 + 0x60) = iVar7;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar7;
  if (*(char *)(param_1 + 0xbc) == '\0') {
    uVar4 = 0xfffffe00;
    iVar5 = *(int *)(param_1 + 0x5c) + -0x200;
    *(int *)(param_1 + 0x5c) = iVar5;
    if (iVar5 < -0x200) {
LAB_08070876:
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
    }
  }
  else {
    uVar4 = 0x200;
    iVar5 = *(int *)(param_1 + 0x5c) + 0x200;
    *(int *)(param_1 + 0x5c) = iVar5;
    if (0x200 < iVar5) goto LAB_08070876;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  piVar8 = (int *)(param_1 + 0xb8);
  *piVar8 = *piVar8 + *(int *)(param_1 + 0x5c);
  sub_08070FF0(param_1);
  if (*(char *)(param_1 + 0xbc) == '\0') {
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
LAB_080708b4:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) goto LAB_080708b4;
  iVar5 = *piVar8;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (0x12000 < iVar5) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
switchD_08070778_caseD_6:
  return in_lr;
}

