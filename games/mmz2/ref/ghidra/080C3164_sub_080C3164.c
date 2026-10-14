// sub_080C3164 at 0x080C3164 (thumb)

undefined4 sub_080C3164(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0xc402);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    iVar3 = *(int *)(param_1 + 0x54) + 0x100;
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0xb4)) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 2:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc407);
    break;
  case 3:
    sub_080128D4(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 1) == 0) {
      return in_lr;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xfe;
    sub_080127E4(param_1,0xc400);
    break;
  case 4:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc407);
    break;
  case 5:
    sub_080128D4(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 2) != 0) {
      *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xfd;
      sub_080127E4(param_1,0xc400);
      *(undefined *)(param_1 + 0x12) = 0xf;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 0xf;
    cVar2 = '\t';
    goto LAB_080c33f0;
  case 6:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc401);
    break;
  case 7:
    sub_080128D4(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 4) == 0) {
      return in_lr;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xfb;
    sub_080127E4(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 8:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc407);
    cVar2 = '\x05';
    goto LAB_080c33f0;
  case 9:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc408);
    break;
  case 10:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc400);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 0xb:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc406);
    break;
  case 0xc:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x20) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc402);
    break;
  case 0xd:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
    uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar4 < 0x1001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080c3178_caseD_e;
  }
  cVar2 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080c33f0:
  *(char *)(param_1 + 0xd) = cVar2;
switchD_080c3178_caseD_e:
  return in_lr;
}

