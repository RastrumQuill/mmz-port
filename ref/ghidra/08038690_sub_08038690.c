// sub_08038690 at 0x08038690 (thumb)

undefined4 sub_08038690(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08029778(param_1,0xe);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    iVar2 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (iVar2 < 0) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
LAB_08038766:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_08029778(param_1,0x13);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) goto LAB_08038766;
    break;
  case 4:
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      DAT_02022b6e = DAT_02022b6e | 2;
      sub_08015698(0x10,param_1 + 0x4c);
      sub_08001EAC(0xcf);
      sub_080369F0(param_1);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  default:
    goto switchD_080386a4_caseD_6;
  }
  sub_080297C0(param_1);
switchD_080386a4_caseD_6:
  return in_lr;
}

