// sub_08070A3C at 0x08070A3C (thumb)

undefined4 sub_08070A3C(int param_1)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  undefined uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x1800);
    sub_08007390(param_1 + 0x74,&DAT_0836320c);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 100) = 0xffffffe0;
      if (*(char *)(param_1 + 0xbc) == '\x01') {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      else {
LAB_08070ada:
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 100) = 0x20;
      if (*(char *)(param_1 + 0xbc) != '\0') goto LAB_08070ada;
      *(undefined *)(param_1 + 0xf) = 1;
    }
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sVar1 = (&DAT_080fe64c)[*(byte *)(param_1 + 0x13)];
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) + sVar1 * 6;
    sub_08070FF0(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
      if (*(char *)(param_1 + 0xf) == '\x01') {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x02';
      }
      else {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    break;
  case 2:
    if (*(byte *)(param_1 + 0xbc) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    uVar8 = *(byte *)(param_1 + 0xbc) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar8;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
    goto LAB_08070bbe;
  case 3:
    sub_08017700(param_1,0x1801);
    sub_08007390(param_1 + 0x74,&DAT_0836323c);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 0x13) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_08070FF0(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
      *(undefined *)(param_1 + 0x12) = 0xc;
      if (*(char *)(param_1 + 0x13) != '\0') {
        cVar2 = *(char *)(param_1 + 0x13) + -1;
        *(char *)(param_1 + 0x13) = cVar2;
        if (cVar2 == '\0') {
LAB_08070bbe:
          *(undefined *)(param_1 + 0xe) = 10;
          return in_lr;
        }
        pbVar5 = (byte *)(param_1 + 0xbc);
        *pbVar5 = *pbVar5 ^ 1;
        if (*pbVar5 == 0) {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
        uVar8 = *pbVar5 & 1;
        *(char *)(param_1 + 0x4c) = (char)uVar8;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
        sub_08007390(param_1 + 0x74,&DAT_0836320c);
        sub_08017700(param_1,0x1806);
      }
    }
    sub_080177F4(param_1);
    break;
  default:
    break;
  case 10:
    iVar9 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar9;
    uVar6 = 0x200;
    if ((0x200 < iVar9) || (uVar6 = 0xfffffe00, iVar9 < -0x200)) {
      *(undefined4 *)(param_1 + 0x5c) = uVar6;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x68) < *(int *)(param_1 + 0x58)) {
      iVar9 = -0x100;
    }
    else {
      iVar9 = 0x100;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar9;
    sub_08070FF0(param_1);
    iVar9 = *(int *)(param_1 + 0x5c);
    if (iVar9 < 0) {
      iVar9 = -iVar9;
    }
    piVar7 = (int *)(param_1 + 0xb4);
    iVar10 = *(int *)(param_1 + 0x54);
    iVar11 = iVar10 - *piVar7;
    if (iVar11 < 1) {
      if (iVar9 < *piVar7 - iVar10) goto LAB_08070c9a;
LAB_08070c94:
      uVar4 = 1;
LAB_08070cf2:
      *(undefined *)(param_1 + 0xd) = uVar4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      if (iVar11 <= iVar9) goto LAB_08070c94;
LAB_08070c9a:
      iVar9 = iVar10 - *piVar7;
      if (iVar9 < 1) {
        iVar9 = *piVar7 - iVar10;
      }
      if (iVar9 < 0xa001) {
        if (*(char *)(param_1 + 0xbc) == '\0') {
          iVar9 = iVar10 - *(int *)(DAT_0202f5c0 + 0x54);
        }
        else {
          iVar9 = *(int *)(DAT_0202f5c0 + 0x54) - iVar10;
        }
        if (0x7fff < iVar9) goto LAB_08070cf6;
        iVar9 = iVar10 - *piVar7;
        if (iVar9 < 1) {
          iVar9 = *piVar7 - iVar10;
        }
        *(int *)(param_1 + 0xb8) = iVar9;
        uVar4 = 2;
        goto LAB_08070cf2;
      }
    }
LAB_08070cf6:
    sub_080177F4(param_1);
  }
  return in_lr;
}

