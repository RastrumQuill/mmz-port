// sub_080F116C at 0x080F116C (thumb)

undefined4 sub_080F116C(int param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0x11)) {
  case 0:
    DAT_0202e39c = 0x381;
    DAT_0202dd9c = 9;
    sub_0801CF00(param_1,0xae01);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x25) = 0x1d;
    *(undefined *)(param_1 + 0x13) = 0;
    uVar4 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae02);
    break;
  case 2:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae03);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    break;
  case 3:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae01);
    break;
  case 4:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae02);
    break;
  case 5:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae03);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    break;
  case 6:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae01);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 7:
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae1d);
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0x13) = 0xff;
    break;
  case 8:
    cVar2 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x71);
    cVar1 = *(char *)(param_1 + 0x71);
    if ((cVar1 != cVar2) && ((cVar1 == '\x06' || (cVar1 == '\n')))) {
      sub_08002B10(0x136);
    }
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae07);
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(undefined *)(param_1 + 0x13) = 0xff;
    break;
  case 9:
    cVar2 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x71);
    cVar1 = *(char *)(param_1 + 0x71);
    if ((cVar1 != cVar2) && ((cVar1 == '\x03' || (cVar1 == '\a')))) {
      sub_08002B10(0x136);
    }
    sub_0801CFF0(param_1);
    if (*(int *)(param_1 + 0x5c) < 0x400) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    break;
  case 10:
    sub_0801CFF0(param_1);
    if (0 < *(int *)(param_1 + 0x5c)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x40;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (0 < *(int *)(param_1 + 0x5c)) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae01);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 0xb:
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae11);
    sub_08002B10(0x127);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    break;
  case 0xc:
    sub_0801CFF0(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae12);
    break;
  case 0xd:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae01);
    cVar2 = '\x14';
    goto LAB_080f1594;
  default:
    goto switchD_080f1180_caseD_e;
  case 0x14:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae02);
    break;
  case 0x15:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae03);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    break;
  case 0x16:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xae01);
    cVar2 = '\x1e';
    goto LAB_080f1594;
  case 0x1e:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 0x1f:
    sVar3 = sub_080ED208(param_1,0xae01,1);
    if (sVar3 == 0) {
      return in_lr;
    }
  }
  cVar2 = *(char *)(param_1 + 0x11) + '\x01';
LAB_080f1594:
  *(char *)(param_1 + 0x11) = cVar2;
switchD_080f1180_caseD_e:
  return in_lr;
}

