// sub_08106B4C at 0x08106B4C (thumb)

undefined4 sub_08106B4C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    DAT_0202e3c6 = 0x3b1;
    DAT_0202ddc6 = 4;
    sub_0801CF00(param_1,0xc303);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc302);
    break;
  case 2:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc300);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 3:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc301);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 4:
  case 9:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    bVar2 = *(byte *)(param_1 + 10);
    uVar4 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar4 == 0) {
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 5:
  case 10:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc300);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 6:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc304);
    *(undefined *)(param_1 + 0x12) = 3;
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
    sub_0801CF00(param_1,0xc300);
    break;
  case 8:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc301);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 0xb:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc303);
    break;
  case 0xc:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc300);
    break;
  case 0xd:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08002B10(0x1b9);
    sub_0801CF00(param_1,0xc307);
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 0xe:
    sub_0801CFF0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_081050D8(param_1,0x10);
    break;
  case 0xf:
    sub_0801CFF0(param_1);
  default:
    goto switchD_08106b60_caseD_10;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_08106b60_caseD_10:
  return in_lr;
}

