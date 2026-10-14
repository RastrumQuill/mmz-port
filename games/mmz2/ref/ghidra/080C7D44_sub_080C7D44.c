// sub_080C7D44 at 0x080C7D44 (thumb)

undefined4 sub_080C7D44(int param_1)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0xa11a);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xa11b);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 2:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xa11a);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) + -0x1000;
    *(undefined *)(param_1 + 0x12) = 0x20;
    break;
  case 3:
    sub_080128D4(param_1);
    iVar2 = *(int *)(param_1 + 0x54) * 0x1f + *(int *)(param_1 + 100);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1f;
    }
    *(int *)(param_1 + 0x54) = iVar2 >> 5;
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    break;
  case 4:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xa11b);
    break;
  case 5:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 0xd;
    return in_lr;
  default:
    goto switchD_080c7d58_caseD_6;
  case 0xd:
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xa11b);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0xe:
    sub_080128D4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 0x60) == 0) {
      sub_08015518(1,param_1 + 0x54);
      iVar2 = (int)(short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x12) & 0x3f) * 4];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      sVar3 = (short)(iVar2 >> 3) + 0x100;
    }
    else {
      sVar3 = 0x100;
    }
    *(short *)(param_1 + 0x50) = sVar3;
    *(short *)(param_1 + 0x52) = sVar3;
    goto switchD_080c7d58_caseD_6;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c7d58_caseD_6:
  return in_lr;
}

