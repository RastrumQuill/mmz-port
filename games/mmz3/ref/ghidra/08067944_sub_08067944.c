// sub_08067944 at 0x08067944 (thumb)

undefined4 sub_08067944(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08067958_caseD_1:
    if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
      sub_080177F4(param_1);
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
LAB_08067a4e:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_08067958_caseD_8:
    return in_lr;
  case 1:
    goto switchD_08067958_caseD_1;
  case 2:
    sub_08017700(param_1,0x601);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 1) != 0) {
      sub_080177F4(param_1);
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08067a4e;
  case 4:
    *(undefined *)(param_1 + 0xb9) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08362740);
    *(undefined *)(param_1 + 0xbb) = 1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    sub_080177F4(param_1);
    iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),
                         *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) + 0xe00);
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    goto LAB_08067a4e;
  case 6:
    sub_0800471C(0x104);
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      sub_08017700(param_1,0x603);
    }
    else {
      sub_08017700(param_1,0x605);
    }
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (((byte)(*(char *)(param_1 + 0x71) - 2U) < 3) || ((byte)(*(char *)(param_1 + 0x71) - 8U) < 3)
       ) {
      sub_08007390(param_1 + 0x74,&DAT_083627a0);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08362770);
    }
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar3 + 0xe00);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08067958_caseD_8;
  }
}

