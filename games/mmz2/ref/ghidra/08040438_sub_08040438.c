// sub_08040438 at 0x08040438 (thumb)

undefined4 sub_08040438(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0xc000;
      *(undefined *)(param_1 + 0xf) = 5;
      return in_lr;
    }
    goto LAB_08040556;
  case 1:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080127E4(param_1,0xa21b);
    sub_080032EC(0x47);
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0xe000;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_08040460_caseD_2:
    sub_080128D4(param_1);
    if ('\x01' < *(char *)(param_1 + 0x71)) {
      local_10 = *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x54) = local_10 + -0x555;
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if ((bVar1 & 1) != 0) {
        local_10 = local_10 + 0x1eab;
        local_c = *(undefined4 *)(param_1 + 0x58);
        sub_080AC60C(3,&local_10);
      }
    }
    if (*(char *)(param_1 + 0x73) == '\x04') {
LAB_08040556:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
switchD_08040460_caseD_7:
    return in_lr;
  case 2:
    goto switchD_08040460_caseD_2;
  case 3:
    sub_080127E4(param_1,0xa205);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 4:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08040556;
  case 5:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080127E4(param_1,0xa200);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 6:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08040460_caseD_7;
  }
}

