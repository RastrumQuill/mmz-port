// sub_0805DC40 at 0x0805DC40 (thumb)

undefined4 sub_0805DC40(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_080128D4(param_1);
    iVar1 = *(int *)(param_1 + 0x58) + 0x200;
    *(int *)(param_1 + 0x58) = iVar1;
    if (iVar1 <= *(int *)(param_1 + 0xcc)) {
      return in_lr;
    }
    break;
  case 1:
    sub_080127E4(param_1,0xaa02);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080032EC(0x79);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xc4) + 0x5000;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc) + -0x2000;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
    *(undefined4 *)(param_1 + 100) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 2:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar1;
    if (iVar1 < -0x7f) {
      return in_lr;
    }
    break;
  case 3:
    sub_080127E4(param_1,0xaa01);
    break;
  case 4:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar1;
    if (iVar1 != 0) {
      return in_lr;
    }
    break;
  case 5:
    sub_080127E4(param_1,0xaa04);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 6:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_0805dc66_caseD_7;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_0805dc66_caseD_7:
  return in_lr;
}

