// sub_080C6CFC at 0x080C6CFC (thumb)

undefined4 sub_080C6CFC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202e61a = 0x310;
    DAT_0202e41a = 7;
    sub_08002638(&DAT_08433264,0x11800);
    sub_08002AEC(&DAT_08433270,(DAT_0202e41a - 8) * 0x20 + 0x200);
    sub_080127E4(param_1,0x4503);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    iVar2 = *(int *)(param_1 + 0x54) + -0xc0;
    *(int *)(param_1 + 0x54) = iVar2;
    if (0x1cfff < iVar2) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x54) = 0x1d000;
    sub_080127E4(param_1,0x4500);
    break;
  case 2:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0x4503);
    break;
  case 3:
    sub_080128D4(param_1);
    iVar2 = *(int *)(param_1 + 0x54) + -0xc0;
    *(int *)(param_1 + 0x54) = iVar2;
    if (*(int *)(param_1 + 100) <= iVar2) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
    sub_080127E4(param_1,0x4500);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 4:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0x4503);
    *(undefined *)(param_1 + 0x12) = 0x14;
    break;
  case 5:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0xc0;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0x4500);
    break;
  case 6:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 7:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0x4501);
    break;
  case 8:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_080127E4(param_1,0x4502);
    break;
  case 9:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x25) = 0x1f;
    sub_080127E4(param_1,0x4501);
    break;
  case 10:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_080127E4(param_1,0x4500);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 0xb:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    break;
  case 0xc:
    sub_080128D4(param_1);
  default:
    goto switchD_080c6d10_caseD_d;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c6d10_caseD_d:
  return in_lr;
}

