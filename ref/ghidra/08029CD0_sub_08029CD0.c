// sub_08029CD0 at 0x08029CD0 (thumb)

undefined4 sub_08029CD0(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xb9) = 1;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08029778(param_1,2);
    sub_0800561C(param_1 + 0x74,&DAT_082accb8);
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 2:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x71) != '\t') {
      return in_lr;
    }
    sub_08076EE8(param_1,(undefined *)(param_1 + 0xbd),(undefined *)(param_1 + 0xba));
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xba) = 0;
    *(undefined *)(param_1 + 0xbd) = 1;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 3:
    iVar3 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)iVar3;
    *(char *)(param_1 + 0xba) = (char)(-((short)(&DAT_080c8ea4)[iVar3 * 4] + 0x100) >> 4);
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x40;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 4:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x12) == '-') {
      *(undefined *)(param_1 + 0xbd) = 2;
      sub_08001EAC(0x2f);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0x30;
    uVar2 = sub_08001EAC(0xf);
    *(undefined2 *)(param_1 + 0xbe) = uVar2;
    *(undefined *)(param_1 + 0xbd) = 3;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 5:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
    *(char *)(param_1 + 0xba) =
         (char)((short)(&DAT_080c8ea4)[(uint)*(byte *)(param_1 + 0x12) * 2] + 0x100 >> 4) + -0x20;
    sub_080297C0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(undefined4 *)(param_1 + 0x54) = 0;
    sub_08001EE8((int)*(short *)(param_1 + 0xbe));
    *(undefined *)(param_1 + 0xbd) = 1;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 6:
    sub_080297C0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xbd) = 0;
    sub_08029778(param_1,3);
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 7:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    break;
  default:
    goto switchD_08029ce4_caseD_8;
  }
  *(char *)(param_1 + 0xe) = cVar1;
switchD_08029ce4_caseD_8:
  return in_lr;
}

