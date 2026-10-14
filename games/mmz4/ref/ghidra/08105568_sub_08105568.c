// sub_08105568 at 0x08105568 (thumb)

undefined4 sub_08105568(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    DAT_0202e3c4 = 0x200;
    DAT_0202ddc4 = 4;
    sub_0801CF00(param_1,0xc206);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc219);
    break;
  case 2:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x2d;
    break;
  case 3:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc201);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 4:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 5:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc200);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 6:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc20e);
    *(undefined *)(param_1 + 0x12) = 2;
    break;
  case 7:
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0xe0;
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc202);
    break;
  case 8:
    sub_0801CFF0(param_1);
    iVar3 = *(int *)(param_1 + 0x54) + -0x180;
    *(int *)(param_1 + 0x54) = iVar3;
    if (DAT_0202ea30 + -0x9800 < iVar3) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_0810557c_caseD_9;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0810557c_caseD_9:
  return in_lr;
}

